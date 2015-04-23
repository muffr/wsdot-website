<?php
/**
 * @file
 * wsdot_wetland_reports_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wsdot_wetland_reports_content_type_node_info() {
  $items = array(
    'wetland_monitoring_reports' => array(
      'name' => t('Wetland Monitoring Reports'),
      'base' => 'node_content',
      'description' => t('This is the form to fill out for the individual entries that make up the Wetland Monitoring Reports home page.'),
      'has_title' => '1',
      'title_label' => t('title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
