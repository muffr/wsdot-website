<?php
/**
 * @file
 * moveable_bridges_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function moveable_bridges_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'moveable_bridges';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Moveable Bridges';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'We\'re sorry. There are no bridges that match your search.';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
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
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_short']['id'] = 'field_location_short';
  $handler->display->display_options['fields']['field_location_short']['table'] = 'field_data_field_location_short';
  $handler->display->display_options['fields']['field_location_short']['field'] = 'field_location_short';
  $handler->display->display_options['fields']['field_location_short']['element_label_colon'] = FALSE;
  /* Field: Content: Marine Opening Restrictions */
  $handler->display->display_options['fields']['field_marine_opening_restriction']['id'] = 'field_marine_opening_restriction';
  $handler->display->display_options['fields']['field_marine_opening_restriction']['table'] = 'field_data_field_marine_opening_restriction';
  $handler->display->display_options['fields']['field_marine_opening_restriction']['field'] = 'field_marine_opening_restriction';
  $handler->display->display_options['fields']['field_marine_opening_restriction']['element_label_colon'] = FALSE;
  /* Field: Content: Exceptions */
  $handler->display->display_options['fields']['field_exceptions']['id'] = 'field_exceptions';
  $handler->display->display_options['fields']['field_exceptions']['table'] = 'field_data_field_exceptions';
  $handler->display->display_options['fields']['field_exceptions']['field'] = 'field_exceptions';
  $handler->display->display_options['fields']['field_exceptions']['element_label_colon'] = FALSE;
  /* Field: Content: Vessel Clearance */
  $handler->display->display_options['fields']['field_vessel_clearance']['id'] = 'field_vessel_clearance';
  $handler->display->display_options['fields']['field_vessel_clearance']['table'] = 'field_data_field_vessel_clearance';
  $handler->display->display_options['fields']['field_vessel_clearance']['field'] = 'field_vessel_clearance';
  $handler->display->display_options['fields']['field_vessel_clearance']['element_label_colon'] = FALSE;
  /* Field: Content: Request an Opening */
  $handler->display->display_options['fields']['field_request_an_opening']['id'] = 'field_request_an_opening';
  $handler->display->display_options['fields']['field_request_an_opening']['table'] = 'field_data_field_request_an_opening';
  $handler->display->display_options['fields']['field_request_an_opening']['field'] = 'field_request_an_opening';
  $handler->display->display_options['fields']['field_request_an_opening']['element_label_colon'] = FALSE;
  /* Field: Content: Average Opening Time */
  $handler->display->display_options['fields']['field_average_opening_time']['id'] = 'field_average_opening_time';
  $handler->display->display_options['fields']['field_average_opening_time']['table'] = 'field_data_field_average_opening_time';
  $handler->display->display_options['fields']['field_average_opening_time']['field'] = 'field_average_opening_time';
  $handler->display->display_options['fields']['field_average_opening_time']['element_label_colon'] = FALSE;
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'bridge' => 'bridge',
  );
  /* Filter criterion: Content: Bridge Category (field_bridge_category) */
  $handler->display->display_options['filters']['field_bridge_category_value']['id'] = 'field_bridge_category_value';
  $handler->display->display_options['filters']['field_bridge_category_value']['table'] = 'field_data_field_bridge_category';
  $handler->display->display_options['filters']['field_bridge_category_value']['field'] = 'field_bridge_category_value';
  $handler->display->display_options['filters']['field_bridge_category_value']['value'] = array(
    'Moveable' => 'Moveable',
  );
  $handler->display->display_options['filters']['field_bridge_category_value']['expose']['operator_id'] = 'field_bridge_category_value_op';
  $handler->display->display_options['filters']['field_bridge_category_value']['expose']['label'] = 'Bridge Category (field_bridge_category)';
  $handler->display->display_options['filters']['field_bridge_category_value']['expose']['operator'] = 'field_bridge_category_value_op';
  $handler->display->display_options['filters']['field_bridge_category_value']['expose']['identifier'] = 'field_bridge_category_value';
  /* Filter criterion: Field: Counties (field_counties) */
  $handler->display->display_options['filters']['field_counties_tid']['id'] = 'field_counties_tid';
  $handler->display->display_options['filters']['field_counties_tid']['table'] = 'field_data_field_counties';
  $handler->display->display_options['filters']['field_counties_tid']['field'] = 'field_counties_tid';
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
  /* Filter criterion: Content: Highway (field_highways) */
  $handler->display->display_options['filters']['field_highways_tid']['id'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['table'] = 'field_data_field_highways';
  $handler->display->display_options['filters']['field_highways_tid']['field'] = 'field_highways_tid';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['moveable_bridges'] = $view;

  return $export;
}
