<?php
/**
 * @file
 * wsdot_park_and_ride_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_park_and_ride_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'park_and_ride_lots';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Park and Ride Lots';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Park and Ride Lot Locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_address' => 'field_address',
    'field_city' => 'field_city',
    'field_county' => 'field_county',
    'field_lot_name' => 'field_lot_name',
    'field_number_of_spaces' => 'field_number_of_spaces',
    'field_owner' => 'field_owner',
    'field_street_location' => 'field_street_location',
    'field_transit_provider' => 'field_transit_provider',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lot_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_number_of_spaces' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_owner' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_street_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transit_provider' => array(
      'sortable' => 1,
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
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  /* Field: Content: County */
  $handler->display->display_options['fields']['field_county']['id'] = 'field_county';
  $handler->display->display_options['fields']['field_county']['table'] = 'field_data_field_county';
  $handler->display->display_options['fields']['field_county']['field'] = 'field_county';
  /* Field: Content: Lot Name */
  $handler->display->display_options['fields']['field_lot_name']['id'] = 'field_lot_name';
  $handler->display->display_options['fields']['field_lot_name']['table'] = 'field_data_field_lot_name';
  $handler->display->display_options['fields']['field_lot_name']['field'] = 'field_lot_name';
  /* Field: Content: Number of Spaces */
  $handler->display->display_options['fields']['field_number_of_spaces']['id'] = 'field_number_of_spaces';
  $handler->display->display_options['fields']['field_number_of_spaces']['table'] = 'field_data_field_number_of_spaces';
  $handler->display->display_options['fields']['field_number_of_spaces']['field'] = 'field_number_of_spaces';
  $handler->display->display_options['fields']['field_number_of_spaces']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Owner */
  $handler->display->display_options['fields']['field_owner']['id'] = 'field_owner';
  $handler->display->display_options['fields']['field_owner']['table'] = 'field_data_field_owner';
  $handler->display->display_options['fields']['field_owner']['field'] = 'field_owner';
  /* Field: Content: Street Location */
  $handler->display->display_options['fields']['field_street_location']['id'] = 'field_street_location';
  $handler->display->display_options['fields']['field_street_location']['table'] = 'field_data_field_street_location';
  $handler->display->display_options['fields']['field_street_location']['field'] = 'field_street_location';
  /* Field: Content: Transit Provider */
  $handler->display->display_options['fields']['field_transit_provider']['id'] = 'field_transit_provider';
  $handler->display->display_options['fields']['field_transit_provider']['table'] = 'field_data_field_transit_provider';
  $handler->display->display_options['fields']['field_transit_provider']['field'] = 'field_transit_provider';
  $handler->display->display_options['fields']['field_transit_provider']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_transit_provider']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_transit_provider']['group_column'] = 'value';
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
    'park_and_ride_lots' => 'park_and_ride_lots',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'park-and-ride-lots';
  $handler->display->display_options['menu']['title'] = 'Park and Ride Lots';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['park_and_ride_lots'] = $view;

  return $export;
}
