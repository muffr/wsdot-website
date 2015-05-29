<?php

/**
 * @file
 * The WSDOT file migration.
 */

/**
 * Migration of files from the BlobTable table.
 */
class WSDOTFile extends WSDOTMigrationBase {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'BlobId' => t('Unique ID of the file'),
      'BlobSecret' => t(''),
      'BlobFileExt' => t(''),
      'BlobGUID' => t(''),
      'BlobExecFlag' => t(''),
      'BlobTimeCreated' => t(''),
      'BlobSize' => t(''),
      'BlobMetaFlag' => t(''),
      'BlobData' => t(''),
      'Name' => t('File name from NodeResource table'),
      'destination_file' => t('Constructed Drupal path for file'),
    );

    $query = Database::getConnection('default', 'migrate')
      ->select('BlobTable', 'b')
      ->fields('b');
    $query->innerJoin('NodeResource', 'nr', 'b.BlobId=nr.ResourceBlobId');
    $query->fields('nr', array('Name'));

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

    $this->addFieldMapping('value', 'BlobData');
    $this->addFieldMapping('destination_file', 'destination_file');

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Construct the destination file name relative to the Drupal files directory.
    // @todo: We don't really want to put them all in one directory.
    $row->destination_file = 'legacy_files/' . $row->Name . '.' . $row->BlobFileExt;

    return TRUE;
  }
}
