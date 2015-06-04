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
      'destination_file' => t('Constructed Drupal path for file'),
    );

    // We join to the NodeResource table to get the Name we use in
    // constructing the Drupal file path.
    $query = Database::getConnection('default', 'migrate')
      ->select('BlobTable', 'b')
      ->fields('b', array('BlobId', 'BlobFileExt', 'BlobTimeCreated', 'BlobData'));
    // Filter down to only blobs attached to approved content nodes.
    $query->innerJoin('NodeResource', 'nr', 'b.BlobId=nr.ResourceBlobId');
    $query->innerJoin('Node', 'n', 'nr.NodeId=n.Id');
    $query->condition('n.ApprovalStatus', 1)
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

    // We construct the filename from the Name column in references from the
    // NodeResource table. There could be more than one distinct Name, though,
    // so we pick one (disfavoring the default "_Content").
    $names = Database::getConnection('default', 'migrate')
      ->select('NodeResource', 'nr')
      ->fields('nr', array('Name'))
      ->condition('ResourceBlobId', $row->BlobId)
      ->distinct()
      ->execute()
      ->fetchCol();
    // If there are no references to this blob, no reason to import it - ignore.
    if (count($names) == 0) {
      return FALSE;
    }

    // Otherwise, take the first name - unless there are multiple choices and
    // the first one is '_Content'.
    if (count($names) > 1 && $names[0] == '_Content') {
      // Remove _Content as a candidate.
      unset($names[0]);
    }

    // Construct the destination file name relative to the Drupal files directory.
    // @todo: We don't really want to put them all in one directory. Add some
    // directory structure here (e.g., by hashing the file name and creating a
    // directory from the first couple of characters).
    $row->destination_file = 'legacy_files/' . reset($names) . '.' . $row->BlobFileExt;

    return TRUE;
  }
}
