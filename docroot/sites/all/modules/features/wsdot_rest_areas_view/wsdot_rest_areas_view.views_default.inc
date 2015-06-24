<?php
/**
 * @file
 * wsdot_rest_areas_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_rest_areas_view_views_default_views() {
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
  $handler->display->display_options['title'] = 'Safety Rest Areas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_counties' => 'field_counties',
    'field_highways' => 'field_highways',
    'field_highway_direction' => 'field_highway_direction',
    'field_milepost' => 'field_milepost',
    'field_geolocation_lat_long' => 'field_geolocation_lat_long',
    'field_rest_areas_amenities' => 'field_rest_areas_amenities',
    'field_image' => 'field_image',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_counties' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_highways' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_highway_direction' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_milepost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geolocation_lat_long' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rest_areas_amenities' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Counties */
  $handler->display->display_options['fields']['field_counties']['id'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['table'] = 'field_data_field_counties';
  $handler->display->display_options['fields']['field_counties']['field'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['delta_offset'] = '0';
  /* Field: Content: Highway */
  $handler->display->display_options['fields']['field_highways']['id'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['table'] = 'field_data_field_highways';
  $handler->display->display_options['fields']['field_highways']['field'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['label'] = 'Highways';
  /* Field: Content: Direction */
  $handler->display->display_options['fields']['field_highway_direction']['id'] = 'field_highway_direction';
  $handler->display->display_options['fields']['field_highway_direction']['table'] = 'field_data_field_highway_direction';
  $handler->display->display_options['fields']['field_highway_direction']['field'] = 'field_highway_direction';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_milepost']['id'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['table'] = 'field_data_field_milepost';
  $handler->display->display_options['fields']['field_milepost']['field'] = 'field_milepost';
  $handler->display->display_options['fields']['field_milepost']['label'] = 'Milepost';
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_geolocation_lat_long']['id'] = 'field_geolocation_lat_long';
  $handler->display->display_options['fields']['field_geolocation_lat_long']['table'] = 'field_data_field_geolocation_lat_long';
  $handler->display->display_options['fields']['field_geolocation_lat_long']['field'] = 'field_geolocation_lat_long';
  $handler->display->display_options['fields']['field_geolocation_lat_long']['click_sort_column'] = 'lat';
  /* Field: Content: Amenities */
  $handler->display->display_options['fields']['field_rest_areas_amenities']['id'] = 'field_rest_areas_amenities';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['table'] = 'field_data_field_rest_areas_amenities';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['field'] = 'field_rest_areas_amenities';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['type'] = 'ds_taxonomy_view_mode';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rest_areas_amenities']['separator'] = '';
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
  /* Filter criterion: Field: Counties (field_counties) */
  $handler->display->display_options['filters']['field_counties_tid']['id'] = 'field_counties_tid';
  $handler->display->display_options['filters']['field_counties_tid']['table'] = 'field_data_field_counties';
  $handler->display->display_options['filters']['field_counties_tid']['field'] = 'field_counties_tid';
  $handler->display->display_options['filters']['field_counties_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_counties_tid']['expose']['operator_id'] = 'field_counties_tid_op';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['label'] = 'County';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['operator'] = 'field_counties_tid_op';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['identifier'] = 'counties';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_counties_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_counties_tid']['vocabulary'] = 'counties';
  /* Filter criterion: Content: Direction (field_highway_direction) */
  $handler->display->display_options['filters']['field_highway_direction_value']['id'] = 'field_highway_direction_value';
  $handler->display->display_options['filters']['field_highway_direction_value']['table'] = 'field_data_field_highway_direction';
  $handler->display->display_options['filters']['field_highway_direction_value']['field'] = 'field_highway_direction_value';
  $handler->display->display_options['filters']['field_highway_direction_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highway_direction_value']['expose']['operator_id'] = 'field_highway_direction_value_op';
  $handler->display->display_options['filters']['field_highway_direction_value']['expose']['label'] = 'Direction';
  $handler->display->display_options['filters']['field_highway_direction_value']['expose']['operator'] = 'field_highway_direction_value_op';
  $handler->display->display_options['filters']['field_highway_direction_value']['expose']['identifier'] = 'direction';
  $handler->display->display_options['filters']['field_highway_direction_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  /* Filter criterion: Content: Highway (field_highways) */
  $handler->display->display_options['filters']['field_highways_tid']['id'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['table'] = 'field_data_field_highways';
  $handler->display->display_options['filters']['field_highways_tid']['field'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highways_tid']['expose']['operator_id'] = 'field_highways_tid_op';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['label'] = 'Highway';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['operator'] = 'field_highways_tid_op';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['identifier'] = 'highways';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_highways_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_highways_tid']['vocabulary'] = 'highways';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'safety/restareas';
  $handler->display->display_options['menu']['title'] = 'Safety Rest Areas';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['rest_areas'] = $view;

  return $export;
}
