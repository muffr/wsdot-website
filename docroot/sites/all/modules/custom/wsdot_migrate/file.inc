<?php

/**
 * @file
 * The WSDOT file migration.
 */

/**
 * Migration of files from BlobTable.
 */
class WSDOTFile extends WSDOTMigrationBase {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'BlobId' => t('Unique ID of the file'),
      'BlobSecret' => t('Purpose unknown'),
      'BlobFileExt' => t('File extension, used in constructing file name'),
      'BlobGUID' => t('Globally unique ID of the file'),
      'BlobExecFlag' => t('?'),
      'BlobTimeCreated' => t('Time the file was created/updated'),
      'BlobSize' => t('Size in bytes of the file'),
      'BlobMetaFlag' => t('?'),
      'BlobData' => t('The file contents'),
      'Name' => t('File name from NodeResource table'),
      'destination_file' => t('Constructed Drupal path for file'),
    );

    // We join to the NodeResource table to get the Name we use in
    // constructing the Drupal file path.
    $query = Database::getConnection('default', 'migrate')
      ->select('BlobTable', 'b')
      ->fields('b', array('BlobId', 'BlobFileExt', 'BlobTimeCreated', 'BlobData'));
    $query->innerJoin('NodeResource', 'nr', 'b.BlobId=nr.ResourceBlobId');
    $query->fields('nr', array('Name'));

    // Filter down to only blobs attached to approved content nodes created
    // since the specified date. Note this will import more files than necessary -
    // for example, if our earliest date is 2012-01-01 to accomodate the
    // earliest pages we're migrating, and we're only importing news articles
    // since 2014-01-01, then we will import files associated with unimported
    // news articles. We could narrow our filter by having multiple clauses
    // here for each specific type - that will generate a very complex query.
    // Alternatively, there could a post-migration task to delete files which
    // are unreferenced by any Drupal nodes.
    $query->innerJoin('Node', 'n', 'nr.NodeId=n.Id');
    $query->condition('n.ApprovalStatus', 1)
      ->condition('n.CreatedWhen', $arguments['earliest_date'], '>=')
      // We assume the row with the NULL archive source is the current revision.
      ->isNull('n.ArchiveSourceGUID');
    // A given file may be referenced by multiple nodes, thus the joins will
    // cause multiple rows per blob to be imported. DISTINCT brings us down to
    // one row per file (note that adding fields from the Node table which
    // differ per node would undo this).
    $query->distinct();
    $query->orderBy('b.BlobTimeCreated');

    $this->source = new MigrateSourceSQL($query, $fields, NULL,
                                         $this->sourceOptions);

    $this->destination = new MigrateDestinationFile('file', 'MigrateFileBlob');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'BlobId' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Blob ID',
        )
      ),
      MigrateDestinationFile::getKeySchema()
    );

    // By declaring the last-modified timestamp as our highwater field, we
    // ensure that delta migrations pick up not only new content, but also
    // content that was modified since our previous import.
    $this->highwaterField = array(
      'name' => 'BlobTimeCreated',
      'alias' => 'b',
    );

    $this->addFieldMapping('value', 'BlobData');
    $this->addFieldMapping('destination_file', 'destination_file');
    $this->addFieldMapping('timestamp', 'BlobTimeCreated');
    $this->addFieldMapping('uid')
      ->defaultValue(1)
      ->description('Default ownership to the admin account');

    $this->addFieldMapping(NULL, 'BlobFileExt')
      ->description('Used to construct the Drupal file name');
    $this->addFieldMapping(NULL, 'Name')
      ->description('Used to construct the Drupal file name');

    $this->addUnmigratedDestinations(array(
      'destination_dir',
      'file_replace',
      'path',
      'preserve_files',
    ));

    $this->addUnmigratedSources(array(
      'BlobExecFlag',
      'BlobGUID',
      'BlobMetaFlag',
      'BlobSecret',
      'BlobSize',   // file_save() will compute the filesize anyway.
    ));
  }

  /**
   * @inheritdoc
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Construct the destination file name relative to the Drupal files directory.
    // @todo: We don't really want to put them all in one directory. Add some
    // directory structure here (e.g., by hashing the file name and creating a
    // directory from the first couple of characters).
    $row->destination_file = 'legacy_files/' . $row->Name . '.' . $row->BlobFileExt;

    return TRUE;
  }
}
