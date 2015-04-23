<?php
/**
 * @file
 * wsdot_event_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wsdot_event_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
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
  $handler->name = 'page_events__panel_context_d1366fb0-8cd2-457b-90df-1981c902c563';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
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
  $display->uuid = '08ea5a89-af31-4d01-acc6-2db8c51fab23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d7e2acd-d68e-47b3-b2a6-40b0101fa62e';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_view-panel_pane_1';
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
    $pane->uuid = '8d7e2acd-d68e-47b3-b2a6-40b0101fa62e';
    $display->content['new-8d7e2acd-d68e-47b3-b2a6-40b0101fa62e'] = $pane;
    $display->panels['center'][0] = 'new-8d7e2acd-d68e-47b3-b2a6-40b0101fa62e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8d7e2acd-d68e-47b3-b2a6-40b0101fa62e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
