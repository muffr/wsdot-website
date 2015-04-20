<?php
/**
 * @file
 * plan_sheet_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function plan_sheet_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_file'
  $field_bases['field_file'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_file_group'
  $field_bases['field_file_group'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_group',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_plan_sheet_category'
  $field_bases['field_plan_sheet_category'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_plan_sheet_category',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Highway Runoff (HR)' => 'Highway Runoff (HR)',
        'Roadway Construction (RC)' => 'Roadway Construction (RC)',
        'Drainage Structures and Hydraulics (DS)' => 'Drainage Structures and Hydraulics (DS)',
        'Traffic Barrier (TB)' => 'Traffic Barrier (TB)',
        'Wood Post Installations (TB-42 to TB-45)' => 'Wood Post Installations (TB-42 to TB-45)',
        'Retaining, Noise Barrier and Geosynthetic Walls (WS)' => 'Retaining, Noise Barrier and Geosynthetic Walls (WS)',
        'Bridges and Trestles (BT)' => 'Bridges and Trestles (BT)',
        'Curbs, Sidewalks and Driveways/Geometric Design (GD)' => 'Curbs, Sidewalks and Driveways/Geometric Design (GD)',
        'Signs and Sign Support (SD)' => 'Signs and Sign Support (SD)',
        'Roadside and Site Development (RD)' => 'Roadside and Site Development (RD)',
        'Site Preservation and Erosion Control (EC)' => 'Site Preservation and Erosion Control (EC)',
        'Illumination, Signals and ITS (IS)' => 'Illumination, Signals and ITS (IS)',
        'Work Zone Traffic Control (TC)' => 'Work Zone Traffic Control (TC)',
        'Fence and Glare Screen (FS)' => 'Fence and Glare Screen (FS)',
        'Roadway Delineation/Pavement Markings (PM)' => 'Roadway Delineation/Pavement Markings (PM)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
