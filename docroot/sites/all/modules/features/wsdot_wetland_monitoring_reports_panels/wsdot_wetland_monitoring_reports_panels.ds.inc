<?php
/**
 * @file
 * wsdot_wetland_monitoring_reports_panels.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function wsdot_wetland_monitoring_reports_panels_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|wetland_monitoring_reports|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'wetland_monitoring_reports';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_regions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h4',
          'prefix' => '<p>',
          'suffix' => ' Region<br>',
        ),
      ),
    ),
    'field_counties' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => ' County',
        ),
      ),
    ),
  );
  $export['node|wetland_monitoring_reports|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function wsdot_wetland_monitoring_reports_panels_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|wetland_monitoring_reports|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'wetland_monitoring_reports';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_report_link',
        2 => 'field_year',
        3 => 'field_regions',
        4 => 'field_counties',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_report_link' => 'ds_content',
      'field_year' => 'ds_content',
      'field_regions' => 'ds_content',
      'field_counties' => 'ds_content',
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
  $export['node|wetland_monitoring_reports|default'] = $ds_layout;

  return $export;
}
