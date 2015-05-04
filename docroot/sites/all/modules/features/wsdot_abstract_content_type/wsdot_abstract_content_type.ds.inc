<?php
/**
 * @file
 * wsdot_abstract_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function wsdot_abstract_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publications|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publications';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'changed_date' => array(
      'weight' => '11',
      'label' => 'inline',
      'format' => 'ds_post_date_long',
    ),
    'field_number_of_pages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'H3',
        ),
      ),
    ),
  );
  $export['node|publications|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publications|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publications';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_authors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'H3',
        ),
      ),
    ),
    'field_chapter' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
        ),
      ),
    ),
    'field_contact_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
        ),
      ),
    ),
    'field_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
        ),
      ),
    ),
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
        ),
      ),
    ),
    'field_publication_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
        ),
      ),
    ),
    'field_number_of_pages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
        ),
      ),
    ),
  );
  $export['node|publications|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function wsdot_abstract_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publications|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publications';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_description',
        2 => 'field_date',
        3 => 'field_publication_number',
        4 => 'field_publication_version',
        5 => 'field_authors',
        6 => 'field_contact_info',
        7 => 'field_originator',
        8 => 'field_number_of_pages',
        9 => 'field_subjects',
        10 => 'field_related_publications',
        11 => 'changed_date',
      ),
      'right' => array(
        12 => 'field_chapter',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_description' => 'left',
      'field_date' => 'left',
      'field_publication_number' => 'left',
      'field_publication_version' => 'left',
      'field_authors' => 'left',
      'field_contact_info' => 'left',
      'field_originator' => 'left',
      'field_number_of_pages' => 'left',
      'field_subjects' => 'left',
      'field_related_publications' => 'left',
      'changed_date' => 'left',
      'field_chapter' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|publications|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publications|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publications';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_description',
        1 => 'field_date',
        2 => 'field_publication_number',
        3 => 'field_publication_version',
        4 => 'field_number_of_pages',
        5 => 'field_contact_info',
        6 => 'field_authors',
        7 => 'field_originator',
        8 => 'field_subjects',
        9 => 'field_related_publications',
      ),
      'right' => array(
        10 => 'field_chapter',
      ),
    ),
    'fields' => array(
      'field_description' => 'left',
      'field_date' => 'left',
      'field_publication_number' => 'left',
      'field_publication_version' => 'left',
      'field_number_of_pages' => 'left',
      'field_contact_info' => 'left',
      'field_authors' => 'left',
      'field_originator' => 'left',
      'field_subjects' => 'left',
      'field_related_publications' => 'left',
      'field_chapter' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
  );
  $export['node|publications|full'] = $ds_layout;

  return $export;
}
