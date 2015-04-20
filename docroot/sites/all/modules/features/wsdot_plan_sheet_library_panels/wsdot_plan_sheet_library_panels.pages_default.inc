<?php
/**
 * @file
 * wsdot_plan_sheet_library_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wsdot_plan_sheet_library_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'plan_sheet_library';
  $page->task = 'page';
  $page->admin_title = 'Plan Sheet Library';
  $page->admin_description = 'The Plan Sheet Library provides drawings of site-specific details and experimental designs that are precluded from adoption as Standard Plans. These drawings fully comply with present design criteria, and each has a narrative explaining the intended use and some of the possible impacts associated with its usage.';
  $page->path = 'plan-sheet-library';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Plan Sheet Library',
    'weight' => '0',
    'name' => 'main-menu',
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
  $handler->name = 'page_plan_sheet_library__panel_context_001f7600-b838-4b76-883d-3558a77c1b55';
  $handler->task = 'page';
  $handler->subtask = 'plan_sheet_library';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Plan Sheet Library';
  $display->uuid = 'b623b79f-440f-4a97-9cbb-0d18465bdc52';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4877cb67-6f1b-4bd8-b38c-6288924e3825';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Plan Sheet Library Text',
      'title' => '',
      'body' => '<p>The Plan Sheet Library provides drawings of site-specific details and experimental designs that are precluded from adoption as Standard Plans. These drawings fully comply with present design criteria, and each has a narrative explaining the intended use and some of the possible impacts associated with its usage.<br />
<br />
These drawings were developed and are supported by the Headquarters Design Office; however, they are provided "as is". The user assumes full responsibility for the plan\'s adequacy to address a specific construction situation and for any alterations to the drawing by the user.<br />
<br />
When a drawing from this Plan Sheet Library is used in a contract document, a Professional Engineer must review the plan and accept full responsibility for its contents in the manner prescribed by the Washington State Department of Licensing.<br />
<br />
<strong>Plan Sheet Library download instructions:</strong><br />
To view plan&nbsp;or to download the zip file, pick the title to access the web page.</p>
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
    $pane->uuid = '4877cb67-6f1b-4bd8-b38c-6288924e3825';
    $display->content['new-4877cb67-6f1b-4bd8-b38c-6288924e3825'] = $pane;
    $display->panels['middle'][0] = 'new-4877cb67-6f1b-4bd8-b38c-6288924e3825';
    $pane = new stdClass();
    $pane->pid = 'new-335d2d6b-d1e0-4145-8fa5-5d6fd04c1b73';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'plan_sheet_library-panel_pane_1';
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
    $pane->uuid = '335d2d6b-d1e0-4145-8fa5-5d6fd04c1b73';
    $display->content['new-335d2d6b-d1e0-4145-8fa5-5d6fd04c1b73'] = $pane;
    $display->panels['middle'][1] = 'new-335d2d6b-d1e0-4145-8fa5-5d6fd04c1b73';
    $pane = new stdClass();
    $pane->pid = 'new-fa58843b-5501-44aa-84f9-658bbfd3bd5e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Plan Sheet Library Contact Information',
      'title' => 'Contact Info',
      'body' => '<p><strong>Contact for this page:</strong><br />
<a href="mailto:liddelf@wsdot.wa.gov?subject=Plansheet%20Library" rel="nofollow">Fern Liddell</a><br />
<br />
<strong>Standard Plans&nbsp;questions:</strong><br />
<a href="mailto:StandardPlans@wsdot.wa.gov" rel="nofollow">StandardPlans@wsdot.wa.gov</a></p>
',
      'format' => 'wysiwyg',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fa58843b-5501-44aa-84f9-658bbfd3bd5e';
    $display->content['new-fa58843b-5501-44aa-84f9-658bbfd3bd5e'] = $pane;
    $display->panels['middle'][2] = 'new-fa58843b-5501-44aa-84f9-658bbfd3bd5e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['plan_sheet_library'] = $page;

  return $pages;

}
