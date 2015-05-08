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
  $page->admin_title = 'Wetland Monitoring Reports Home';
  $page->admin_description = '';
  $page->path = 'environment/wetlands/monitoring/reports';
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
  $display->title = 'Wetland Monitoring Reports';
  $display->uuid = 'd8d0ab39-84ed-4642-b7bc-fcd4966aee22';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec5e11c3-7225-4d15-adfb-a754b5a986b9';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Main Content',
      'title' => '',
      'body' => '<p>Monitoring reports for 2013 and 2014 are organized by WSDOT region and county. The WSDOT Regions Map (pdf 932 kb) shows WSDOT regions and counties.</p>

<p><strong>Five types of reports</strong> are included on this web page:</p>

<ul>
	<li><strong>Wetland Monitoring Reports</strong> are full length reports discussing the development of individual wetland mitigation sites for federal, state and local permit compliance. Wetland monitoring reports are written for the years specified by these permits using quantitative data.</li>
	<li><strong>Stream Monitoring Reports</strong> are similar to wetland reports, but discuss stream mitigation sites.</li>
	<li><strong>Mitigation Bank Monitoring Reports</strong> are full length reports discussing the development of mitigation banks for compliance with the Mitigation Bank Instrument (MBI). Bank monitoring reports are written for the years specified in the MBI using quantitative data.</li>
	<li><strong>Letter Reports</strong> are short reports when a full length report is not required.</li>
	<li><strong>Hydraulic Project Approval (HPA) Monitoring Reports</strong> are letter-format reports for compliance with HPA permits from the Washington State Department of Fish and Wildlife.</li>
</ul>

<p>&nbsp;</p>
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
    $pane->uuid = 'ec5e11c3-7225-4d15-adfb-a754b5a986b9';
    $display->content['new-ec5e11c3-7225-4d15-adfb-a754b5a986b9'] = $pane;
    $display->panels['center'][0] = 'new-ec5e11c3-7225-4d15-adfb-a754b5a986b9';
    $pane = new stdClass();
    $pane->pid = 'new-1ebd6ebd-509a-4409-b38c-d8e420e8f0f0';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'wetland_reports';
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
      'url' => 'environment/wetlands/monitoring/reports',
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
    $pane->uuid = '1ebd6ebd-509a-4409-b38c-d8e420e8f0f0';
    $display->content['new-1ebd6ebd-509a-4409-b38c-d8e420e8f0f0'] = $pane;
    $display->panels['center'][1] = 'new-1ebd6ebd-509a-4409-b38c-d8e420e8f0f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wetland_monitoring_reports_home_page'] = $page;

  return $pages;

}
