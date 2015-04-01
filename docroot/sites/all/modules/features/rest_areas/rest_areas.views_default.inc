<?php
/**
 * @file
 * rest_areas.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rest_areas_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rest_areas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rest Areas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Rest Areas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Milepost */
  $handler->display->display_options['fields']['field_milepost']['id'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['table'] = 'field_data_field_milepost';
  $handler->display->display_options['fields']['field_milepost']['field'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['label'] = 'Location';
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'lat';
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
    'rest_area' => 'rest_area',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Direction */
  $handler->display->display_options['fields']['field_direction']['id'] = 'field_direction';
  $handler->display->display_options['fields']['field_direction']['table'] = 'field_data_field_direction';
  $handler->display->display_options['fields']['field_direction']['field'] = 'field_direction';
  /* Field: Content: Milepost */
  $handler->display->display_options['fields']['field_milepost']['id'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['table'] = 'field_data_field_milepost';
  $handler->display->display_options['fields']['field_milepost']['field'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['label'] = 'Location';
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'lat';
  /* Field: Content: Amenities */
  $handler->display->display_options['fields']['field_amenities']['id'] = 'field_amenities';
  $handler->display->display_options['fields']['field_amenities']['table'] = 'field_data_field_amenities';
  $handler->display->display_options['fields']['field_amenities']['field'] = 'field_amenities';
  $handler->display->display_options['fields']['field_amenities']['delta_offset'] = '0';
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
    'rest_area' => 'rest_area',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Highway (field_highways) */
  $handler->display->display_options['filters']['field_highways_tid']['id'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['table'] = 'field_data_field_highways';
  $handler->display->display_options['filters']['field_highways_tid']['field'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_highways_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highways_tid']['expose']['operator_id'] = 'field_highways_tid_op';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['label'] = 'Highways';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['operator'] = 'field_highways_tid_op';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['identifier'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_highways_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_highways_tid']['vocabulary'] = 'highways';
  $handler->display->display_options['filters']['field_highways_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Direction (field_direction) */
  $handler->display->display_options['filters']['field_direction_value']['id'] = 'field_direction_value';
  $handler->display->display_options['filters']['field_direction_value']['table'] = 'field_data_field_direction';
  $handler->display->display_options['filters']['field_direction_value']['field'] = 'field_direction_value';
  $handler->display->display_options['filters']['field_direction_value']['group'] = 1;
  $handler->display->display_options['filters']['field_direction_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_direction_value']['expose']['operator_id'] = 'field_direction_value_op';
  $handler->display->display_options['filters']['field_direction_value']['expose']['label'] = 'Direction';
  $handler->display->display_options['filters']['field_direction_value']['expose']['operator'] = 'field_direction_value_op';
  $handler->display->display_options['filters']['field_direction_value']['expose']['identifier'] = 'field_direction_value';
  $handler->display->display_options['filters']['field_direction_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Amenities (field_amenities) */
  $handler->display->display_options['filters']['field_amenities_tid']['id'] = 'field_amenities_tid';
  $handler->display->display_options['filters']['field_amenities_tid']['table'] = 'field_data_field_amenities';
  $handler->display->display_options['filters']['field_amenities_tid']['field'] = 'field_amenities_tid';
  $handler->display->display_options['filters']['field_amenities_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_amenities_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['operator_id'] = 'field_amenities_tid_op';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['label'] = 'Amenities';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['operator'] = 'field_amenities_tid_op';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['identifier'] = 'field_amenities_tid';
  $handler->display->display_options['filters']['field_amenities_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_amenities_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_amenities_tid']['vocabulary'] = 'rest_area_amenities';
  $handler->display->display_options['path'] = 'rest-areas';
  $export['rest_areas'] = $view;

  return $export;
}
