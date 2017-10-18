<?php
/**
 * @file
 * wsdot_wsf_home_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wsdot_wsf_home_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wsf_home';
  $page->task = 'page';
  $page->admin_title = 'WSF Home';
  $page->admin_description = 'Default WSDOT Home page.';
  $page->path = 'ferries';
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
  $handler->name = 'page_wsf_home__panel_context_32b05a07-ae5a-4d16-a27a-1050908cd8dd';
  $handler->task = 'page';
  $handler->subtask = 'wsf_home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'WSF Home',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Washington State Ferries';
  $display->uuid = 'd774c019-b369-4dc7-acb9-4da83675019a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_wsf_home__panel_context_32b05a07-ae5a-4d16-a27a-1050908cd8dd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-84702018-b080-437d-9070-2d2781e684f5';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Fares & Ticketing',
    'body' => '<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/ferries/reservations">Vehicle Reservations</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/wave2go/">Buy a Ticket (Wave2Go)</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/fares/">Current Fares</a></li>
	<li><a href="http://www.orcacard.com">ORCA</a></li>
</ul>
</div>
',
    'format' => 'wysiwyg',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '84702018-b080-437d-9070-2d2781e684f5';
  $display->content['new-84702018-b080-437d-9070-2d2781e684f5'] = $pane;
  $display->panels['left'][0] = 'new-84702018-b080-437d-9070-2d2781e684f5';
  $pane = new stdClass();
  $pane->pid = 'new-893cb5da-6e5c-46a9-a32c-6be8dc285f6b';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Schedules',
    'body' => '<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.com/ferries/schedule/Default.aspx">Current Schedule</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/pdf/2017Fall.pdf">Fall Schedule 2017 (PDF)</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/pdf/wsfroutemap.pdf">Route Maps: Where we sail (PDF)</a></li>
</ul>
</div>
',
    'format' => 'wysiwyg',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '893cb5da-6e5c-46a9-a32c-6be8dc285f6b';
  $display->content['new-893cb5da-6e5c-46a9-a32c-6be8dc285f6b'] = $pane;
  $display->panels['left'][1] = 'new-893cb5da-6e5c-46a9-a32c-6be8dc285f6b';
  $pane = new stdClass();
  $pane->pid = 'new-a0bf86f7-c7f7-457f-8c66-c89dfb005cf1';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Getting there',
    'body' => '<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/ferries/vesselwatch/Terminals.aspx">Getting to Your Terminal</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/infodesk/faq/victoria/">Travel to Canada</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/commuterupdates/">Commuter Center</a></li>
</ul>
</div>
',
    'format' => 'wysiwyg',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a0bf86f7-c7f7-457f-8c66-c89dfb005cf1';
  $display->content['new-a0bf86f7-c7f7-457f-8c66-c89dfb005cf1'] = $pane;
  $display->panels['left'][2] = 'new-a0bf86f7-c7f7-457f-8c66-c89dfb005cf1';
  $pane = new stdClass();
  $pane->pid = 'new-5d4d6882-31ae-4315-aeeb-b290836d1c49';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Customer Programs',
    'body' => '<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/ferries/commuterupdates/ada/">ADA &amp; Medical Travel</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/rideshare/">Vanpool/Carpool Permits</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/infodesk/faq/school/">School Groups</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/bicycles">Bicycles</a></li>
</ul>
</div>
',
    'format' => 'wysiwyg',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5d4d6882-31ae-4315-aeeb-b290836d1c49';
  $display->content['new-5d4d6882-31ae-4315-aeeb-b290836d1c49'] = $pane;
  $display->panels['left'][3] = 'new-5d4d6882-31ae-4315-aeeb-b290836d1c49';
  $pane = new stdClass();
  $pane->pid = 'new-371b1136-41c7-4c9a-8987-b422a54607fe';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Ferry Alert Bulletins',
    'title_heading' => 'h2',
    'body' => '<div class="widgetdata brownbg">
<ul class="content">
	<li><strong>Thu, Jan&nbsp;1, 1970&nbsp;7:00&nbsp;a.m.</strong><br>
	Lorem ipsum dolor sit amet, consectetur adipiscing elit.</li>
</ul>
</div>

<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/ferries/schedule/bulletin.aspx">View more ferry alerts</a></li>
	<li><a href="https://secure1.wsdot.wa.gov/ferries/account/index.cfm?type=Alerts">Receive ferry email alerts</a></li>
</ul>
</div>
',
    'format' => 'wysiwyg',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '371b1136-41c7-4c9a-8987-b422a54607fe';
  $display->content['new-371b1136-41c7-4c9a-8987-b422a54607fe'] = $pane;
  $display->panels['middle'][0] = 'new-371b1136-41c7-4c9a-8987-b422a54607fe';
  $pane = new stdClass();
  $pane->pid = 'new-94916838-4925-4358-8191-f56716b7da81';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Current Status',
    'body' => '<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/ferries/vesselwatch/">VesselWatch</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/vesselwatch/Terminals.aspx">Terminals</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/vesselwatch/CameraDetail.aspx">Cameras</a></li>
</ul>
</div>
',
    'format' => 'wysiwyg',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94916838-4925-4358-8191-f56716b7da81';
  $display->content['new-94916838-4925-4358-8191-f56716b7da81'] = $pane;
  $display->panels['middle'][1] = 'new-94916838-4925-4358-8191-f56716b7da81';
  $pane = new stdClass();
  $pane->pid = 'new-82fd24bc-0767-45ed-af66-0639945246cd';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Stay Connected',
    'title_heading' => 'h2',
    'body' => '<div class="widgetdata">
<ul class="threecol_icons" style="list-style:none">
	<li><a class="twitter" href="https://twitter.com/wsferries">Twitter</a></li>
	<li><a class="flickr" href="https://www.flickr.com/photos/wsdot/collections/72157604556431407/">Flickr</a></li>
	<li><a class="facebook" href="https://www.facebook.com/wsdot">Facebook</a></li>
</ul>

<div class="cl">&nbsp;</div>
</div>
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
  $pane->uuid = '82fd24bc-0767-45ed-af66-0639945246cd';
  $display->content['new-82fd24bc-0767-45ed-af66-0639945246cd'] = $pane;
  $display->panels['right'][0] = 'new-82fd24bc-0767-45ed-af66-0639945246cd';
  $pane = new stdClass();
  $pane->pid = 'new-dc53af43-1385-4eeb-b22e-c8f8c9cf9fe2';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'About Us',
    'body' => '<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/Ferries/infodesk/contact.htm">Contact Us</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/CommuterUpdates/pub_meetings">Ferry Advisory Committees</a></li>
	<li><a href="https://www.wsdot.wa.gov/ferries/outreach/triangle">Fauntleroy/Vashon/Southworth Task Force</a></li>
	<li><a href="http://www.wsdot.wa.gov/Ferries/yourwsf/ourfleet/">Our Fleet</a></li>
	<li><a href="http://www.wsdot.wa.gov/projects/index.htm?s=county,funding,division-ferries,route#listing">Projects</a></li>
</ul>
</div>
',
    'format' => 'wysiwyg',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dc53af43-1385-4eeb-b22e-c8f8c9cf9fe2';
  $display->content['new-dc53af43-1385-4eeb-b22e-c8f8c9cf9fe2'] = $pane;
  $display->panels['right'][1] = 'new-dc53af43-1385-4eeb-b22e-c8f8c9cf9fe2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wsf_home'] = $page;

  return $pages;

}
