<?php
/**
 * @file
 * wsdot_plan_sheet_library_panels.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function wsdot_plan_sheet_library_panels_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|plan_sheet|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'plan_sheet';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_images',
        2 => 'field_file_group',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_images' => 'ds_content',
      'field_file_group' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|plan_sheet|default'] = $ds_layout;

  return $export;
}
