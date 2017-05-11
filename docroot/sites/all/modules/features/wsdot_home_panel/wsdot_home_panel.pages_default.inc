<?php
/**
 * @file
 * wsdot_home_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wsdot_home_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'Default WSDOT Home page.';
  $page->path = 'home';
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
  $handler->name = 'page_home__panel_context_764c614e-6426-4c19-9f6d-14f57e5d1972';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = '';
  $display->uuid = 'd774c019-b369-4dc7-acb9-4da83675019a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home__panel_context_764c614e-6426-4c19-9f6d-14f57e5d1972';
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
    'admin_title' => 'Traveler Information',
    'title' => 'Traveler information',
    'body' => '<div class="widgetdata greybg">
<div style="float:left">
<ul class="twocol">
	<li><a href="http://www.wsdot.com/traffic/seattle/">Seattle traffic</a></li>
	<li><a href="http://www.wsdot.com/traffic/cameras/">Cameras</a></li>
	<li><a href="http://www.wsdot.com/traffic/passes/">Mountain passes</a></li>
	<li><a href="http://www.wsdot.com/traffic/trafficalerts/">Travel alerts</a></li>
	<li><a href="http://www.wsdot.com/traffic/passes/snoqualmie">Snoqualmie Pass</a></li>
	<li><a href="http://www.wsdot.com/traffic/weather/">Weather</a></li>
	<li><a href="http://www.wsdot.wa.gov/construction/">Local construction</a></li>
	<li><a href="http://www.wsdot.com/winter">Winter driving</a></li>
</ul>
</div>

<div style="float:left">
<h4>Ways to Get Around</h4>

<ul class="twocol">
	<li><a href="http://www.amtrakcascades.com">Amtrak Cascades</a></li>
	<li><a href="http://www.wsdot.wa.gov/choices/">Commute options</a></li>
</ul>
</div>

<div class="cl">&nbsp;</div>
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
    'title' => 'Ferries',
    'body' => '<div class="widgetdata brownbg">
<ul class="twocol">
	<li><a href="http://www.wsdot.wa.gov/ferries/">Ferries home</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/wave2go/">Buy a ticket</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/schedule/">Get the schedule</a></li>
	<li><a href="https://business.wsdot.wa.gov/ferries/reservations/">Make reservations</a></li>
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
    'title' => 'Good To Go! Tolling',
    'body' => '<div class="widgetdata">
<div class="goodtogobg">&nbsp;</div>

<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/goodtogo">Learn more about tolling</a></li>
	<li><a href="https://mygoodtogo.com/olcsc/">Pay a toll bill</a></li>
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
    'title' => 'Stay connected',
    'body' => '<div class="widgetdata">
<ul class="threecol_icons" style="list-style:none">
	<li><a class="blogger" href="http://wsdotblog.blogspot.com/">Blogger</a></li>
	<li><a class="flickr" href="http://www.flickr.com/photos/wsdot/">Flickr</a></li>
	<li><a class="rss" href="http://www.wsdot.wa.gov/news/rss.xml">RSS</a></li>
	<li><a class="twitter" href="http://twitter.com/wsdot">Twitter</a></li>
	<li><a class="youtube" href="http://www.youtube.com/wsdot">YouTube</a></li>
	<li><a class="facebook" href="http://www.facebook.com/wsdot">Facebook</a></li>
    <li><a class="instagram" href="https://www.instagram.com/wsdot/">Instagram</a></li>
    <li><a class="linkedin" href="https://www.linkedin.com/company/washington-state-department-of-transportation">LinkedIn</a></li>
</ul>

<div class="cl">&nbsp;</div>
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
  $pane->pid = 'new-a579af57-dac5-4725-bf3a-33b7b388b312';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-11';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'High Impact Alerts',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a579af57-dac5-4725-bf3a-33b7b388b312';
  $display->content['new-a579af57-dac5-4725-bf3a-33b7b388b312'] = $pane;
  $display->panels['middle'][0] = 'new-a579af57-dac5-4725-bf3a-33b7b388b312';
  $pane = new stdClass();
  $pane->pid = 'new-371b1136-41c7-4c9a-8987-b422a54607fe';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Highlight',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="widgetdata">
<h3>website visitor survey</h3>

<div>
<ul class="content">
	<li>Please help us design a better website by taking 3-5 minutes to complete our <a href="https://www.surveymonkey.com/r/WSDOTusws">website visitor survey</a>.</li>
</ul>
</div>
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
    'css_id' => 'highlight',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '371b1136-41c7-4c9a-8987-b422a54607fe';
  $display->content['new-371b1136-41c7-4c9a-8987-b422a54607fe'] = $pane;
  $display->panels['middle'][1] = 'new-371b1136-41c7-4c9a-8987-b422a54607fe';
  $pane = new stdClass();
  $pane->pid = 'new-2d3450f1-4f4d-4a7c-8462-d25c9894586e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'nodequeue_1-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '15',
      'granularity' => 'none',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2d3450f1-4f4d-4a7c-8462-d25c9894586e';
  $display->content['new-2d3450f1-4f4d-4a7c-8462-d25c9894586e'] = $pane;
  $display->panels['middle'][2] = 'new-2d3450f1-4f4d-4a7c-8462-d25c9894586e';
  $pane = new stdClass();
  $pane->pid = 'new-9a284c11-52c3-4f0c-bf13-2bf263113892';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'nodequeue_6-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9a284c11-52c3-4f0c-bf13-2bf263113892';
  $display->content['new-9a284c11-52c3-4f0c-bf13-2bf263113892'] = $pane;
  $display->panels['middle'][3] = 'new-9a284c11-52c3-4f0c-bf13-2bf263113892';
  $pane = new stdClass();
  $pane->pid = 'new-94916838-4925-4358-8191-f56716b7da81';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Projects (Static)',
    'title' => 'Projects',
    'body' => '<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/projects/">Find a Project</a></li>
	<li><a href="http://www.wsdot.wa.gov/Projects/I90/SnoqualmiePassEast/">I-90 Snoqualmie Pass East </a></li>
	<li><a href="http://www.wsdot.wa.gov/projects/viaduct">SR 99 - Alaskan Way Viaduct Replacement</a></li>
	<li><a href="http://www.wsdot.wa.gov/Projects/SR520Bridge/">SR 520 - Bridge Replacement and HOV Program</a></li>
	<li><a href="http://www.wsdot.wa.gov/projects/sr104/hoodcanalbridgespecialrepair/">SR 104 - Hood Canal Bridge</a></li>
	<li><a href="http://www.wsdot.wa.gov/Projects/FishPassage/default.htm">Fish Passage</a></li>
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '94916838-4925-4358-8191-f56716b7da81';
  $display->content['new-94916838-4925-4358-8191-f56716b7da81'] = $pane;
  $display->panels['middle'][4] = 'new-94916838-4925-4358-8191-f56716b7da81';
  $pane = new stdClass();
  $pane->pid = 'new-27a2d63f-2166-46b7-bc39-d6af2c85e778';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'nodequeue_11-panel_pane_1';
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
  $pane->uuid = '27a2d63f-2166-46b7-bc39-d6af2c85e778';
  $display->content['new-27a2d63f-2166-46b7-bc39-d6af2c85e778'] = $pane;
  $display->panels['right'][0] = 'new-27a2d63f-2166-46b7-bc39-d6af2c85e778';
  $pane = new stdClass();
  $pane->pid = 'new-dc53af43-1385-4eeb-b22e-c8f8c9cf9fe2';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Priorities',
    'body' => '<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/Secretary/ResultsWSDOT.htm">Results WSDOT</a></li>
	<li><a href="http://www.wsdot.wa.gov/Projects/PracticalDesign/">Practical design and solutions</a></li>
	<li><a href="http://www.wsdot.wa.gov/publications/fulltext/secretary/StateOfTransportation.pdf?v=4">State of Transportation (pdf 4.3 mb)</a></li>
	<li><a href="http://www.wsdot.wa.gov/accountability/">Accountability</a></li>
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
