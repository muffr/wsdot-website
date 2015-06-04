<?php
/**
 * @file
 * border_bridges_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function border_bridges_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'border_bridges';
  $page->task = 'page';
  $page->admin_title = 'Border Bridges';
  $page->admin_description = '';
  $page->path = 'bridge/reporting/border-bridges';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_border_bridges__panel_context_ff44aa4a-fad6-4e03-baca-6a1893e05262';
  $handler->task = 'page';
  $handler->subtask = 'border_bridges';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
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
  $display->title = 'Border Bridges';
  $display->uuid = '687eb9da-f6f8-4a87-a2eb-fee4e805663f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1aadb806-b781-4293-a2ca-1db420336e4c';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Border Bridges Text',
      'title' => '',
      'body' => '<p>Washington shares the responsibility for preserving, maintaining and operating nine bridges with Oregon and two bridges with Idaho. Both states make the future preservation of these bridges a top priority in their bridge programs.</p>
',
      'format' => 'wysiwyg',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1aadb806-b781-4293-a2ca-1db420336e4c';
    $display->content['new-1aadb806-b781-4293-a2ca-1db420336e4c'] = $pane;
    $display->panels['center'][0] = 'new-1aadb806-b781-4293-a2ca-1db420336e4c';
    $pane = new stdClass();
    $pane->pid = 'new-739ef2a2-635b-4489-90e1-21c611612795';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'border_bridges-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '739ef2a2-635b-4489-90e1-21c611612795';
    $display->content['new-739ef2a2-635b-4489-90e1-21c611612795'] = $pane;
    $display->panels['center'][1] = 'new-739ef2a2-635b-4489-90e1-21c611612795';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1aadb806-b781-4293-a2ca-1db420336e4c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['border_bridges'] = $page;

  return $pages;

}
