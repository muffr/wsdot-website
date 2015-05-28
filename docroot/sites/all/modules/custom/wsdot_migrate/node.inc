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
  protected $controlProps = array();
  protected $resourceLinks = array();

  public function __construct($arguments) {
    parent::__construct($arguments);

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

    $this->source = new MigrateSourceSQL($query, $fields, NULL, $this->sourceOptions);

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

    $this->addFieldMapping('uid', 'OwnerId')
      ->sourceMigration('user');

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
    $result = Database::getConnection('default', 'migrate')
      ->select('NodeProperty', 'np')
      ->fields('np', array('PropName', 'PropValue'))
      ->condition('NodeID', $row->id)
      ->execute();
    foreach ($result as $property_row) {
      $row->{$property_row->PropName} = $property_row->PropValue;
    }

    // Deal with NodeResource.
    $result = Database::getConnection('default', 'migrate')
      ->select('NodeResource', 'nr')
      ->fields('nr')
      ->condition('NodeID', $row->id)
      ->orderBy('id')
      ->execute();
    // ResourceBlobID references blobs (files)
    $this->resourceLinks = array();
    foreach ($result as $resource_row) {
      if ($resource_row->ResourceBlobId) {
        // @todo handle blobs
      }
      else {
        $this->resourceLinks[$resource_row->id] = $resource_row->URL;
      }
    }

    // Add fields from the NodePlaceholderContent table.
    $result = Database::getConnection('default', 'migrate')
      ->select('NodePlaceholderContent', 'npc')
      ->fields('npc')
      ->condition('NodeID', $row->id)
      ->orderBy('PlaceholderId', 'id')
      ->execute();
    $row->body = '';
    $placeholder_content = array();
    // Make it simpler to handle on placeholder at a time.
    foreach ($result as $placeholder_row) {
      $placeholder_content[$placeholder_row->PlaceholderID][$placeholder_row->id] =
        $placeholder_row;
    }
    foreach ($placeholder_content as $placeholder_id => $placeholder_detail) {
      // We expect each placeholder_id to have one HTML row and multiple
      // ControlProp rows. We will fetch the HTML and parse it for references to
      // control props, which is turn reference resources - we will use those
      // resources to rewrite the references.
      $this->controlProps = array();
      $html = '';
      foreach ($placeholder_detail as $id => $placeholder_row) {
        if ($placeholder_row->PropName == 'HTML') {
          $html .= $placeholder_row->PropValue;
        }
        else {
          $this->controlProps[$placeholder_row->PropName] = $placeholder_row->ResourceId;
        }
      }
      // Replace each resource reference with a real URL.
      $html = preg_replace_callback('|<!--\* *Resource *= *"(.*?)" -->|i',
                                    array($this, 'handleResource'),
                                    $html);
      $row->body .= $html;
    }

    return TRUE;
  }

  /**
   * Translate resource references to real targets.
   *
   * @param array $matches
   */
  protected function handleResource(array $matches) {
    $control_prop_name = $matches[1];
    $resource_id = $this->controlProps[$control_prop_name];
    $url = $this->resourceLinks[$resource_id];
    return $url;
  }
}

class WSDOTNewsArticle extends WSDOTNode {
  public function __construct($arguments) {
    parent::__construct($arguments);

    // Field mappings specific to news articles.
  }
}
