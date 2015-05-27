<?php

/**
 * @file
 * Shared code for all WSDOT node migrations.
 */

/**
 * All WSDOT node migrations instantiate this class.
 *
 * All content types come from the Node table, where the TemplateGUID column
 * identifies the specific type. Such a structure allows us to support all
 * content types with a simple parameterized class.
 */
abstract class WSDOTNode extends WSDOTMigrationBase {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $query = "SELECT *
              FROM Node
              WHERE TemplateGUID={$arguments['type_guid']}";
    $count_query = "SELECT COUNT(*)
                    FROM Node
                    WHERE TemplateGUID={$arguments['type_guid']}}";
    $fields = array(
      'id' => t('Unique ID of the content item'),
      'IsLocked' => t(''),
      'IsCheckedOut' => t(''),
    );

    $this->source = new MigrateSourceMSSQL($this->arguments['db_credentials'],
      $query, $count_query, $fields);
    $this->destination = new MigrateDestinationNode($arguments['destination_type']);

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Node ID',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('created', 'CreatedWhen');

    $this->addUnmigratedDestinations(array(
      'IsLocked',
    ));
  }

  /**
   * @inheritdoc
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Add fields from the NodeProperty table.
    // We need a fresh mssql connection, otherwise we'll screw up the outer
    // query
    static $connection;
    if (!isset($connection)) {
      $credentials = $this->arguments['db_credentials'];
      $connection = mssql_connect($credentials['servername'], $credentials['username'],
        $credentials['password'], TRUE);
    }
    $query = "SELECT *
              FROM NodeProperty
              WHERE NodeID={$row->id}";
    $result = mssql_query($query, $connection);
    if ($result) {
      while ($property_row = mssql_fetch_object($result)) {
        $row->{$property_row['PropName']} = $property_row['PropValue'];
      }
    }

    // Add fields from the NodePlaceholderContent table.

    // Add fields from the NodeResource table.

    return TRUE;
  }

  public function prepare($node, $row) {

  }

  public function complete($node, $row) {

  }
}

class WSDOTNewsArticle extends WSDOTNode {
  public function __construct($arguments) {
    parent::__construct($arguments);

    // Field mappings specific to news articles.
  }
}
