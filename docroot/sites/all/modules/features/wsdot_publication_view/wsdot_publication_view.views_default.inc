<?php
/**
 * @file
 * wsdot_publication_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_publication_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Research Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_publication_number' => 'field_publication_number',
    'field_authors' => 'field_authors',
    'field_date' => 'field_date',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_authors' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Publication Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Publication Number */
  $handler->display->display_options['fields']['field_publication_number']['id'] = 'field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['table'] = 'field_data_field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['field'] = 'field_publication_number';
  /* Sort criterion: Content: Publication Number (field_publication_number) */
  $handler->display->display_options['sorts']['field_publication_number_value']['id'] = 'field_publication_number_value';
  $handler->display->display_options['sorts']['field_publication_number_value']['table'] = 'field_data_field_publication_number';
  $handler->display->display_options['sorts']['field_publication_number_value']['field'] = 'field_publication_number_value';
  $handler->display->display_options['sorts']['field_publication_number_value']['order'] = 'DESC';
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
    'publication' => 'publication',
  );

  /* Display: Research Reports */
  $handler = $view->new_display('page', 'Research Reports', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research Reports Index';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'view-research-reports-index';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_authors' => 'field_authors',
    'field_originator' => 'field_originator',
    'field_publication_date' => 'field_publication_date',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Publication Number */
  $handler->display->display_options['fields']['field_publication_number']['id'] = 'field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['table'] = 'field_data_field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['field'] = 'field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['label'] = '';
  $handler->display->display_options['fields']['field_publication_number']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_publication_number']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publication URL */
  $handler->display->display_options['fields']['field_publication_url']['id'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['table'] = 'field_data_field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['field'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['label'] = '';
  $handler->display->display_options['fields']['field_publication_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_url']['click_sort_column'] = 'url';
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['element_label_type'] = 'strong';
  /* Field: Content: Originator */
  $handler->display->display_options['fields']['field_originator']['id'] = 'field_originator';
  $handler->display->display_options['fields']['field_originator']['table'] = 'field_data_field_originator';
  $handler->display->display_options['fields']['field_originator']['field'] = 'field_originator';
  $handler->display->display_options['fields']['field_originator']['element_label_type'] = 'strong';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publication Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_value']['id'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_value']['field'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['value'] = array(
    'research' => 'research',
  );
  $handler->display->display_options['path'] = 'research/reports/default.htm';

  /* Display: Engineering Manuals */
  $handler = $view->new_display('page', 'Engineering Manuals', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications Services Index';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'view-research-reports-index';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_managers' => 'field_managers',
    'field_originator' => 'field_originator',
    'field_publication_date' => 'field_publication_date',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>WSDOT manuals and publications are updated continuously and revisions are issued periodically. It is the responsibility of users to make sure they have the current versions, regardless of the manual format or means of transmission. Publications on this page are the most recent versions and can be downloaded and printed without charge. </p>
<p><b>WSDOT employees</b> need to place orders through WSDOT Printing Services using the internal order form.</p>
<p><strong>Contractors, consultants, local agencies, and the general public</strong> can obtain printed copies of WSDOT’s most requested manuals and publications from the Washington State Department of Printing’s <a href="https://prtonline.myprintdesk.net/DSF/Companies/myFULFILLMENT/storefront.aspx?SITEGUID=1ec29a2b-ab92-4913-9730-8c9421964cdd">myPrint</a>. Learn more about <a href="http://www.wsdot.wa.gov/Publications/Manuals/OrderInformation.htm">ordering printed manuals</a>.</p>
<p>If you have questions or suggestions,&nbsp;please email us at <a href="mailto:engrpubs@wsdot.wa.gov">engrpubs@wsdot.wa.gov</a>.</p>
<p>&nbsp;</p>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Publication Number */
  $handler->display->display_options['fields']['field_publication_number']['id'] = 'field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['table'] = 'field_data_field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['field'] = 'field_publication_number';
  $handler->display->display_options['fields']['field_publication_number']['label'] = '';
  $handler->display->display_options['fields']['field_publication_number']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_publication_number']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publication URL */
  $handler->display->display_options['fields']['field_publication_url']['id'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['table'] = 'field_data_field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['field'] = 'field_publication_url';
  $handler->display->display_options['fields']['field_publication_url']['label'] = '';
  $handler->display->display_options['fields']['field_publication_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_url']['click_sort_column'] = 'url';
  /* Field: Content: Manual Manager */
  $handler->display->display_options['fields']['field_managers']['id'] = 'field_managers';
  $handler->display->display_options['fields']['field_managers']['table'] = 'field_data_field_managers';
  $handler->display->display_options['fields']['field_managers']['field'] = 'field_managers';
  $handler->display->display_options['fields']['field_managers']['label'] = 'Manual Managers';
  $handler->display->display_options['fields']['field_managers']['element_label_type'] = 'strong';
  /* Field: Content: Originator */
  $handler->display->display_options['fields']['field_originator']['id'] = 'field_originator';
  $handler->display->display_options['fields']['field_originator']['table'] = 'field_data_field_originator';
  $handler->display->display_options['fields']['field_originator']['field'] = 'field_originator';
  $handler->display->display_options['fields']['field_originator']['element_label_type'] = 'strong';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publication Type (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_value']['id'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_value']['field'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['value'] = array(
    'engineering' => 'engineering',
  );
  $handler->display->display_options['path'] = 'publications/manuals/index.htm';
  $export['publication'] = $view;

  return $export;
}
