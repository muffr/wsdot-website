<?php
/**
 * @file
 * wsdot_event_panels.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function wsdot_event_panels_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'strong',
        ),
      ),
    ),
    'field_host' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'strong',
          'suffix' => '<p>',
        ),
      ),
    ),
    'field_subjects' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
        ),
      ),
    ),
    'field_event_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'strong',
        ),
      ),
    ),
    'field_counties' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'strong',
        ),
      ),
    ),
    'field_regions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
        ),
      ),
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function wsdot_event_panels_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_date',
        2 => 'field_description',
        3 => 'field_event_location',
        4 => 'field_host',
        5 => 'field_subjects',
        6 => 'field_counties',
        7 => 'field_regions',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_date' => 'ds_content',
      'field_description' => 'ds_content',
      'field_event_location' => 'ds_content',
      'field_host' => 'ds_content',
      'field_subjects' => 'ds_content',
      'field_counties' => 'ds_content',
      'field_regions' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|default'] = $ds_layout;

  return $export;
}
