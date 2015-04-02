<?php
/**
 * @file
 * wsdot_roadwork_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wsdot_roadwork_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_projects|node|roadwork|form';
  $field_group->group_name = 'group_projects';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'roadwork';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related projects',
    'weight' => '9',
    'children' => array(
      0 => 'field_project_ref',
      1 => 'field_external_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-projects field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_projects|node|roadwork|form'] = $field_group;

  return $export;
}
