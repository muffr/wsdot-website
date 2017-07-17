<?php
/**
 * @file
 * wsdot_public_abstract_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function wsdot_public_abstract_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wsdot_public_abstract_import';
  $feeds_importer->config = array(
    'name' => 'WSDOT Public Abstract Import',
    'description' => 'Imports WSDOT Public Abstract items',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml json',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'delete_uploaded_file' => FALSE,
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
          'main_content' => array(
            'name' => 'Main Content',
            'value' => 'mainContent',
            'debug' => 0,
            'weight' => '6',
          ),
          'legacy_url' => array(
            'name' => 'Legacy URL',
            'value' => 'legacyURL',
            'debug' => 0,
            'weight' => '7',
          ),
          'left_navigation' => array(
            'name' => 'Left Navigation',
            'value' => 'leftNav',
            'debug' => 0,
            'weight' => '8',
          ),
          'site_structure' => array(
            'name' => 'Site Structure',
            'value' => 'location',
            'debug' => 0,
            'weight' => '9',
          ),
          'related_publications' => array(
            'name' => 'Related Publications',
            'value' => 'relatedPublications',
            'debug' => 0,
            'weight' => '10',
          ),
          'publication_url' => array(
            'name' => 'Publication URL',
            'value' => 'publicationURL',
            'debug' => 0,
            'weight' => '11',
          ),
          'publish_date' => array(
            'name' => 'Publish Date',
            'value' => 'publishDate',
            'debug' => 0,
            'weight' => '12',
          ),
          'publication_number' => array(
            'name' => 'Publication Number',
            'value' => 'publicationNumber',
            'debug' => 0,
            'weight' => '13',
          ),
          'last_modified' => array(
            'name' => 'Last Modified',
            'value' => 'lastModified',
            'debug' => 0,
            'weight' => '14',
          ),
          'version' => array(
            'name' => 'Version',
            'value' => 'version',
            'debug' => 0,
            'weight' => '15',
          ),
          'manager' => array(
            'name' => 'Manager',
            'value' => 'manager',
            'debug' => 0,
            'weight' => '16',
          ),
          'author' => array(
            'name' => 'Author',
            'value' => 'author',
            'debug' => 0,
            'weight' => '17',
          ),
          'originiator' => array(
            'name' => 'Originiator',
            'value' => 'originator',
            'debug' => 0,
            'weight' => '18',
          ),
          'number_of_pages' => array(
            'name' => 'Number of Pages',
            'value' => 'numberOfPages',
            'debug' => 0,
            'weight' => '19',
          ),
          'subject' => array(
            'name' => 'Subject',
            'value' => 'subject',
            'debug' => 0,
            'weight' => '20',
          ),
          'meta_keywords' => array(
            'name' => 'Meta Keywords',
            'value' => 'metaKeywords',
            'debug' => 0,
            'weight' => '21',
          ),
          'publication_type' => array(
            'name' => 'Publication Type',
            'value' => 'publicationType',
            'debug' => 0,
            'weight' => '22',
          ),
          'publication_url_title' => array(
            'name' => 'Publication URL Title',
            'value' => 'publicationURLTitle',
            'debug' => 0,
            'weight' => '23',
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
        'author' => '12382',
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
            'source' => 'main_content',
            'target' => 'field_details',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'left_navigation',
            'target' => 'field_static_left_navigation',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'legacy_url',
            'target' => 'path_alias',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'site_structure',
            'target' => 'field_site_structure_hierarchical',
            'hierarchy_separator' => '>>',
            'auto_create_terms' => 1,
            'save_term_lineage' => 0,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'related_publications',
            'target' => 'field_related_publications',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'publish_date',
            'target' => 'field_publication_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'publication_number',
            'target' => 'field_publication_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'version',
            'target' => 'field_publication_version',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'manager',
            'target' => 'field_managers',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'author',
            'target' => 'field_authors',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'originiator',
            'target' => 'field_originator',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'number_of_pages',
            'target' => 'field_number_of_pages',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'subject',
            'target' => 'field_subject',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'publication_type',
            'target' => 'field_publication_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'meta_keywords',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'publication_url',
            'target' => 'field_publication_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'publication_url_title',
            'target' => 'field_publication_url:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'publication',
        'insert_new' => '1',
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
  $export['wsdot_public_abstract_import'] = $feeds_importer;

  return $export;
}
