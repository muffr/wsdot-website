<?php
/**
 * @file
 * rest_areas.features.inc
 */

/**
 * Implements hook_views_api().
 */
function rest_areas_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rest_areas_node_info() {
  $items = array(
    'rest_area' => array(
      'name' => t('Rest Area'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
