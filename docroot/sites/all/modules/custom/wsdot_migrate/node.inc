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
   *  Keyed by resource ID, value is a URL.
   */
  protected $resourceLinks = array();

  /**
   * For the current item being imported, map blob IDs to the corresponding
   * Drupal file ID.
   *
   * @var array
   *  Keyed by resource ID, value is a fid.
   */
  protected $resourceBlobs = array();

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

  /**
   * Source fields available for field mapping in this migration.
   *
   * @var array
   *  keys are source field machine names, values are descriptions.
   */
  protected $sourceFields = array();

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->sourceFields += array(
      'Id' => t('Unique ID of the content item'),
      'ParentGUID' => t('GUID of the parent (part of folder structure)'),
      'CreatedByUserId' => t('User who originally created this item'),
      'CreatedWhen' => t('Creation date'),
      'EffectiveDate' => t('Published date as displayed on the site?'),
      'DisplayName' => t('The content title'),
      'LastChangeTime' => t('Modification date'),
      'body' => t('Node body as contructed from placeholder content'),
      'ContentNodeId' => t('Id of the related node which points to the HTML content'),
      'ContentNodeName' => t('Name from the related node, used in URL construction'),
      'legacy_url' => t('Path computed by following ParentGUIDs'),
      'file_references' => t('Blob Ids of files related via NodeResource'),
      // Dynamic properties (from the NodeProperty table).
      '_Description' => t('Teaser'),
      'MetaKeywords' => t(''),
    );

    $query = Database::getConnection('default', 'migrate')
      ->select('Node', 'n')
      ->fields('n', array('Id', 'ParentGUID', 'CreatedByUserId',
        'CreatedWhen', 'EffectiveDate', 'DisplayName', 'LastChangeTime'))
      // Select nodes of a given template (equivalent to Drupal content type).
      ->condition('n.TemplateGUID', $arguments['type_guid'], 'IN')
      // Import published nodes only.
      ->condition('n.ApprovalStatus', 1)
      // There are multiple rows in Node for a given logical piece of content,
      // representing multiple revisions. We assume the row with the NULL
      // archiveSourceGUID is the current revision.
      ->isNull('n.ArchiveSourceGUID');
    // earliest_date is optional
    if (isset($arguments['earliest_date'])) {
      // Import only nodes created since a given date.
      $query->condition('n.CreatedWhen', $arguments['earliest_date'], '>=');
    }
    // The FollowGUID points to another node row, which contains the Name we
    // need, and also has the Id that points to the HTML content.
    $query->leftJoin('Node', 'n2', 'n.FollowGUID=n2.NodeGUID');
    $query->addField('n2', 'Id', 'ContentNodeId');
    $query->addField('n2', 'Name', 'ContentNodeName');
    // To use highwater marks (see below), we must process in order of the
    // highwater mark field.
    $query->orderBy('LastChangeTime');

    $this->source = new MigrateSourceSQL($query, $this->sourceFields, NULL,
                                         $this->sourceOptions);

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

    // By declaring the last-modified timestamp as our highwater field, we
    // ensure that delta migrations pick up not only new content, but also
    // content that was modified since our previous import.
    $this->highwaterField = array(
      'name' => 'LastChangeTime',
      'alias' => 'n',
    );

    $this->addFieldMapping('title', 'DisplayName');
    $this->addFieldMapping('created', 'CreatedWhen');
    $this->addFieldMapping('changed', 'LastChangeTime');
    $this->addFieldMapping(NULL, 'EffectiveDate')
      ->description('Is this the displayed date? Do we need a field for it?');

    $this->addFieldMapping('status')
      ->defaultValue(NODE_PUBLISHED);

    $this->addFieldMapping('uid', 'CreatedByUserId')
      ->sourceMigration('user');

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:summary', '_Description');
    $this->addFieldMapping('body:format')
        ->defaultValue('wysiwyg');

    $this->addFieldMapping('path', 'legacy_url');

    // Note we would typically populate file_references with BlobId values and
    // add ->sourceMigration('file') here. However, prepareRow() is already
    // translating them to fids so it can rewrite embedded image references, so
    // we don't need to invoke the translation again.
    $this->addFieldMapping('field_file', 'file_references');
    // Indicates that 'file_references' should be interpreted as file IDs
    // rather than URIs (the default).
    $this->addFieldMapping('field_file:file_class')
      ->defaultValue('MigrateFileFid');

    $this->addFieldMapping('pathauto')
      ->defaultValue(0);

    $this->addFieldMapping(NULL, 'ParentGUID')
      ->description('Used to construct the folder path');
    $this->addFieldMapping(NULL, 'ContentNodeId')
      ->description('Id of the second Node row, which points to the content');
    $this->addFieldMapping(NULL, 'ContentNodeName')
      ->description('Used in construction of the legacy path');

    $this->addUnmigratedDestinations(array(
      'body:language',
      'comment',
      'field_file:language', 'field_file:preserve_files', 'field_file:description',
        'field_file:display',
      'is_new',
      'language',
      'log',
      'promote',
      'revision',
      'revision_uid',
      'sticky',
      'tnid',
      'translate',
    ));

    $this->addUnmigratedSources(array(
      'MetaKeywords',
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
          $row->Office[] = $this->regionMap[$office];
        }
        else {
          $this->queueMessage(t('Office value !office not mapped',
                                array('!office' => $office)));
        }
      }
    }

    // NodeResource references links to be inserted, as well as related blobs.
    $result = Database::getConnection('default', 'migrate')
      ->select('NodeResource', 'nr')
      ->fields('nr')
      ->condition('NodeID', $row->ContentNodeId)
      ->orderBy('Id')
      ->execute();
    $this->resourceLinks = array();
    foreach ($result as $resource_row) {
      if ($resource_row->ResourceBlobId) {
        // Handle blobs. Find the Drupal fid corresponding to ResourceBlobId.
        // sourceMigration() won't work to translate it, because that isn't
        // applied until after prepareRow, so we need to look up the map table
        // ourselves. Save the relationship, so handleResource can replace
        // a ControlProp reference to this resource with a relative URL.
        $fid =
          db_select('migrate_map_file', 'map')
            ->fields('map', array('destid1'))
            ->condition('sourceid1', $resource_row->ResourceBlobId)
            ->execute()
            ->fetchField();
        if ($fid) {
          $this->resourceBlobs[$resource_row->Id] = $fid;
        }
      }
      else {
        // Handle links - the necessary value is right at hand.
        $this->resourceLinks[$resource_row->Id] = $resource_row->URL;
      }
    }

    // Just in case there are duplicate references in NodeResource.
    $row->file_references = array_unique($this->resourceBlobs);

    // Add fields from the NodePlaceholderContent table. This contains the
    // node content (in the HTML properties), and control properties which
    // reference the resources above.
    $result = Database::getConnection('default', 'migrate')
      ->select('NodePlaceholderContent', 'npc')
      ->fields('npc', array('Id', 'PlaceholderId', 'PropName', 'PropValue'))
      ->condition('NodeID', $row->ContentNodeId)
      ->orderBy('PlaceholderId', 'Id')
      ->execute();
    $row->body = '';
    $placeholder_content = array();
    // Group by individual placeholders to make it simpler to handle one
    // placeholder at a time.
    foreach ($result as $placeholder_row) {
      $placeholder_content[$placeholder_row->PlaceholderId][$placeholder_row->Id] =
        $placeholder_row;
    }

    foreach ($placeholder_content as $placeholder_id => $placeholder_detail) {
      // We expect each placeholder_id to have one HTML row and multiple
      // ControlProp rows. We will fetch the HTML and parse it for references to
      // control props, which in turn reference resources - we will use those
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

      // Replace each resource reference with a real URL. Note we are capturing
      // the control property name (ControlProp0, ControlProp1, etc.).
      $html = preg_replace_callback('|<!--\* *Resource *= *"(.*?)" *-->|i',
                                    array($this, 'handleResource'),
                                    $html);
      $row->body .= $html;
    }

    // Follow parents to work out the legacy path structure so we can preserve
    // it in Drupal.
    $row->legacy_url = $this->getPathComponents($row->ParentGUID). '/' .
      $row->ContentNodeName . '.htm';

    return TRUE;
  }

  /**
   * Determine the folder structure for the URL path.
   *
   * @param string $parent_guid
   *
   * @return string
   */
  protected function getPathComponents($parent_guid) {
    // A given directory path will be used by many pieces of content, so cache
    // each one to minimize database queries.
    if (!isset($this->paths[$parent_guid])) {
      // Find the parent of the current row.
      $row = Database::getConnection('default', 'migrate')
        ->select('Node', 'n')
        ->fields('n', array('Name', 'ParentGUID'))
        ->condition('NodeGUID', $parent_guid)
        ->execute()
        ->fetchObject();

      // Ignore the /Server/Channels component of the path - the GUID here is
      // the Channels GUID.
      if ($row->ParentGUID && $row->ParentGUID != '{E4D19123-9DD3-11D1-B44E-006097071264}') {
        $this->paths[$parent_guid] = $this->getPathComponents($row->ParentGUID);
      }
      else {
        $this->paths[$parent_guid] = '';
      }
      $this->paths[$parent_guid] .= '/' . $row->Name;
      // Strip the leading slash - Drupal aliases must not begin with a slash.
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

    // $matches[1] is the control property name - ControlProp0, etc.
    if (!empty($matches[1])) {
      $control_prop_name = $matches[1];
      // The property name should correspond to a row in the placeholder content
      // table for the same placeholder the HTML we're parsing is in. It points
      // at a resource ID, which we lookup against the resource table data we
      // previously extracted for this node.
      if (!empty($this->controlProps[$control_prop_name])) {
        $resource_id = $this->controlProps[$control_prop_name];
        // If the resource is a link, return the URL.
        if (!empty($this->resourceLinks[$resource_id])) {
          $result = $this->resourceLinks[$resource_id];
        }
        // If the resource is a blob (file), fetch the Drupal uri of the
        // file and translate to a URL for the web.
        elseif (!empty($this->resourceBlobs[$resource_id])) {
          $file = file_load($this->resourceBlobs[$resource_id]);
          if ($file) {
            $result = file_create_url($file->uri);
            // Strip the path down to be relative to the webroot.
            $result = preg_replace('|^https?://[^/]+|i', '', $result);
          }
          else {
            $this->queueMessage(t('Could not load the file with ID !fid',
                                  array('!fid' => $this->resourceBlobs[$resource_id])));
          }
        }
        else {
          $this->queueMessage(t('Could not find resource with ID !id',
                                array('!id' => $resource_id)));
        }
      }
      else {
        $this->queueMessage(t('Could not find control property !name',
                              array('!name' => $control_prop_name)));
      }
    }
    return $result;
  }
}

class WSDOTNewsArticle extends WSDOTNode {
  public function __construct($arguments) {
    // Set our specific source fields before calling the parent, so they can
    // be passed to the source plugin.
    $this->sourceFields += array(
      'Area' => t(''),
      'Office' => t(''),
      'Category' => t(''),
      'PageTitle' => t(''),
      'Pass' => t(''),
      'Highway' => t(''),
    );
    parent::__construct($arguments);

    // Field mappings specific to news articles.
    $this->addFieldMapping('field_mountain_passes', 'Pass');
    $this->addFieldMapping('field_highways', 'Highway');
    $this->addFieldMapping('field_regions', 'Office');

    $this->addUnmigratedSources(array(
      'Area',
      'Category',
      'PageTitle',
    ));

    $this->addUnmigratedDestinations(array(
      'field_cities', 'field_cities:source_type', 'field_cities:create_term',
        'field_cities:ignore_case',
      'field_highways:source_type', 'field_highways:create_term', 'field_highways:ignore_case',
      'field_mountain_passes:source_type', 'field_mountain_passes:create_term', 'field_mountain_passes:ignore_case',
      'field_regions:source_type', 'field_regions:create_term', 'field_regions:ignore_case',
      'field_subjects', 'field_subjects:source_type', 'field_subjects:create_term',
        'field_subjects:ignore_case',
    ));
  }
}

class WSDOTPage extends WSDOTNode {
  public function __construct($arguments) {
    // Set our specific source fields before calling the parent, so they can
    // be passed to the source plugin.
    $this->sourceFields += array(
      'ChannelTitle' => t(''),
      'LeftNavBoxHeader' => t(''),
      'LocalLeftNav' => t(''),
      'PageTitle' => t(''),
      'ShowLeftNav' => t(''),
    );
    parent::__construct($arguments);

    // Field mappings specific to pages.

    $this->addUnmigratedDestinations(array(
      'field_subjects', 'field_subjects:source_type', 'field_subjects:create_term',
        'field_subjects:ignore_case',
    ));

    $this->addUnmigratedSources(array(
      'ChannelTitle',
      'LeftNavBoxHeader',
      'LocalLeftNav',
      'PageTitle',
      'ShowLeftNav',
    ));

  }
}

class WSDOTPublication extends WSDOTNode {
  public function __construct($arguments) {
    // Set our specific source fields before calling the parent, so they can
    // be passed to the source plugin.
    $this->sourceFields += array(
      'Author' => '',
      'ChannelTitle' => '',
      'FileName' => '',
      'LastModified' => '',
      'LinkFullManual' => '',
      'Location' => '',
      'NumberOfPages' => '',
      'Originator' => '',
      'PublicationNumber' => '',
      'PublishedDate' => '',
      'Subject' => '',
      'Version' => '',
    );
    parent::__construct($arguments);

    // Field mappings specific to publications.

    // Incoming Author values look like "Brian W. Mar, John F. Ferguson, Eugene B. Welch."
    // We convert to an array with separator(). This would leave spaces as in
    // " John F. Ferguson", so strip those with trim(). Finally, we don't want
    // to keep that trailing period, so we strip that.
    $this->addFieldMapping('field_authors', 'Author')
      ->separator(',')
      ->callbacks('trim')
      ->callbacks(array($this, 'stripPeriod'));

    // Ditto for subjects (example: "
    $this->addFieldMapping('field_subjects', 'Subject')
      ->separator(',')
      ->callbacks('trim')
      ->callbacks(array($this, 'stripPeriod'));
    // Automatically create subject terms that don't already exist.
    $this->addFieldMapping('field_subjects:create_term')
      ->defaultValue(TRUE);
    // Make sure we don't get terms that differ only in case.
    $this->addFieldMapping('field_subjects:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_number_of_pages', 'NumberOfPages');
    $this->addFieldMapping('field_originator', 'Originator');
    $this->addFieldMapping('field_publication_number', 'PublicationNumber');
    $this->addFieldMapping('field_publication_date', 'PublishedDate');
    $this->addFieldMapping('field_publication_version', 'Version');

    $this->addFieldMapping('field_chapter')
      ->description('Figure out how to tie blobs to this');
    $this->addFieldMapping(NULL, 'FileName')
      ->description('Is this involved in populating field_chapter? Or perhaps this ties to field_related_publications?');
    $this->addFieldMapping('field_related_publications')
      ->description('Where does this come from?');

    $this->addFieldMapping(NULL, 'LastModified')
      ->description('Presumably the date the publication was last modified, which is different from when the node was last modified - there should be a specific field to hold this');

    $this->addFieldMapping(NULL, 'Location')
      ->description('Full URL of file attachments - not necessary in Drupal?');

    $this->addFieldMapping('field_publication_type')
      ->description('How do we determine the type?');

    $this->addUnmigratedDestinations(array(
      'field_authors:language',
      'field_contact_info', 'field_contact_info:revision_id',
      'field_number_of_pages:language',
      'field_originator:language',
      'field_publication_date:timezone', 'field_publication_date:rrule',
        'field_publication_date:to',
      'field_publication_number:language',
      'field_publication_version:language',
      'field_subjects:source_type',
    ));

    $this->addUnmigratedSources(array(
      'ChannelTitle',
      'LinkFullManual',
    ));
  }

  /**
   * Some author values end in periods - remove them.
   *
   * @param $value
   *
   * @return string
   */
  protected function stripPeriod($value) {
    return rtrim($value, '.');
  }
}

class WSDOTProject extends WSDOTNode {
  public function __construct($arguments) {
    // Set our specific source fields before calling the parent, so they can
    // be passed to the source plugin.
    $this->sourceFields += array(
      '2005PartnerFunding' => t(''),
      'ChannelTitle' => t(''),
      'FlickrFeedURL' => t(''),
      'LeftNavBoxHeader' => t(''),
      'LeftNavName' => t(''),
      'ListId' => t(''),
      'NickelImage' => t(''),
      'PageTitle' => t(''),
      'ProjectPageId' => t(''),
      'ShowCommonMessagingLeftNav' => t(''),
      'ShowCongestionBenefits' => t(''),
      'ShowCostEscalation' => t(''),
      'ShowCountdownTimer' => t(''),
      'ShowEconomicIncentive' => t(''),
      'ShowEnvironmentBenefits' => t(''),
      'ShowFinancialTable' => t(''),
      'ShowFlickrLightbox' => t(''),
      'ShowLeftNav' => t(''),
      'ShowMonthlyUpdateLeftNav' => t(''),
      'ShowQprLeftNav' => t(''),
      'ShowSafetyBenefits' => t(''),
      'ShowSignageDisclaimer' => t(''),
      'TimerStartDate' => t(''),
    );
    parent::__construct($arguments);

    // Field mappings specific to projects.
    $this->addFieldMapping('field_cities')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_contact_info')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_counties')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_funding_types')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_highways')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_link')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_map')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_modes')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_regions')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_status_date')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_tags')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_status')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_user_reference')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_project_phase')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_images')
      ->description('Where would this come from?');
    $this->addFieldMapping('field_design_build')
      ->description('Where would this come from?');

    $this->addFieldMapping(NULL, '2005PartnerFunding')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'NickelImage')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ShowSafetyBenefits')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ShowCongestionBenefits')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ShowEnvironmentBenefits')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ShowCostEscalation')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ShowEconomicIncentive')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ChannelTitle')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'TimerStartDate')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ShowCountdownTimer')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ShowFinancialTable')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'FlickrFeedURL')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ShowFlickrLightbox')
      ->description('Do we need this? If so, where does it go?');
    $this->addFieldMapping(NULL, 'ShowSignageDisclaimer')
      ->description('Do we need this? If so, where does it go?');

    $this->addFieldMapping('field_project_id', 'ProjectPageId');

    $this->addUnmigratedDestinations(array(

    ));

    $this->addUnmigratedSources(array(
      'LeftNavBoxHeader',
      'LeftNavName',
      'ListId',
      'PageTitle',
      'ShowCommonMessagingLeftNav',
      'ShowLeftNav',
      'ShowMonthlyUpdateLeftNav',
      'ShowQprLeftNav',
    ));
  }
}
