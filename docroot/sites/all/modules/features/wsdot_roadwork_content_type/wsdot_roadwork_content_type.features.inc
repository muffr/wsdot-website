<?php
/**
 * @file
 * wsdot_roadwork_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_roadwork_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wsdot_roadwork_content_type_node_info() {
  $items = array(
    'roadwork' => array(
      'name' => t('Roadwork'),
      'base' => 'node_content',
      'description' => t('Use this form to enter all related information for specific construction work or maintenance work, including the duration of the work.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
