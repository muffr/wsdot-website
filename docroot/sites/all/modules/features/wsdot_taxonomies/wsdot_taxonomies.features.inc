<?php
/**
 * @file
 * wsdot_taxonomies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_taxonomies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
