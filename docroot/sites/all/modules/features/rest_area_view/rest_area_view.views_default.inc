<?php
/**
 * @file
 * rest_area_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rest_area_view_views_default_views() {
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
    'rest_area' => 'rest_area',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Highways */
  $handler->display->display_options['fields']['field_highways']['id'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['table'] = 'field_data_field_highways';
  $handler->display->display_options['fields']['field_highways']['field'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['label'] = 'Highway';
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
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_geolocation']['delta_offset'] = '0';
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
  /* Filter criterion: Content: Highways (field_highways) */
  $handler->display->display_options['filters']['field_highways_tid']['id'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['table'] = 'field_data_field_highways';
  $handler->display->display_options['filters']['field_highways_tid']['field'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['value'] = '';
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
  $handler->display->display_options['filters']['field_highways_tid']['vocabulary'] = 'highways';
  /* Filter criterion: Content: Direction (field_direction) */
  $handler->display->display_options['filters']['field_direction_value']['id'] = 'field_direction_value';
  $handler->display->display_options['filters']['field_direction_value']['table'] = 'field_data_field_direction';
  $handler->display->display_options['filters']['field_direction_value']['field'] = 'field_direction_value';
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
  $handler->display->display_options['filters']['field_amenities_value']['id'] = 'field_amenities_value';
  $handler->display->display_options['filters']['field_amenities_value']['table'] = 'field_data_field_amenities';
  $handler->display->display_options['filters']['field_amenities_value']['field'] = 'field_amenities_value';
  $handler->display->display_options['filters']['field_amenities_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amenities_value']['expose']['operator_id'] = 'field_amenities_value_op';
  $handler->display->display_options['filters']['field_amenities_value']['expose']['label'] = 'Amenities';
  $handler->display->display_options['filters']['field_amenities_value']['expose']['operator'] = 'field_amenities_value_op';
  $handler->display->display_options['filters']['field_amenities_value']['expose']['identifier'] = 'field_amenities_value';
  $handler->display->display_options['filters']['field_amenities_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['path'] = 'rest-areas';
  $export['rest_areas'] = $view;

  return $export;
}
