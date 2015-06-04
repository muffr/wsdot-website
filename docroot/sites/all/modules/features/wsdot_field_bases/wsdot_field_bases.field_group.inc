<?php
/**
 * @file
 * wsdot_field_bases.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wsdot_field_bases_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_moveable_bridges|node|bridge|form';
  $field_group->group_name = 'group_moveable_bridges';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bridge';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moveable Bridges',
    'weight' => '9',
    'children' => array(
      0 => 'field_location_short',
      1 => 'field_marine_opening_restriction',
      2 => 'field_vessel_clearance',
      3 => 'field_request_an_opening',
      4 => 'field_exceptions',
      5 => 'field_average_opening_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Moveable Bridges',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-moveable-bridges field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_moveable_bridges|node|bridge|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sd_bridges|node|bridge|form';
  $field_group->group_name = 'group_sd_bridges';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bridge';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Structurally Deficient Bridges',
    'weight' => '8',
    'children' => array(
      0 => 'field_highways',
      1 => 'field_counties',
      2 => 'field_span_type',
      3 => 'field_milepost',
      4 => 'field_problem',
      5 => 'field_legislative_district',
      6 => 'field_status_short',
      7 => 'field_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Structurally Deficient Bridges',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-sd-bridges field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_sd_bridges|node|bridge|form'] = $field_group;

  return $export;
}
