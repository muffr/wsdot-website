<?php
/**
 * @file
 * rest_area_cotent_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function rest_area_cotent_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_amenities'
  $field_bases['field_amenities'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_amenities',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Drinking Water' => 'Drinking Water',
        'Electrical Vehicle Charging Station' => 'Electrical Vehicle Charging Station',
        'Picnic Areas' => 'Picnic Areas',
        'RV Dumping Station' => 'RV Dumping Station',
        'RV Dumping Station Closed during the Winter' => 'RV Dumping Station Closed during the Winter',
        'Telephones' => 'Telephones',
        'Vending Machines' => 'Vending Machines',
        'Visitor Information' => 'Visitor Information',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_direction'
  $field_bases['field_direction'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_direction',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Eastbound' => 'Eastbound',
        'Northbound' => 'Northbound',
        'Westbound' => 'Westbound',
        'Southbound' => 'Southbound',
        'Multidirectional' => 'Multidirectional',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_geolocation'
  $field_bases['field_geolocation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_geolocation',
    'indexes' => array(
      'lat' => array(
        0 => 'lat',
      ),
      'lng' => array(
        0 => 'lng',
      ),
    ),
    'locked' => 0,
    'module' => 'geolocation',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'geolocation_latlng',
  );

  return $field_bases;
}
