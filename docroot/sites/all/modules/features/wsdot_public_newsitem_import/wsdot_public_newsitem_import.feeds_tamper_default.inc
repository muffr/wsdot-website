<?php
/**
 * @file
 * wsdot_public_newsitem_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function wsdot_public_newsitem_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wsdot_public_newsitem_import-file_attachments-explode';
  $feeds_tamper->importer = 'wsdot_public_newsitem_import';
  $feeds_tamper->source = 'file_attachments';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['wsdot_public_newsitem_import-file_attachments-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wsdot_public_newsitem_import-highway-explode';
  $feeds_tamper->importer = 'wsdot_public_newsitem_import';
  $feeds_tamper->source = 'highway';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['wsdot_public_newsitem_import-highway-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wsdot_public_newsitem_import-regions-explode';
  $feeds_tamper->importer = 'wsdot_public_newsitem_import';
  $feeds_tamper->source = 'regions';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['wsdot_public_newsitem_import-regions-explode'] = $feeds_tamper;

  return $export;
}
