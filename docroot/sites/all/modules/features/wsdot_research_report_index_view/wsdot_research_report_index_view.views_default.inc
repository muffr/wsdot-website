<?php
/**
 * @file
 * wsdot_research_report_index_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_research_report_index_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'research_reports_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research Reports Index';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manuals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_title' => 'field_title',
    'field_orginating_organizations' => 'field_orginating_organizations',
    'field_contact_info' => 'field_contact_info',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'abstracts' => 'abstracts',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research Reports Index';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_publication_number',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_title' => 'field_title',
    'field_orginating_organizations' => 'field_orginating_organizations',
    'field_contact_info' => 'field_contact_info',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Publication Number */
  $handler->display->display_options['fields']['field_publication_number']['id'] = 'field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['table'] = 'field_data_field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['field'] = 'field_publication_number';
  /* Field: Field: Publication Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Content: Originator */
  $handler->display->display_options['fields']['field_orginating_organizations']['id'] = 'field_orginating_organizations';
  $handler->display->display_options['fields']['field_orginating_organizations']['table'] = 'field_data_field_orginating_organizations';
  $handler->display->display_options['fields']['field_orginating_organizations']['field'] = 'field_orginating_organizations';
  $handler->display->display_options['fields']['field_orginating_organizations']['delta_offset'] = '0';
  /* Field: Field: External contact */
  $handler->display->display_options['fields']['field_contact_info']['id'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['table'] = 'field_data_field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['field'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['label'] = 'Authors';
  $handler->display->display_options['fields']['field_contact_info']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_contact_info']['delta_offset'] = '0';
  /* Field: Content: Last Modified Date */
  $handler->display->display_options['fields']['field_last_modified_date']['id'] = 'field_last_modified_date';
  $handler->display->display_options['fields']['field_last_modified_date']['table'] = 'field_data_field_last_modified_date';
  $handler->display->display_options['fields']['field_last_modified_date']['field'] = 'field_last_modified_date';
  $handler->display->display_options['fields']['field_last_modified_date']['label'] = 'Publish Date:';
  $handler->display->display_options['fields']['field_last_modified_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'abstracts' => 'abstracts',
  );
  /* Filter criterion: Content: Document Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_value']['id'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_value']['field'] = 'field_document_type_value';
  $handler->display->display_options['filters']['field_document_type_value']['value'] = array(
    'Research Reports' => 'Research Reports',
  );
  $handler->display->display_options['path'] = 'research/reports';
  $export['research_reports_index'] = $view;

  return $export;
}
