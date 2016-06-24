<?php
/**
 * @file
 * wsdot_public_newsitem_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function wsdot_public_newsitem_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wsdot_public_newsitem_import';
  $feeds_importer->config = array(
    'name' => 'WSDOT Public NewsItem Import',
    'description' => 'Imports WSDOT Public News Items',
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
          'organizations' => array(
            'name' => 'Organization',
            'value' => 'organization',
            'debug' => 0,
            'weight' => '8',
          ),
          'regions' => array(
            'name' => 'Regions',
            'value' => 'regions',
            'debug' => 0,
            'weight' => '9',
          ),
          'mountain_pass' => array(
            'name' => 'Mountain Pass',
            'value' => 'mountainPass',
            'debug' => 0,
            'weight' => '10',
          ),
          'highway' => array(
            'name' => 'Highways',
            'value' => 'highways',
            'debug' => 0,
            'weight' => '11',
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
            'source' => 'body_content',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'legacy_url',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'file_attachments',
            'target' => 'field_file:uri',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'regions',
            'target' => 'field_regions',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'mountain_pass',
            'target' => 'field_mountain_passes',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'highway',
            'target' => 'field_highways',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'organizations',
            'target' => 'field_organization_term_ref',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'news_article',
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
  $export['wsdot_public_newsitem_import'] = $feeds_importer;

  return $export;
}
