<?php
/**
 * @file
 * wsdot_public_projectspecifics_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function wsdot_public_projectspecifics_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wsdot_public_projectspecifics_import';
  $feeds_importer->config = array(
    'name' => 'WSDOT Public ProjectSpecifics Import',
    'description' => 'Imports WSDOT Public ProjectSpecifics Items',
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
        'context' => array(
          'value' => '$.*',
        ),
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
          'body_content' => array(
            'name' => 'Body Content',
            'value' => 'pageContent',
            'debug' => 0,
            'weight' => '5',
          ),
          'legacy_url' => array(
            'name' => 'Legacy URL',
            'value' => 'legacyURL',
            'debug' => 0,
            'weight' => '6',
          ),
          'file_attachments' => array(
            'name' => 'File Attachments',
            'value' => 'documents',
            'debug' => 0,
            'weight' => '7',
          ),
          'images' => array(
            'name' => 'Images',
            'value' => 'images',
            'debug' => 0,
            'weight' => '8',
          ),
          'left_navigation' => array(
            'name' => 'Left Navigation',
            'value' => 'leftNav',
            'debug' => 0,
            'weight' => '9',
          ),
          'site_structure' => array(
            'name' => 'Site Structure',
            'value' => 'location',
            'debug' => 0,
            'weight' => '10',
          ),
        ),
        'display_errors' => 1,
        'debug_mode' => 1,
        'source_encoding' => array(
          0 => 'auto',
        ),
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
            'language' => 'und',
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'created_date',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'description',
            'target' => 'body:summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'body_content',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'left_navigation',
            'target' => 'field_static_left_navigation',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'legacy_url',
            'target' => 'path_alias',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'file_attachments',
            'target' => 'field_file:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'images',
            'target' => 'field_images:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'site_structure',
            'target' => 'field_site_structure_hierarchical',
            'hierarchy_separator' => '>>',
            'auto_create_terms' => 1,
            'save_term_lineage' => 0,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'page',
        'insert_new' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['wsdot_public_projectspecifics_import'] = $feeds_importer;

  return $export;
}
