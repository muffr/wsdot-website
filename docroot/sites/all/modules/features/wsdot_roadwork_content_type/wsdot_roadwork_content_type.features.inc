<?php
/**
 * @file
 * wsdot_roadwork_content_type.features.inc
 */

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
      'title_label' => t('Roadwork Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
