<?php
/**
 * @file
 * wsdot_publication_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wsdot_publication_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manuals_metadata|node|publication|form';
  $field_group->group_name = 'group_manuals_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Manuals Specific Metadata',
    'weight' => '9',
    'children' => array(
      0 => 'field_managers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Manuals Specific Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-manuals-metadata field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_manuals_metadata|node|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_reports_metadata|node|publication|form';
  $field_group->group_name = 'group_research_reports_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Research Reports Metadata',
    'weight' => '10',
    'children' => array(
      0 => 'field_authors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Research Reports Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-research-reports-metadata field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_research_reports_metadata|node|publication|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Manuals Specific Metadata');
  t('Research Reports Metadata');

  return $field_groups;
}
