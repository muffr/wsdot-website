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
  $view->name = 'wetland_reports_north_central_region';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Wetland Reports North Central Region';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wetland Reports North Central Region';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  /* Filter criterion: Field: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_regions_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';

  /* Display: Wetland Reports North Central Region Block */
  $handler = $view->new_display('block', 'Wetland Reports North Central Region Block', 'block');
  $export['wetland_reports_north_central_region'] = $view;

  $view = new view();
  $view->name = 'wetlands_reports_nothwest_region';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Wetlands Reports Nothwest Region';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wetlands Reports Northwest Region';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Report Link */
  $handler->display->display_options['fields']['field_report_link_1']['id'] = 'field_report_link_1';
  $handler->display->display_options['fields']['field_report_link_1']['table'] = 'field_data_field_report_link';
  $handler->display->display_options['fields']['field_report_link_1']['field'] = 'field_report_link';
  $handler->display->display_options['fields']['field_report_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_report_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_report_link_1']['click_sort_column'] = 'url';
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
  /* Filter criterion: Field: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_regions_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';

  /* Display: Wetlands Reports Northwest Region Block */
  $handler = $view->new_display('block', 'Wetlands Reports Northwest Region Block', 'block');

  /* Display: Wetlands Reports Northwest Region Content pane */
  $handler = $view->new_display('panel_pane', 'Wetlands Reports Northwest Region Content pane', 'panel_pane_1');
  $export['wetlands_reports_nothwest_region'] = $view;

  return $export;
}
