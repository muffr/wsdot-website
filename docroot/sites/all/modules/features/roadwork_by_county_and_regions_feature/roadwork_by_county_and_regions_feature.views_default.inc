<?php
/**
 * @file
 * roadwork_by_county_and_regions_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function roadwork_by_county_and_regions_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'roadwork_by_county';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Roadwork by County';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Roadwork by County';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_counties_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_roadwork_name' => 'field_roadwork_name',
    'field_highway' => 'field_highway',
    'field_milepost' => 'field_milepost',
    'field_description' => 'field_description',
    'field_contact' => 'field_contact',
    'field_region' => 'field_region',
    'field_counties_1' => 'field_counties_1',
    'changed' => 'changed',
  );
  $handler->display->display_options['row_options']['separator'] = '<br>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: roadwork name */
  $handler->display->display_options['fields']['field_roadwork_name']['id'] = 'field_roadwork_name';
  $handler->display->display_options['fields']['field_roadwork_name']['table'] = 'field_data_field_roadwork_name';
  $handler->display->display_options['fields']['field_roadwork_name']['field'] = 'field_roadwork_name';
  $handler->display->display_options['fields']['field_roadwork_name']['label'] = 'Roadwork name';
  $handler->display->display_options['fields']['field_roadwork_name']['click_sort_column'] = 'url';
  /* Field: Content: highway */
  $handler->display->display_options['fields']['field_highway']['id'] = 'field_highway';
  $handler->display->display_options['fields']['field_highway']['table'] = 'field_data_field_highway';
  $handler->display->display_options['fields']['field_highway']['field'] = 'field_highway';
  $handler->display->display_options['fields']['field_highway']['label'] = 'Highway';
  /* Field: Content: milepost */
  $handler->display->display_options['fields']['field_milepost']['id'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['table'] = 'field_data_field_milepost';
  $handler->display->display_options['fields']['field_milepost']['field'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['label'] = 'Milepost';
  /* Field: Content: description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_description']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_description']['delta_offset'] = '0';
  /* Field: Content: contact */
  $handler->display->display_options['fields']['field_contact']['id'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['field_contact']['field'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['label'] = 'Contact';
  /* Field: Content: region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'Region';
  /* Field: Content: county */
  $handler->display->display_options['fields']['field_counties_1']['id'] = 'field_counties_1';
  $handler->display->display_options['fields']['field_counties_1']['table'] = 'field_data_field_counties';
  $handler->display->display_options['fields']['field_counties_1']['field'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties_1']['label'] = 'County';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'F j, Y \\a\\t g:i a';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: region (field_region) */
  $handler->display->display_options['arguments']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['arguments']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['arguments']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['arguments']['field_region_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_region_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_region_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_region_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_region_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_region_tid']['validate_options']['vocabularies'] = array(
    'regions' => 'regions',
  );
  $handler->display->display_options['arguments']['field_region_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_region_tid']['validate_options']['transform'] = TRUE;
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
  /* Filter criterion: Content: region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'region';
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'regions';
  $handler->display->display_options['filters']['field_region_tid']['hierarchy'] = 1;

  /* Display: Roadwork by County Page */
  $handler = $view->new_display('page', 'Roadwork by County Page', 'roadwork_by_county_page');
  $handler->display->display_options['path'] = 'roadwork';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Roadwork by County';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['roadwork_by_county'] = $view;

  $view = new view();
  $view->name = 'roadwork_by_region';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Roadwork by Region';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Roadwork by Region';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_roadwork_name' => 'field_roadwork_name',
    'field_highway' => 'field_highway',
    'field_milepost' => 'field_milepost',
    'field_description' => 'field_description',
    'field_contact' => 'field_contact',
    'field_region' => 'field_region',
    'field_counties' => 'field_counties',
    'changed' => 'changed',
  );
  $handler->display->display_options['row_options']['separator'] = '<br>';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: roadwork name */
  $handler->display->display_options['fields']['field_roadwork_name']['id'] = 'field_roadwork_name';
  $handler->display->display_options['fields']['field_roadwork_name']['table'] = 'field_data_field_roadwork_name';
  $handler->display->display_options['fields']['field_roadwork_name']['field'] = 'field_roadwork_name';
  $handler->display->display_options['fields']['field_roadwork_name']['label'] = 'Roadwork name';
  $handler->display->display_options['fields']['field_roadwork_name']['click_sort_column'] = 'url';
  /* Field: Content: highway */
  $handler->display->display_options['fields']['field_highway']['id'] = 'field_highway';
  $handler->display->display_options['fields']['field_highway']['table'] = 'field_data_field_highway';
  $handler->display->display_options['fields']['field_highway']['field'] = 'field_highway';
  $handler->display->display_options['fields']['field_highway']['label'] = 'Highway';
  /* Field: Content: milepost */
  $handler->display->display_options['fields']['field_milepost']['id'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['table'] = 'field_data_field_milepost';
  $handler->display->display_options['fields']['field_milepost']['field'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['label'] = 'Milepost';
  /* Field: Content: description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_description']['delta_offset'] = '0';
  /* Field: Content: contact */
  $handler->display->display_options['fields']['field_contact']['id'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['table'] = 'field_data_field_contact';
  $handler->display->display_options['fields']['field_contact']['field'] = 'field_contact';
  $handler->display->display_options['fields']['field_contact']['label'] = 'Contact';
  /* Field: Content: region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'Region';
  $handler->display->display_options['fields']['field_region']['element_default_classes'] = FALSE;
  /* Field: Content: county */
  $handler->display->display_options['fields']['field_counties']['id'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['table'] = 'field_data_field_counties';
  $handler->display->display_options['fields']['field_counties']['field'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['label'] = 'County';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'F j, Y \\a\\t g:i a';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['timezone'] = 'America/Vancouver';
  /* Sort criterion: Content: region (field_region) */
  $handler->display->display_options['sorts']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['sorts']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['sorts']['field_region_tid']['field'] = 'field_region_tid';
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

  /* Display: Roadwork by Region Page */
  $handler = $view->new_display('page', 'Roadwork by Region Page', 'roadwork_by_region_page');
  $handler->display->display_options['path'] = 'roadwork-by-region';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Roadwork by Region';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['roadwork_by_region'] = $view;

  return $export;
}
