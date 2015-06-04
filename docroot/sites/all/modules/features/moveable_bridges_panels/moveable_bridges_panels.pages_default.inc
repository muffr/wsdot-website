<?php
/**
 * @file
 * moveable_bridges_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function moveable_bridges_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'moveable_bridges';
  $page->task = 'page';
  $page->admin_title = 'Moveable Bridges';
  $page->admin_description = '';
  $page->path = 'bridge/reporting/moveable-bridges';
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
  $handler->name = 'page_moveable_bridges__panel_context_f38a58e3-930e-48e2-96d2-bdf711da4cc5';
  $handler->task = 'page';
  $handler->subtask = 'moveable_bridges';
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
  $display->title = 'Moveable Bridges';
  $display->uuid = '8495f295-9d10-4288-955f-705b66c47eda';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-db58be86-a22f-4ca8-b93d-5b1a164f9f81';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Moveable Bridges Text',
      'title' => '',
      'body' => '<p>The Washington State Department of Transportation operates 17 moveable bridges on state routes. Federal Law (<a href="http://ecfr.gpoaccess.gov/cgi/t/text/text-idx?c=ecfr&amp;tpl=/ecfrbrowse/Title33/33cfr117_main_02.tpl">Title 33, Part 177 Draw Bridge Operations</a>) gives marine traffic the right-of-way over vehicular traffic. WSDOT works with the US Coast Guard to create reasonable restrictions on marine openings (for vessels under 5,000 gross tons) during peak travel times to ease congestion for drivers when possible.The Washington State Department of Transportation operates 17 moveable bridges on state routes. Federal Law (<a href="http://ecfr.gpoaccess.gov/cgi/t/text/text-idx?c=ecfr&amp;tpl=/ecfrbrowse/Title33/33cfr117_main_02.tpl">Title 33, Part 177 Draw Bridge Operations</a>) gives marine traffic the right-of-way over vehicular traffic. WSDOT works with the US Coast Guard to create reasonable restrictions on marine openings (for vessels under 5,000 gross tons) during peak travel times to ease congestion for drivers when possible.</p>
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
    $pane->uuid = 'db58be86-a22f-4ca8-b93d-5b1a164f9f81';
    $display->content['new-db58be86-a22f-4ca8-b93d-5b1a164f9f81'] = $pane;
    $display->panels['center'][0] = 'new-db58be86-a22f-4ca8-b93d-5b1a164f9f81';
    $pane = new stdClass();
    $pane->pid = 'new-f10dd80b-5e24-4c06-bdf9-6770d8982871';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'moveable_bridges-panel_pane_1';
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
    $pane->uuid = 'f10dd80b-5e24-4c06-bdf9-6770d8982871';
    $display->content['new-f10dd80b-5e24-4c06-bdf9-6770d8982871'] = $pane;
    $display->panels['center'][1] = 'new-f10dd80b-5e24-4c06-bdf9-6770d8982871';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-db58be86-a22f-4ca8-b93d-5b1a164f9f81';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['moveable_bridges'] = $page;

  return $pages;

}
