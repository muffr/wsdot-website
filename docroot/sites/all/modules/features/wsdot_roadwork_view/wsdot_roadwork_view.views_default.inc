<?php
/**
 * @file
 * wsdot_roadwork_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_roadwork_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'roadwork';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Roadwork';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Roadwork';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More local projects...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bottom-spacing';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Work Schedule */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = 'Date of Work';
  $handler->display->display_options['fields']['field_start_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Highways */
  $handler->display->display_options['fields']['field_highways']['id'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['table'] = 'field_data_field_highways';
  $handler->display->display_options['fields']['field_highways']['field'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['label'] = 'Highway';
  $handler->display->display_options['fields']['field_highways']['element_label_type'] = 'strong';
  /* Field: Field: Counties */
  $handler->display->display_options['fields']['field_counties']['id'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['table'] = 'field_data_field_counties';
  $handler->display->display_options['fields']['field_counties']['field'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['label'] = 'County';
  $handler->display->display_options['fields']['field_counties']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_counties']['delta_offset'] = '0';
  /* Field: Field: Regions */
  $handler->display->display_options['fields']['field_regions']['id'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['table'] = 'field_data_field_regions';
  $handler->display->display_options['fields']['field_regions']['field'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['label'] = 'Region';
  $handler->display->display_options['fields']['field_regions']['element_label_type'] = 'strong';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_milepost']['id'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['table'] = 'field_data_field_milepost';
  $handler->display->display_options['fields']['field_milepost']['field'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['element_label_type'] = 'strong';
  /* Field: Field: Contact */
  $handler->display->display_options['fields']['field_user_reference']['id'] = 'field_user_reference';
  $handler->display->display_options['fields']['field_user_reference']['table'] = 'field_data_field_user_reference';
  $handler->display->display_options['fields']['field_user_reference']['field'] = 'field_user_reference';
  $handler->display->display_options['fields']['field_user_reference']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_user_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Project */
  $handler->display->display_options['fields']['field_project_ref']['id'] = 'field_project_ref';
  $handler->display->display_options['fields']['field_project_ref']['table'] = 'field_data_field_project_ref';
  $handler->display->display_options['fields']['field_project_ref']['field'] = 'field_project_ref';
  $handler->display->display_options['fields']['field_project_ref']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_project_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: External project */
  $handler->display->display_options['fields']['field_external_project']['id'] = 'field_external_project';
  $handler->display->display_options['fields']['field_external_project']['table'] = 'field_data_field_external_project';
  $handler->display->display_options['fields']['field_external_project']['field'] = 'field_external_project';
  $handler->display->display_options['fields']['field_external_project']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_external_project']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_external_project']['click_sort_column'] = 'url';
  /* Field: Field: External contact */
  $handler->display->display_options['fields']['field_contact_info']['id'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['table'] = 'field_data_field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['field'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_contact_info']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_contact_info']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* Contextual filter: Field: Regions (field_regions) */
  $handler->display->display_options['arguments']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['arguments']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['arguments']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['arguments']['field_regions_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_regions_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_regions_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_regions_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_regions_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_regions_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_regions_tid']['validate_options']['vocabularies'] = array(
    'regions' => 'regions',
  );
  $handler->display->display_options['arguments']['field_regions_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_regions_tid']['validate_options']['transform'] = TRUE;
  /* Filter criterion: Field: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_regions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator_id'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['identifier'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';
  /* Filter criterion: Content: Highways (field_highways) */
  $handler->display->display_options['filters']['field_highways_tid']['id'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['table'] = 'field_data_field_highways';
  $handler->display->display_options['filters']['field_highways_tid']['field'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['value'] = '';
  $handler->display->display_options['filters']['field_highways_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_highways_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highways_tid']['expose']['operator_id'] = 'field_highways_tid_op';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['label'] = 'Highway';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['operator'] = 'field_highways_tid_op';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['identifier'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_highways_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_highways_tid']['vocabulary'] = 'highways';
  /* Filter criterion: Field: Counties (field_counties) */
  $handler->display->display_options['filters']['field_counties_tid']['id'] = 'field_counties_tid';
  $handler->display->display_options['filters']['field_counties_tid']['table'] = 'field_data_field_counties';
  $handler->display->display_options['filters']['field_counties_tid']['field'] = 'field_counties_tid';
  $handler->display->display_options['filters']['field_counties_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_counties_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_counties_tid']['expose']['operator_id'] = 'field_counties_tid_op';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['label'] = 'County';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['operator'] = 'field_counties_tid_op';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['identifier'] = 'field_counties_tid';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_counties_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_counties_tid']['vocabulary'] = 'counties';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'roadwork' => 'roadwork',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Work Schedule - end date (field_start_date:value2) */
  $handler->display->display_options['filters']['field_start_date_value2']['id'] = 'field_start_date_value2';
  $handler->display->display_options['filters']['field_start_date_value2']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['filters']['field_start_date_value2']['field'] = 'field_start_date_value2';
  $handler->display->display_options['filters']['field_start_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_start_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_start_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_start_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Open (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_active_value']['group'] = 1;

  /* Display: Page by Region */
  $handler = $view->new_display('page', 'Page by Region', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'bottom-spacing';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_highways' => 'field_highways',
    'field_regions' => 'field_regions',
    'field_counties' => 'field_counties',
    'field_milepost' => 'field_milepost',
    'field_start_date' => 'field_start_date',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;|&nbsp;';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = '.RoadworkTitle';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Highways */
  $handler->display->display_options['fields']['field_highways']['id'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['table'] = 'field_data_field_highways';
  $handler->display->display_options['fields']['field_highways']['field'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['label'] = 'Highway';
  /* Field: Field: Regions */
  $handler->display->display_options['fields']['field_regions']['id'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['table'] = 'field_data_field_regions';
  $handler->display->display_options['fields']['field_regions']['field'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['label'] = 'Region';
  /* Field: Field: Counties */
  $handler->display->display_options['fields']['field_counties']['id'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['table'] = 'field_data_field_counties';
  $handler->display->display_options['fields']['field_counties']['field'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['label'] = 'County';
  $handler->display->display_options['fields']['field_counties']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_counties']['element_class'] = 'field-content';
  $handler->display->display_options['fields']['field_counties']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_counties']['element_label_class'] = 'views-label views-label-field-counties';
  $handler->display->display_options['fields']['field_counties']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_counties']['element_wrapper_class'] = 'views-field-field-counties';
  $handler->display->display_options['fields']['field_counties']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_counties']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_milepost']['id'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['table'] = 'field_data_field_milepost';
  $handler->display->display_options['fields']['field_milepost']['field'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_milepost']['element_class'] = 'field-content';
  $handler->display->display_options['fields']['field_milepost']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_milepost']['element_label_class'] = 'views-label views-label-field-milepost';
  $handler->display->display_options['fields']['field_milepost']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_milepost']['element_wrapper_class'] = 'views-field views-field-field-milepost';
  $handler->display->display_options['fields']['field_milepost']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_class'] = 'DescriptionText';
  $handler->display->display_options['fields']['body']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_label_class'] = 'DescriptionHdr';
  /* Field: Content: Work Schedule */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Project */
  $handler->display->display_options['fields']['field_project_ref']['id'] = 'field_project_ref';
  $handler->display->display_options['fields']['field_project_ref']['table'] = 'field_data_field_project_ref';
  $handler->display->display_options['fields']['field_project_ref']['field'] = 'field_project_ref';
  $handler->display->display_options['fields']['field_project_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_project_ref']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_project_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Contact */
  $handler->display->display_options['fields']['field_user_reference']['id'] = 'field_user_reference';
  $handler->display->display_options['fields']['field_user_reference']['table'] = 'field_data_field_user_reference';
  $handler->display->display_options['fields']['field_user_reference']['field'] = 'field_user_reference';
  $handler->display->display_options['fields']['field_user_reference']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_user_reference']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_user_reference']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: External project */
  $handler->display->display_options['fields']['field_external_project']['id'] = 'field_external_project';
  $handler->display->display_options['fields']['field_external_project']['table'] = 'field_data_field_external_project';
  $handler->display->display_options['fields']['field_external_project']['field'] = 'field_external_project';
  $handler->display->display_options['fields']['field_external_project']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_external_project']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_external_project']['click_sort_column'] = 'url';
  /* Field: Field: External contact */
  $handler->display->display_options['fields']['field_contact_info']['id'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['table'] = 'field_data_field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['field'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_contact_info']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_contact_info']['element_class'] = 'ExternalContactFields';
  $handler->display->display_options['fields']['field_contact_info']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_contact_info']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_contact_info']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_contact_info']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_contact_info']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'roadwork';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More local projects...';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'roadwork' => 'roadwork',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'field_regions_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.name',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Regions (field_regions)',
    ),
  );

  /* Display: Featured Projects pane */
  $handler = $view->new_display('panel_pane', 'Featured Projects pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'featured';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Regions (field_regions) */
  $handler->display->display_options['arguments']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['arguments']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['arguments']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['arguments']['field_regions_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_regions_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_regions_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_regions_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_regions_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_regions_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_regions_tid']['validate_options']['vocabularies'] = array(
    'regions' => 'regions',
  );
  $handler->display->display_options['arguments']['field_regions_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_regions_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_regions_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.name',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Regions (field_regions)',
    ),
  );

  /* Display: Page by County */
  $handler = $view->new_display('page', 'Page by County', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Counties (field_counties) */
  $handler->display->display_options['arguments']['field_counties_tid']['id'] = 'field_counties_tid';
  $handler->display->display_options['arguments']['field_counties_tid']['table'] = 'field_data_field_counties';
  $handler->display->display_options['arguments']['field_counties_tid']['field'] = 'field_counties_tid';
  $handler->display->display_options['arguments']['field_counties_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_counties_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_counties_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_counties_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_counties_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_counties_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_counties_tid']['validate_options']['vocabularies'] = array(
    'counties' => 'counties',
  );
  $handler->display->display_options['arguments']['field_counties_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_counties_tid']['validate_options']['transform'] = TRUE;
  /* Contextual filter: Field: Regions (field_regions) */
  $handler->display->display_options['arguments']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['arguments']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['arguments']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['arguments']['field_regions_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_regions_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_regions_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_regions_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_regions_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_regions_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_regions_tid']['validate_options']['vocabularies'] = array(
    'regions' => 'regions',
  );
  $handler->display->display_options['arguments']['field_regions_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_regions_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['path'] = 'county/roadwork/%';
  $export['roadwork'] = $view;

  return $export;
}
