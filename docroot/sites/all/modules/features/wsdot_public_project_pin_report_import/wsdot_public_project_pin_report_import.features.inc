<?php
/**
 * @file
 * wsdot_public_project_pin_report_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_public_project_pin_report_import_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
