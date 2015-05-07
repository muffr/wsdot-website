<?php
/**
 * @file
 * wsdot_taxonomy_term_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_taxonomy_term_panels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
