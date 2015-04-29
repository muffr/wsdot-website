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
  $handler->display->display_options['title'] = 'Wetland Monitoring Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'wetland-reports';
  $export['wetland_reports'] = $view;

  return $export;
}
