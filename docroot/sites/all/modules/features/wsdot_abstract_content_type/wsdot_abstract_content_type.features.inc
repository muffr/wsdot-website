<?php
/**
 * @file
 * wsdot_abstract_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_abstract_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function wsdot_abstract_content_type_node_info() {
  $items = array(
    'publications' => array(
      'name' => t('Publications'),
      'base' => 'node_content',
      'description' => t(' Metadata for documents - manuals and research reports maybe more'),
      'has_title' => '1',
      'title_label' => t('Publication Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
