<?php
/**
 * @file
 * roadwork_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function roadwork_view_views_default_views() {
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
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* Contextual filter: Content: Regions (field_regions) */
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
  /* Filter criterion: Content: Counties (field_counties) */
  $handler->display->display_options['filters']['field_counties_tid']['id'] = 'field_counties_tid';
  $handler->display->display_options['filters']['field_counties_tid']['table'] = 'field_data_field_counties';
  $handler->display->display_options['filters']['field_counties_tid']['field'] = 'field_counties_tid';
  $handler->display->display_options['filters']['field_counties_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_counties_tid']['expose']['operator_id'] = 'field_counties_tid_op';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['label'] = 'Counties (field_counties)';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['operator'] = 'field_counties_tid_op';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['identifier'] = 'field_counties_tid';
  $handler->display->display_options['filters']['field_counties_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_counties_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_counties_tid']['vocabulary'] = 'counties';
  /* Filter criterion: Content: Highways (field_highways) */
  $handler->display->display_options['filters']['field_highways_tid']['id'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['table'] = 'field_data_field_highways';
  $handler->display->display_options['filters']['field_highways_tid']['field'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_highways_tid']['expose']['operator_id'] = 'field_highways_tid_op';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['label'] = 'Highways (field_highways)';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['operator'] = 'field_highways_tid_op';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['identifier'] = 'field_highways_tid';
  $handler->display->display_options['filters']['field_highways_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_highways_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_highways_tid']['vocabulary'] = 'highways';
  /* Filter criterion: Content: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator_id'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['label'] = 'Regions (field_regions)';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['identifier'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';

  /* Display: Page by Region */
  $handler = $view->new_display('page', 'Page by Region', 'page');
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
  /* Contextual filter: Content: Regions (field_regions) */
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
  /* Contextual filter: Content: Counties (field_counties) */
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
  /* Contextual filter: Content: Regions (field_regions) */
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
