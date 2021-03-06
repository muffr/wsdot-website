<?php
/**
 * @file
 * wsdot_project_funding_table_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_project_funding_table_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wsdot_project_funding_table_content_type_node_info() {
  $items = array(
    'funding_table' => array(
      'name' => t('Funding Table'),
      'base' => 'node_content',
      'description' => t('Funding table to display on project pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
