<?php
/**
 * @file
 * wsdot_projects.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wsdot_projects_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status|node|project|form';
  $field_group->group_name = 'group_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '1',
    'children' => array(
      0 => 'field_status_date',
      1 => 'field_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-status field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_status|node|project|form'] = $field_group;

  return $export;
}
