<?php
/**
 * @file
 * structurally_deficient_bridges_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function structurally_deficient_bridges_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'structurally_deficient_bridges';
  $page->task = 'page';
  $page->admin_title = 'Structurally Deficient Bridges';
  $page->admin_description = '';
  $page->path = 'bridge/reporting/structurally-deficient-bridges';
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
  $handler->name = 'page_structurally_deficient_bridges__panel_context_c5d963b2-b867-4864-ae18-44972c63330f';
  $handler->task = 'page';
  $handler->subtask = 'structurally_deficient_bridges';
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
  $display->title = 'Structurally Deficient Bridges';
  $display->uuid = '71c68fa4-1ba6-4a42-92c8-974d9e7c7017';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5be77378-dd98-46d1-8d75-0daa311a7e96';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Structurally Deficient Bridges Text',
      'title' => '',
      'body' => '<p>Structurally deficient means that a bridge requires repair or replacement of a certain component, such as cracked or spalled concrete or the entire bridge itself.<br />
<br />
Being structurally deficient does not imply that the bridge is in danger of collapse or unsafe to the travelling public.<br />
<br />
The following is a list of state owned bridges classified as structurally deficient as of January 2015.</p>
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
    $pane->uuid = '5be77378-dd98-46d1-8d75-0daa311a7e96';
    $display->content['new-5be77378-dd98-46d1-8d75-0daa311a7e96'] = $pane;
    $display->panels['center'][0] = 'new-5be77378-dd98-46d1-8d75-0daa311a7e96';
    $pane = new stdClass();
    $pane->pid = 'new-5cefc2bf-f1d9-4037-b43a-546e3065fc2f';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'structurally_deficient_bridges';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5cefc2bf-f1d9-4037-b43a-546e3065fc2f';
    $display->content['new-5cefc2bf-f1d9-4037-b43a-546e3065fc2f'] = $pane;
    $display->panels['center'][1] = 'new-5cefc2bf-f1d9-4037-b43a-546e3065fc2f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5be77378-dd98-46d1-8d75-0daa311a7e96';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['structurally_deficient_bridges'] = $page;

  return $pages;

}
