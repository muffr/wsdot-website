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
  /**
   * Control properties for the current placeholder in the current item.
   *
   * @var array
   */
  protected $controlProps = array();

  /**
   * Links from the NodeResource table for the current item.
   *
   * @var array
   */
  protected $resourceLinks = array();
  /**
   * Mapping of legacy office names to the equivalent Drupal region term names.
   *
   * @var array
   */
  protected $regionMap = array(
    // @todo: Fill in the equivalent Drupal term names.
    'Eastern' => '',
    'Ferries' => '',
    'Headquarters' => '',
    'Local Programs' => '',
    'NC' => '',
    'North Central' => '',
    'Northwest' => '',
    'NW' => '',
    'Olympic' => '',
    'OR' => '',
    'PTR' => '',
    'SC' => '',
    'South Central' => '',
    'Southwest' => '',
    'Statewide' => '',
    'SW' => '',
  );

  /**
   * Mapping of legacy highway names to the equivalent Drupal term names.
   *
   * @var array
   */
  protected $highwayMap = array(
    // @todo: Fill in the equivalent Drupal term names.
    '101' => '',
    '104' => '',
    '106' => '',
    '107' => '',
    '11' => '',
    '112' => '',
    '12' => '',
    '14' => '',
    '16' => '',
    '161' => '',
    '162' => '',
    '164' => '',
    '167' => '',
    '18' => '',
    '181' => '',
    '2' => '',
    '20' => '',
    '205' => '',
    '21' => '',
    '3' => '',
    '303' => '',
    '305' => '',
    '405' => '',
    '405 and 520' => '',
    '405_520' => '',
    '410' => '',
    '5' => '',
    '5, 205' => '',
    '504' => '',
    '509' => '',
    '515' => '',
    '516' => '',
    '520' => '',
    '522' => '',
    '527' => '',
    '529' => '',
    '530' => '',
    '539' => '',
    '542' => '',
    '546' => '',
    '548' => '',
    '9' => '',
    '9/92' => '',
    '90' => '',
    '900' => '',
    '92' => '',
    '99' => '',
    'Chinook Pass' => '',
    'I-205' => '',
    'I-405' => '',
    'I-405/SR 167' => '',
    'I-5' => '',
    'I-5 and I-90' => '',
    'I-5/SR 16' => '',
    'I-5/SR 520/SR 99' => '',
    'I-82' => '',
    'I-90' => '',
    'Interstate 5' => '',
    'None' => '',
    'NSC' => '',
    'SR 100' => '',
    'SR 104' => '',
    'SR 105' => '',
    'SR 112' => '',
    'SR 116' => '',
    'SR 123' => '',
    'SR 14' => '',
    'SR 142' => '',
    'SR 150' => '',
    'SR 153' => '',
    'SR 16' => '',
    'SR 161' => '',
    'SR 162' => '',
    'SR 167' => '',
    'SR 171' => '',
    'SR 18' => '',
    'SR 20' => '',
    'SR 202' => '',
    'SR 203' => '',
    'SR 21' => '',
    'SR 21-Keller Ferry' => '',
    'SR 215' => '',
    'SR 22' => '',
    'SR 241' => '',
    'SR 243' => '',
    'SR 26' => '',
    'SR 27' => '',
    'SR 272' => '',
    'SR 28' => '',
    'SR 285' => '',
    'SR 3' => '',
    'SR 303' => '',
    'SR 305' => '',
    'SR 4' => '',
    'SR 401' => '',
    'SR 410' => '',
    'SR 410 / SR 123' => '',
    'SR 410 and SR 123' => '',
    'SR 411' => '',
    'SR 433' => '',
    'SR 500' => '',
    'SR 501' => '',
    'SR 502' => '',
    'SR 503' => '',
    'SR 504' => '',
    'SR 505' => '',
    'SR 507' => '',
    'SR 508' => '',
    'SR 509' => '',
    'SR 510' => '',
    'SR 516' => '',
    'SR 520' => '',
    'SR 520/I-5' => '',
    'SR 520/SR 202' => '',
    'SR 522' => '',
    'SR 529' => '',
    'SR 530' => '',
    'SR 531' => '',
    'SR 532' => '',
    'SR 539' => '',
    'SR 542' => '',
    'SR 542 SR 547' => '',
    'SR 546' => '',
    'SR 548' => '',
    'SR 6' => '',
    'SR 7' => '',
    'SR 823' => '',
    'SR 9' => '',
    'SR 92' => '',
    'SR 99' => '',
    'SR 99 and SR 520' => '',
    'SR522' => '',
    'SR99' => '',
    'State Route 20' => '',
    'State Route 520' => '',
    'State Route 9' => '',
    'State Route 99' => '',
    'US 101' => '',
    'US 12' => '',
    'US 195' => '',
    'US 2' => '',
    'US 2/97' => '',
    'US 395' => '',
    'US 395 SR 20' => '',
    'US 395-NSC' => '',
    'US 395/NSC' => '',
    'US 97' => '',
    'US 97A' => '',
    'US101' => '',
    'US97A' => '',
  );

  /**
   * Cache paths computed by following parent GUIDs.
   *
   * @var array
   */
  protected $paths = array();

  public function __construct($arguments) {
    parent::__construct($arguments);

    // @todo: Move to member variable so derived classes can append to it.
    $fields = array(
      'Id' => t('Unique ID of the content item'),
      'NodeGUID' => t('Unique GUID of this item'),
      'ParentGUID' => t('GUID of the parent (part of folder structure)'),
      'CreatedByUserId' => t('User who originally created this item'),
      'CreatedWhen' => t('Creation date'),
      'EffectiveDate' => t('Published date as displayed on the site?'),
      'DisplayName' => t('The content title'),
      'LastChangeTime' => t('Modification date'),
      'body' => t('Node body as contructed from placeholder content'),
      'ContentNodeId' => t('Id of the related node which points to the HTML content'),
      'ContentNodeName' => t('Name from the related node, used in URL construction'),
      // Dynamic properties (from the NodeProperty table).
      // @todo: Move any of these which are specific to news articles to
      // WSDOTNewsArticle.
      '_Description' => t('Teaser'),
      'Area' => t(''),
      'Office' => t(''),
      'Category' => t(''),
      'Pass' => t(''),
      'Highway' => t(''),
      'MetaKeywords' => t(''),
      'PageTitle' => t(''),
      'legacy_url' => t('Path computed by following ParentGUIDs'),
    );

    $query = Database::getConnection('default', 'migrate')
      ->select('Node', 'n')
      ->fields('n', array('Id', 'NodeGUID', 'ParentGUID', 'CreatedByUserId',
        'CreatedWhen', 'EffectiveDate', 'DisplayName', 'LastChangeTime'))
      ->condition('n.TemplateGUID', $arguments['type_guid'])
      ->condition('n.ApprovalStatus', 1)
      ->condition('n.CreatedWhen', '2014-01-01', '>=')
      // We assume the row with the NULL archive source is the current revision.
      ->isNull('n.ArchiveSourceGUID');
    // The FollowGUID points to another node row, which contains the Name we
    // need, and also has the Id that points to the HTML content.
    $query->leftJoin('Node', 'n2', 'n.FollowGUID=n2.NodeGUID');
    $query->addField('n2', 'Id', 'ContentNodeId');
    $query->addField('n2', 'Name', 'ContentNodeName');

    $this->source = new MigrateSourceSQL($query, $fields, NULL, $this->sourceOptions);

    $this->destination = new MigrateDestinationNode($arguments['destination_type']);

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'Id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Node ID',
          'alias' => 'n',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('title', 'DisplayName');
    $this->addFieldMapping('created', 'CreatedWhen');
    $this->addFieldMapping('changed', 'LastChangeTime');

    $this->addFieldMapping('uid', 'CreatedByUserId')
      ->sourceMigration('user');

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:summary', '_Description');

    $this->addFieldMapping('field_mountain_passes', 'Pass');
    $this->addFieldMapping('field_highways', 'Highway');
    $this->addFieldMapping('field_regions', 'Office');

    $this->addFieldMapping('path', 'legacy_url');

    $this->addFieldMapping('pathauto')
      ->defaultValue(0);

    $this->addUnmigratedSources(array(
      'Area',
      'Category',
      'MetaKeywords',
      'PageTitle',
    ));

    $this->addUnmigratedDestinations(array(
      'field_cities',
      'field_subjects',
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
      ->condition('NodeID', $row->ContentNodeId)
      ->execute();
    foreach ($result as $property_row) {
      $row->{$property_row->PropName} = $property_row->PropValue;
    }

    // Highways need to be split to multiple values and normalized to the new
    // vocabulary.
    if (!empty($row->Highway)) {
      // Break up comma-separated multiple values...
      $highways = explode(',', $row->Highway);
      $row->Highway = array();
      foreach ($highways as $highway) {
        // ...and remove any extraneous spaces.
        $highway = trim($highway);

        // Translate to the new name.
        if (!empty($this->highwayMap[$highway])) {
          $row->Highway[] = $this->highwayMap[$highway];
        }
        else {
          $this->queueMessage(t('Highway value !highway not mapped',
                                array('!highway' => $highway)));
        }
      }
    }

    // Offices need to be split to multiple values and normalized to the regions
    // vocabulary.
    if (!empty($row->Office)) {
      // Break up hyphen-separated multiple values...
      $offices = explode('-', $row->Office);
      $row->Office = array();
      foreach ($offices as $office) {
        // ...and remove any extraneous spaces.
        $office = trim($office);

        // Translate to the new name.
        if (!empty($this->regionMap[$office])) {
          $row->Office[] = $this->regionMap[$highway];
        }
        else {
          $this->queueMessage(t('Office value !office not mapped',
                                array('!office' => $office)));
        }
      }
    }

    // Deal with NodeResource.
    $result = Database::getConnection('default', 'migrate')
      ->select('NodeResource', 'nr')
      ->fields('nr')
      ->condition('NodeID', $row->ContentNodeId)
      ->orderBy('Id')
      ->execute();
    // ResourceBlobID references blobs (files)
    $this->resourceLinks = array();
    foreach ($result as $resource_row) {
      if ($resource_row->ResourceBlobId) {
        // @todo handle blobs
      }
      else {
        $this->resourceLinks[$resource_row->Id] = $resource_row->URL;
      }
    }

    // Add fields from the NodePlaceholderContent table.
    $result = Database::getConnection('default', 'migrate')
      ->select('NodePlaceholderContent', 'npc')
      ->fields('npc')
      ->condition('NodeID', $row->ContentNodeId)
      ->orderBy('PlaceholderId', 'Id')
      ->execute();
    $row->body = '';
    $placeholder_content = array();
    // Make it simpler to handle on placeholder at a time.
    foreach ($result as $placeholder_row) {
      $placeholder_content[$placeholder_row->PlaceholderID][$placeholder_row->Id] =
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

    // Follow parents to work out the path structure.
    $row->legacy_url = $this->getPathComponents($row->ParentGUID). '/' .
      $row->ContentNodeName . '.htm';

    return TRUE;
  }

  protected function getPathComponents($parent_guid) {
    if (!isset($this->paths[$parent_guid])) {
      $row = Database::getConnection('default', 'migrate')
        ->select('Node', 'n')
        ->fields('n', array('Name', 'ParentGUID'))
        ->condition('NodeGUID', $parent_guid)
        ->execute()
        ->fetchObject();

      // Ignore the /Server/Channels component of the path.
      if ($row->ParentGUID && $row->ParentGUID != '{E4D19123-9DD3-11D1-B44E-006097071264}') {
        $this->paths[$parent_guid] = $this->getPathComponents($row->ParentGUID);
      }
      else {
        $this->paths[$parent_guid] = '';
      }
      $this->paths[$parent_guid] .= '/' . $row->Name;
      $this->paths[$parent_guid] = ltrim($this->paths[$parent_guid], '/');
    }
    return $this->paths[$parent_guid];
  }

  /**
   * Translate resource references to real targets.
   *
   * @param array $matches
   */
  protected function handleResource(array $matches) {
    // Default to the original contents.
    $result = $matches[0];

    if (!empty($matches[1])) {
      $control_prop_name = $matches[1];
      if (!empty($this->controlProps[$control_prop_name])) {
        $resource_id = $this->controlProps[$control_prop_name];
        if (!empty($this->resourceLinks[$resource_id])) {
          $result = $this->resourceLinks[$resource_id];
        }
      }
    }
    return $result;
  }
}

class WSDOTNewsArticle extends WSDOTNode {
  public function __construct($arguments) {
    parent::__construct($arguments);

    // Field mappings specific to news articles.
  }
}
