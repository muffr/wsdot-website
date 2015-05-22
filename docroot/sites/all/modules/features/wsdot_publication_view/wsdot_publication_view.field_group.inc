<?php
/**
 * @file
 * wsdot_publication_view.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wsdot_publication_view_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_revision_history|node|publication|form';
  $field_group->group_name = 'group_revision_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Revision History',
    'weight' => '14',
    'children' => array(
      0 => 'field_version_date',
      1 => 'field_publication_version_',
      2 => 'field_complete',
      3 => 'field_revision',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Revision History',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-revision-history field-group-fieldset',
        'description' => 'Revision history of manual',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_revision_history|node|publication|form'] = $field_group;

  return $export;
}
