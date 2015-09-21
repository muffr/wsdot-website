<?php
/**
 * @file
 * wsdot_project_pin_report_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_project_pin_report_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function wsdot_project_pin_report_content_type_node_info() {
  $items = array(
    'pin_report' => array(
      'name' => t('PIN Report'),
      'base' => 'node_content',
      'description' => t('Project page monthly update PIN report'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
