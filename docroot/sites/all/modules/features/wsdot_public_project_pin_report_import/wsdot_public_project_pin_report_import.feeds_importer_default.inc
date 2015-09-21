<?php
/**
 * @file
 * wsdot_public_project_pin_report_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function wsdot_public_project_pin_report_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wsdot_public_project_pin_report_import';
  $feeds_importer->config = array(
    'name' => 'WSDOT Public Project PIN Report Import',
    'description' => 'Imports WSDOT Public Project PIN Reports',
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
            'value' => 'id',
            'debug' => 0,
            'weight' => '1',
          ),
          'title' => array(
            'name' => 'Title',
            'value' => 'title',
            'debug' => 0,
            'weight' => '2',
          ),
          'html' => array(
            'name' => 'Html',
            'value' => 'html',
            'debug' => 0,
            'weight' => '3',
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
            'source' => 'html',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'pin_report',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['wsdot_public_project_pin_report_import'] = $feeds_importer;

  return $export;
}
