<?php
/**
 * @file
 * wsdot_services_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_services_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'services_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services Projects';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Project ID */
  $handler->display->display_options['fields']['field_project_id']['id'] = 'field_project_id';
  $handler->display->display_options['fields']['field_project_id']['table'] = 'field_data_field_project_id';
  $handler->display->display_options['fields']['field_project_id']['field'] = 'field_project_id';
  $handler->display->display_options['fields']['field_project_id']['label'] = 'id';
  $handler->display->display_options['fields']['field_project_id']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Cities */
  $handler->display->display_options['fields']['field_cities']['id'] = 'field_cities';
  $handler->display->display_options['fields']['field_cities']['table'] = 'field_data_field_cities';
  $handler->display->display_options['fields']['field_cities']['field'] = 'field_cities';
  $handler->display->display_options['fields']['field_cities']['label'] = 'cities';
  $handler->display->display_options['fields']['field_cities']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cities']['delta_offset'] = '0';
  /* Field: Field: Counties */
  $handler->display->display_options['fields']['field_counties']['id'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['table'] = 'field_data_field_counties';
  $handler->display->display_options['fields']['field_counties']['field'] = 'field_counties';
  $handler->display->display_options['fields']['field_counties']['label'] = 'counties';
  $handler->display->display_options['fields']['field_counties']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_counties']['delta_offset'] = '0';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_organization_term_ref']['id'] = 'field_organization_term_ref';
  $handler->display->display_options['fields']['field_organization_term_ref']['table'] = 'field_data_field_organization_term_ref';
  $handler->display->display_options['fields']['field_organization_term_ref']['field'] = 'field_organization_term_ref';
  $handler->display->display_options['fields']['field_organization_term_ref']['label'] = 'division';
  $handler->display->display_options['fields']['field_organization_term_ref']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Funding types */
  $handler->display->display_options['fields']['field_funding_types']['id'] = 'field_funding_types';
  $handler->display->display_options['fields']['field_funding_types']['table'] = 'field_data_field_funding_types';
  $handler->display->display_options['fields']['field_funding_types']['field'] = 'field_funding_types';
  $handler->display->display_options['fields']['field_funding_types']['label'] = 'funding';
  $handler->display->display_options['fields']['field_funding_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_funding_types']['delta_offset'] = '0';
  /* Field: Content: Highway */
  $handler->display->display_options['fields']['field_highways']['id'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['table'] = 'field_data_field_highways';
  $handler->display->display_options['fields']['field_highways']['field'] = 'field_highways';
  $handler->display->display_options['fields']['field_highways']['label'] = 'highways';
  $handler->display->display_options['fields']['field_highways']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_highways']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  /* Field: Content: Phase */
  $handler->display->display_options['fields']['field_project_phase']['id'] = 'field_project_phase';
  $handler->display->display_options['fields']['field_project_phase']['table'] = 'field_data_field_project_phase';
  $handler->display->display_options['fields']['field_project_phase']['field'] = 'field_project_phase';
  $handler->display->display_options['fields']['field_project_phase']['label'] = 'phase';
  $handler->display->display_options['fields']['field_project_phase']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Regions */
  $handler->display->display_options['fields']['field_regions']['id'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['table'] = 'field_data_field_regions';
  $handler->display->display_options['fields']['field_regions']['field'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['label'] = 'regions';
  $handler->display->display_options['fields']['field_regions']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_regions']['delta_offset'] = '0';
  /* Field: Content: Project status */
  $handler->display->display_options['fields']['field_project_status']['id'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['table'] = 'field_data_field_project_status';
  $handler->display->display_options['fields']['field_project_status']['field'] = 'field_project_status';
  $handler->display->display_options['fields']['field_project_status']['label'] = 'status';
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
    'project' => 'project',
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'projects';
  $export['services_projects'] = $view;

  return $export;
}
