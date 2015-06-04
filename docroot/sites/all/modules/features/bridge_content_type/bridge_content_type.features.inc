<?php
/**
 * @file
 * bridge_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bridge_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function bridge_content_type_node_info() {
  $items = array(
    'bridge' => array(
      'name' => t('Bridge'),
      'base' => 'node_content',
      'description' => t('Type encompasses Border, Historic, Moveable and Structurally Deficient Bridges.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
