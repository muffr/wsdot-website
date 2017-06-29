<?php
/**
 * @file
 * wsdot_projects.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wsdot_projects_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_metadata|node|project|form';
  $field_group->group_name = 'group_project_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Metadata',
    'weight' => '11',
    'children' => array(
      0 => 'field_cities',
      1 => 'field_counties',
      2 => 'field_funding_types',
      3 => 'field_highways',
      4 => 'field_link',
      5 => 'field_project_id',
      6 => 'field_regions',
      7 => 'field_tags',
      8 => 'field_design_build',
      9 => 'field_site_structure',
      10 => 'field_funding_table',
      11 => 'field_pin_report',
      12 => 'field_project_status',
      13 => 'field_organization_term_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Project Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-project-metadata field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_project_metadata|node|project|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Project Metadata');

  return $field_groups;
}
