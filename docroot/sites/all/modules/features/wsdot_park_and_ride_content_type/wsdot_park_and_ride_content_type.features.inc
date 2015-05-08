<?php
/**
 * @file
 * wsdot_park_and_ride_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_park_and_ride_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wsdot_park_and_ride_content_type_node_info() {
  $items = array(
    'park_and_ride_lots' => array(
      'name' => t('Park and Ride Lots'),
      'base' => 'node_content',
      'description' => t('This is the form to use for building a Park and Ride Lot page. Filling out this form would add a new Park and Ride lot and its associated information to be listed on the Park and Ride Lot Locations page.'),
      'has_title' => '1',
      'title_label' => t('Park and Ride Lot Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
