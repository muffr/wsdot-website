<?php
/**
 * @file
 * wsdot_advertisements_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wsdot_advertisements_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ad_status|node|advertisements|form';
  $field_group->group_name = 'group_ad_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advertisements';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advertisement Status',
    'weight' => '9',
    'children' => array(
      0 => 'field_active',
      1 => 'field_award_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advertisement Status',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ad-status field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ad_status|node|advertisements|form'] = $field_group;

  return $export;
}
