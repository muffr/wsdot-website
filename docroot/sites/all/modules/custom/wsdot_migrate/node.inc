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

    $mssql_query = "SELECT *
              FROM Node
              WHERE TemplateGUID={$arguments['type_guid']}";
    $mssql_count_query = "SELECT COUNT(*)
                    FROM Node
                    WHERE TemplateGUID={$arguments['type_guid']}}";
    $fields = array(
      'id' => t('Unique ID of the content item'),
      'IsLocked' => t(''),
      'IsCheckedOut' => t(''),
      'IsCheckedOutVersion' => t(''),
      'HasCheckedInVersion' => t(''),
      'CheckedInVersionHasExisted' => t(''),
      'IsShortcut' => t(''),
      'IsBeingInserted' => t(''),
      'IsHighPriority' => t(''),
      'SameRightsAsParent' => t(''),
      'ReadyForApproval' => t(''),
      'ApprovalStatus' => t(''),
      'Type' => t(''),
      'SortOrdinal' => t(''),
      'NodeGUID' => t(''),
      'ParentGUID' => t(''),
      'FollowGUID' => t(''),
      'DeletedWhen' => t(''),
      'DeletedByUserid' => t(''),
      'CreatedByUserid' => t(''),
      'CreatedWhen' => t('Creation date'),
      'ModifiedByUserid' => t(''),
      'ModifiedWhen' => t('Modification date'),
      'OwnerId' => t(''),
      'ApprovedByUserId' => t(''),
      'EffectiveDate' => t(''),
      'ExpiryDate' => t(''),
      'TemplateGUID' => t('GUID representing the content type'),
      'ArchiveSourceGUID' => t(''),
      'ApprovedWhen' => t(''),
      'ArchivedWhen' => t(''),
      'LockUserId' => t(''),
      'LockMachinename' => t(''),
      'Name' => t(''),
      'TemplateType' => t(''),
      'DirectoryService' => t(''),
      'DirectoryGUID' => t(''),
      'IsHiddenModePublished' => t(''),
      'IsRobotFollowable' => t(''),
      'IsRobotIndexable' => t(''),
      'DisplayName' => t('The content title?'),
      'LastChangeTime' => t(''),
      'PageDefinitionGUID' => t(''),
      'DeletedByClientId' => t(''),
      'CreatedByClientId' => t(''),
      'ModifiedByClientId' => t(''),
      'ApprovedByClientId' => t(''),
      'OwnerClientId' => t(''),
      'LockClientId' => t(''),
      'CheckedOutByUserId' => t(''),
      'CheckedOutByMachine' => t(''),
      'TemplateAspPath' => t(''),
      'SchemaXML' => t(''),
      'UserRoleType' => t(''),
      'OuterScriptFile' => t(''),
      'UseOuterScriptForPostings' => t(''),
      'DefaultPostingName' => t(''),
    );

    $query = Database::getConnection('default', 'migrate')
      ->select('Node', 'n')
      ->fields('n')
      ->condition('TemplateGUID', $arguments['type_guid'])
      // We assume the row with the NULL archive source is the current revision.
      ->isNull('ArchiveSourceGUID');

    $this->source = new MigrateSourceSQL($query, $fields);

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

    $this->addFieldMapping('title', 'DisplayName');
    $this->addFieldMapping('created', 'CreatedWhen');
    $this->addFieldMapping('changed', 'ModifiedWhen');

/*    $this->addFieldMapping('uid', 'OwnerId')
      ->sourceMigration('user');*/

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
/*    static $connection;
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
*/
    $result = Database::getConnection('default', 'migrate')
      ->select('NodeProperty', 'np')
      ->fields('np', array('PropName', 'PropValue'))
      ->condition('NodeID', $row->id)
      ->execute();
    foreach ($result as $property_row) {
      $row->{$property_row->PropName} = $property_row->PropValue;
    }

    // Add fields from the NodePlaceholderContent table.
    $result = Database::getConnection('default', 'migrate')
      ->select('NodePlaceholderContent', 'npc')
      ->fields('npc', array('PropName', 'PropValue'))
      ->condition('NodeID', $row->id)
      ->execute();
    foreach ($result as $placeholder_row) {
      $row->{$placeholder_row->PropName} = $placeholder_row->PropValue;
    }

    // .

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
