<?php
/**
 * @file
 * plan_sheet_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function plan_sheet_content_type_node_info() {
  $items = array(
    'plan_sheet' => array(
      'name' => t('Plan Sheet'),
      'base' => 'node_content',
      'description' => t('he Plan Sheet Library provides drawings of site-specific details and experimental designs that are precluded from adoption as Standard Plans. These drawings fully comply with present design criteria, and each has a narrative explaining the intended use and some of the possible impacts associated with its usage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
