<?php
/**
 * @file
 * wsdot_public_projecttemplate_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function wsdot_public_projecttemplate_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wsdot_public_project_import';
  $feeds_importer->config = array(
    'name' => 'WSDOT Public ProjectTemplate Import',
    'description' => 'Imports WSDOT Public ProjectTemplate Items',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml json',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'sources' => array(
          'id' => array(
            'name' => 'Id',
            'value' => 'uid',
            'debug' => 0,
            'weight' => '0',
          ),
          'title' => array(
            'name' => 'Title',
            'value' => 'name',
            'debug' => 0,
            'weight' => '1',
          ),
          'created_date' => array(
            'name' => 'Created Date',
            'value' => 'createdWhen',
            'debug' => 0,
            'weight' => '2',
          ),
          'page_name' => array(
            'name' => 'Page Name',
            'value' => 'pageName',
            'debug' => 0,
            'weight' => '3',
          ),
          'description' => array(
            'name' => 'Description',
            'value' => 'description',
            'debug' => 0,
            'weight' => '4',
          ),
          'legacy_url' => array(
            'name' => 'Legacy URL',
            'value' => 'legacyURL',
            'debug' => 0,
            'weight' => '5',
          ),
          'update' => array(
            'name' => 'Update',
            'value' => 'update',
            'debug' => 0,
            'weight' => '6',
          ),
          'body_content' => array(
            'name' => 'Body Content',
            'value' => 'pageContent',
            'debug' => 0,
            'weight' => '7',
          ),
          'contact' => array(
            'name' => 'Contact',
            'value' => 'contact',
            'debug' => 0,
            'weight' => '8',
          ),
          'left_navigation' => array(
            'name' => 'Left Navigation',
            'value' => 'leftNav',
            'debug' => 0,
            'weight' => '9',
          ),
          'phase' => array(
            'name' => 'Phase',
            'value' => 'phase',
            'debug' => 0,
            'weight' => '10',
          ),
          'legacy_map' => array(
            'name' => 'Legacy Map',
            'value' => 'legacyMap',
            'debug' => 0,
            'weight' => '11',
          ),
          'images' => array(
            'name' => 'Images',
            'value' => 'images',
            'debug' => 0,
            'weight' => '12',
          ),
          'file_attachments' => array(
            'name' => 'File Attachments',
            'value' => 'documents',
            'debug' => 0,
            'weight' => '13',
          ),
          'project_id' => array(
            'name' => 'Project ID',
            'value' => 'projectId',
            'debug' => 0,
            'weight' => '14',
          ),
          'location' => array(
            'name' => 'Location',
            'value' => 'location',
            'debug' => 0,
            'weight' => '15',
          ),
          'funding' => array(
            'name' => 'Funding',
            'value' => 'funding',
            'debug' => 0,
            'weight' => '16',
          ),
          'regions' => array(
            'name' => 'Regions',
            'value' => 'regions',
            'debug' => 0,
            'weight' => '17',
          ),
          'highways' => array(
            'name' => 'Highways',
            'value' => 'highways',
            'debug' => 0,
            'weight' => '18',
          ),
          'counties' => array(
            'name' => 'Counties',
            'value' => 'counties',
            'debug' => 0,
            'weight' => '19',
          ),
        ),
        'context' => array(
          'value' => '$.*',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'created_date',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'description',
            'target' => 'body:summary',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'legacy_url',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'file_attachments',
            'target' => 'field_file:uri',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'images',
            'target' => 'field_images:uri',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'update',
            'target' => 'field_status',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'body_content',
            'target' => 'body',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'contact',
            'target' => 'field_contact',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'left_navigation',
            'target' => 'field_static_left_navigation',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'phase',
            'target' => 'field_project_phase',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'legacy_map',
            'target' => 'field_legacy_map',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'project_id',
            'target' => 'field_project_id',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'location',
            'target' => 'field_site_structure_hierarchical',
            'hierarchy_separator' => '>>',
            'auto_create_terms' => 1,
            'save_term_lineage' => 1,
          ),
          15 => array(
            'source' => 'funding',
            'target' => 'field_funding_types',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'regions',
            'target' => 'field_regions',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'highways',
            'target' => 'field_highways',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'counties',
            'target' => 'field_counties',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'project',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['wsdot_public_project_import'] = $feeds_importer;

  return $export;
}
