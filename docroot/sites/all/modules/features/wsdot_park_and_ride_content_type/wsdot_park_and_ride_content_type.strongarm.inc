<?php
/**
 * @file
 * wsdot_park_and_ride_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wsdot_park_and_ride_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__park_and_ride_lots';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__park_and_ride_lots'] = $strongarm;

  return $export;
}
