<?php
/**
 * @file
 * wsdot_wetland_monitoring_reports_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_wetland_monitoring_reports_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'wetland_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Wetland Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_regions',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_counties',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Field: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['label'] = '';
  $handler->display->display_options['fields']['field_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['delta_offset'] = '0';
  /* Field: Field: Regions */
  $handler->display->display_options['fields']['field_regions']['id'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['table'] = 'field_data_field_regions';
  $handler->display->display_options['fields']['field_regions']['field'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['label'] = '';
  $handler->display->display_options['fields']['field_regions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_regions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_regions']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_regions']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Counties */
  $handler->display->display_options['fields']['field_counties']['id'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['table'] = 'field_data_field_counties';
  $handler->display->display_options['fields']['field_counties']['field'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['label'] = '';
  $handler->display->display_options['fields']['field_counties']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_counties']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_counties']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_counties']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_counties']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'wetland_monitoring_reports' => 'wetland_monitoring_reports',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Year (field_year) */
  $handler->display->display_options['filters']['field_year_value_1']['id'] = 'field_year_value_1';
  $handler->display->display_options['filters']['field_year_value_1']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_value_1']['field'] = 'field_year_value';
  $handler->display->display_options['filters']['field_year_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_year_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_value_1']['expose']['operator_id'] = 'field_year_value_1_op';
  $handler->display->display_options['filters']['field_year_value_1']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_year_value_1']['expose']['operator'] = 'field_year_value_1_op';
  $handler->display->display_options['filters']['field_year_value_1']['expose']['identifier'] = 'field_year_value_1';
  $handler->display->display_options['filters']['field_year_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_year_value_1']['granularity'] = 'year';
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
  $handler->display->display_options['filters']['field_regions_tid']['error_message'] = FALSE;
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
  $handler->display->display_options['filters']['field_counties_tid']['error_message'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['wetland_reports'] = $view;

  return $export;
}
