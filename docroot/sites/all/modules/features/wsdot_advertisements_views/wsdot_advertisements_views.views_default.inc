<?php
/**
 * @file
 * wsdot_advertisements_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_advertisements_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'advertisements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Advertisements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Advertisements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_submittal_due_date' => 'field_submittal_due_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_submittal_due_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Submittal Due Date */
  $handler->display->display_options['fields']['field_submittal_due_date']['id'] = 'field_submittal_due_date';
  $handler->display->display_options['fields']['field_submittal_due_date']['table'] = 'field_data_field_submittal_due_date';
  $handler->display->display_options['fields']['field_submittal_due_date']['field'] = 'field_submittal_due_date';
  $handler->display->display_options['fields']['field_submittal_due_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_submittal_due_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'advertisements' => 'advertisements',
  );
  /* Filter criterion: Content: Submittal Due Date (field_submittal_due_date) */
  $handler->display->display_options['filters']['field_submittal_due_date_value']['id'] = 'field_submittal_due_date_value';
  $handler->display->display_options['filters']['field_submittal_due_date_value']['table'] = 'field_data_field_submittal_due_date';
  $handler->display->display_options['filters']['field_submittal_due_date_value']['field'] = 'field_submittal_due_date_value';
  $handler->display->display_options['filters']['field_submittal_due_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_submittal_due_date_value']['default_date'] = '+1 day';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['advertisements'] = $view;

  $view = new view();
  $view->name = 'closed_advertisements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Closed Advertisements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Closed Advertisements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ad_status' => 'field_ad_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ad_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Ad Status */
  $handler->display->display_options['fields']['field_ad_status']['id'] = 'field_ad_status';
  $handler->display->display_options['fields']['field_ad_status']['table'] = 'field_data_field_ad_status';
  $handler->display->display_options['fields']['field_ad_status']['field'] = 'field_ad_status';
  $handler->display->display_options['fields']['field_ad_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_ad_status']['element_label_colon'] = FALSE;
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
    'advertisements' => 'advertisements',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Submittal Due Date (field_submittal_due_date) */
  $handler->display->display_options['filters']['field_submittal_due_date_value']['id'] = 'field_submittal_due_date_value';
  $handler->display->display_options['filters']['field_submittal_due_date_value']['table'] = 'field_data_field_submittal_due_date';
  $handler->display->display_options['filters']['field_submittal_due_date_value']['field'] = 'field_submittal_due_date_value';
  $handler->display->display_options['filters']['field_submittal_due_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_submittal_due_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_submittal_due_date_value']['default_date'] = '+1 day';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['closed_advertisements'] = $view;

  return $export;
}
