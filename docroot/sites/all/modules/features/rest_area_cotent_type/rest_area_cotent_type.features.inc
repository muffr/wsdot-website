<?php
/**
 * @file
 * rest_area_cotent_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function rest_area_cotent_type_node_info() {
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
