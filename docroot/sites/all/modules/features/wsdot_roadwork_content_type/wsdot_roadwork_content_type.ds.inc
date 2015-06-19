<?php
/**
 * @file
 * wsdot_roadwork_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function wsdot_roadwork_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|roadwork|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'roadwork';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_milepost' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Description',
        ),
      ),
    ),
    'field_regions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Region',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-regions',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_contact_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-contact-info',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_project_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_start_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|roadwork|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|roadwork|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'roadwork';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_counties' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-counties',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'field-counties-body',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_milepost' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-milepost',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'field-milepost-body',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Description',
          'lbw-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-description',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_highways' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-highways',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'field-highways-body',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_regions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'span',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-regions',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'field-region-body',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_contact_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lbw-cl' => 'field-name-field-contact-info',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-contact-info',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_start_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-work-schedule',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|roadwork|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function wsdot_roadwork_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|roadwork|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'roadwork';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_highways',
        2 => 'field_regions',
        3 => 'field_counties',
        4 => 'field_milepost',
        5 => 'body',
        6 => 'field_start_date',
        7 => 'field_user_reference',
        8 => 'field_contact_info',
        9 => 'field_project_ref',
        10 => 'field_external_project',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_highways' => 'ds_content',
      'field_regions' => 'ds_content',
      'field_counties' => 'ds_content',
      'field_milepost' => 'ds_content',
      'body' => 'ds_content',
      'field_start_date' => 'ds_content',
      'field_user_reference' => 'ds_content',
      'field_contact_info' => 'ds_content',
      'field_project_ref' => 'ds_content',
      'field_external_project' => 'ds_content',
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
  $export['node|roadwork|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|roadwork|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'roadwork';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_highways',
        1 => 'field_regions',
        2 => 'field_counties',
        3 => 'field_milepost',
        4 => 'body',
        5 => 'field_start_date',
        6 => 'field_project_ref',
        7 => 'field_user_reference',
        8 => 'field_external_project',
        9 => 'field_contact_info',
      ),
    ),
    'fields' => array(
      'field_highways' => 'ds_content',
      'field_regions' => 'ds_content',
      'field_counties' => 'ds_content',
      'field_milepost' => 'ds_content',
      'body' => 'ds_content',
      'field_start_date' => 'ds_content',
      'field_project_ref' => 'ds_content',
      'field_user_reference' => 'ds_content',
      'field_external_project' => 'ds_content',
      'field_contact_info' => 'ds_content',
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
  $export['node|roadwork|full'] = $ds_layout;

  return $export;
}
