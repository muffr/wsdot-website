<?php
/**
 * @file
 * wsdot_wetland_monitoring_reports_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wsdot_wetland_monitoring_reports_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wetland_monitoring_reports_home_page';
  $page->task = 'page';
  $page->admin_title = 'Wetland Monitoring Reports Home Page';
  $page->admin_description = '';
  $page->path = 'wetland-monitoring-reports-home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_wetland_monitoring_reports_home_page__panel_context_d898d591-cbe1-44ab-9211-6c5052fb2d92';
  $handler->task = 'page';
  $handler->subtask = 'wetland_monitoring_reports_home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Wetland Monitoring Reports Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd8d0ab39-84ed-4642-b7bc-fcd4966aee22';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5bf63380-8276-487f-aa8f-a28e98b7d7cf';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'wetlands_reports_nothwest_region-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5bf63380-8276-487f-aa8f-a28e98b7d7cf';
    $display->content['new-5bf63380-8276-487f-aa8f-a28e98b7d7cf'] = $pane;
    $display->panels['center'][0] = 'new-5bf63380-8276-487f-aa8f-a28e98b7d7cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5bf63380-8276-487f-aa8f-a28e98b7d7cf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wetland_monitoring_reports_home_page'] = $page;

  return $pages;

}
