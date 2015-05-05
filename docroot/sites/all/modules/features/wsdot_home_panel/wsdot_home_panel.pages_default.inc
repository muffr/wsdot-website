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
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-49a9ec49-2880-4b4b-834e-3a3c8c4f2fdf';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'flexslider_views_example';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Features',
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
    $pane->uuid = '49a9ec49-2880-4b4b-834e-3a3c8c4f2fdf';
    $display->content['new-49a9ec49-2880-4b4b-834e-3a3c8c4f2fdf'] = $pane;
    $display->panels['left'][0] = 'new-49a9ec49-2880-4b4b-834e-3a3c8c4f2fdf';
    $pane = new stdClass();
    $pane->pid = 'new-dc53af43-1385-4eeb-b22e-c8f8c9cf9fe2';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Priorities',
      'body' => '<div class="widgetdata">
<ul class="content">
	<li><a href="http://www.wsdot.wa.gov/Secretary/ResultsWSDOT.htm" rel="nofollow">Results WSDOT</a></li>
	<li><a href="http://www.wsdot.wa.gov/Projects/PracticalDesign/" rel="nofollow">Practical Design and Solutions</a></li>
	<li><a href="http://www.wsdot.wa.gov/publications/fulltext/secretary/ProposedReforms.pdf" rel="nofollow">Performance and Accountability through Reforms (pdf 200 kb)</a> and <a href="http://www.wsdot.wa.gov/publications/fulltext/secretary/ProposedReforms_2pg.pdf" rel="nofollow">an update on our progress (pdf 61 kb)</a></li>
	<li><a href="http://www.wsdot.wa.gov/publications/fulltext/secretary/StateOfTransportation.pdf" rel="nofollow">State of Transportation (pdf 1.22 mb)</a></li>
	<li><a href="http://www.wsdot.wa.gov/accountability/" rel="nofollow">Accountability</a></li>
</ul>
</div>',
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
    $pane->uuid = 'dc53af43-1385-4eeb-b22e-c8f8c9cf9fe2';
    $display->content['new-dc53af43-1385-4eeb-b22e-c8f8c9cf9fe2'] = $pane;
    $display->panels['left'][1] = 'new-dc53af43-1385-4eeb-b22e-c8f8c9cf9fe2';
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
    $pane->pid = 'new-2d3450f1-4f4d-4a7c-8462-d25c9894586e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'nodequeue_1-panel_pane_1';
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
    $pane->uuid = '2d3450f1-4f4d-4a7c-8462-d25c9894586e';
    $display->content['new-2d3450f1-4f4d-4a7c-8462-d25c9894586e'] = $pane;
    $display->panels['middle'][1] = 'new-2d3450f1-4f4d-4a7c-8462-d25c9894586e';
    $pane = new stdClass();
    $pane->pid = 'new-2e797f38-02c8-4f07-b13f-9b6540a93e65';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'project_titles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Projects',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2e797f38-02c8-4f07-b13f-9b6540a93e65';
    $display->content['new-2e797f38-02c8-4f07-b13f-9b6540a93e65'] = $pane;
    $display->panels['middle'][2] = 'new-2e797f38-02c8-4f07-b13f-9b6540a93e65';
    $pane = new stdClass();
    $pane->pid = 'new-84702018-b080-437d-9070-2d2781e684f5';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Traveler Information',
      'title' => 'Traveler Information',
      'body' => '<div class="widgetdata greybg">
<div style="float:left">
<ul class="twocol">
	<li><a href="http://www.wsdot.wa.gov/traffic/seattle/" rel="nofollow">Seattle Traffic</a></li>
	<li><a href="http://www.wsdot.com/traffic/cameras/" rel="nofollow">Cameras</a></li>
	<li><a href="http://www.wsdot.com/traffic/passes/" rel="nofollow">Mountain Passes</a></li>
	<li><a href="http://www.wsdot.com/traffic/trafficalerts/" rel="nofollow">Travel Alerts</a></li>
	<li><a href="http://www.wsdot.com/traffic/passes/snoqualmie" rel="nofollow">Snoqualmie Pass</a></li>
	<li><a href="http://www.wsdot.com/traffic/weather/" rel="nofollow">Weather</a></li>
	<li><a href="http://www.wsdot.wa.gov/construction/" rel="nofollow">Local Construction</a></li>
	<li><a href="http://www.wsdot.wa.gov/winter" rel="nofollow">Winter Driving</a></li>
</ul>
</div>

<div style="float:left">
<h4>Ways to Get Around</h4>

<ul class="twocol">
	<li><a href="http://www.amtrakcascades.com" rel="nofollow">Amtrak Cascades</a></li>
	<li><a href="http://www.wsdot.wa.gov/choices/" rel="nofollow">Commute Options</a></li>
</ul>
</div>

<div class="cl">&nbsp;</div>
</div>',
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
    $pane->uuid = '84702018-b080-437d-9070-2d2781e684f5';
    $display->content['new-84702018-b080-437d-9070-2d2781e684f5'] = $pane;
    $display->panels['right'][0] = 'new-84702018-b080-437d-9070-2d2781e684f5';
    $pane = new stdClass();
    $pane->pid = 'new-893cb5da-6e5c-46a9-a32c-6be8dc285f6b';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Ferries',
      'body' => '<div class="widgetdata brownbg">
<ul class="twocol">
	<li><a href="http://www.wsdot.wa.gov/ferries/">Ferries Home</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/wave2go/">Buy a Ticket</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/schedule/">Get the Schedule</a></li>
	<li><a href="https://business.wsdot.wa.gov/ferries/reservations/">Make Reservations</a></li>
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
    $display->panels['right'][1] = 'new-893cb5da-6e5c-46a9-a32c-6be8dc285f6b';
    $pane = new stdClass();
    $pane->pid = 'new-5d4d6882-31ae-4315-aeeb-b290836d1c49';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Stay Connected',
      'body' => '<div class="widgetdata">
<ul class="threecol_icons" style="list-style: none;">
	<li><a class="blogger" href="http://wsdotblog.blogspot.com/" rel="nofollow">Blogger</a></li>
	<li><a class="flickr" href="http://www.flickr.com/photos/wsdot/" rel="nofollow">Flickr</a></li>
	<li><a class="rss" href="http://www.wsdot.wa.gov/news/rss/" rel="nofollow">RSS</a></li>
	<li><a class="twitter" href="http://twitter.com/wsdot" rel="nofollow">Twitter</a></li>
	<li><a class="youtube" href="http://www.youtube.com/wsdot" rel="nofollow">YouTube</a></li>
	<li><a class="facebook" href="http://www.facebook.com/wsdot" rel="nofollow">Facebook</a></li>
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5d4d6882-31ae-4315-aeeb-b290836d1c49';
    $display->content['new-5d4d6882-31ae-4315-aeeb-b290836d1c49'] = $pane;
    $display->panels['right'][2] = 'new-5d4d6882-31ae-4315-aeeb-b290836d1c49';
    $pane = new stdClass();
    $pane->pid = 'new-a0bf86f7-c7f7-457f-8c66-c89dfb005cf1';
    $pane->panel = 'right';
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
	<li><a href="http://www.wsdot.wa.gov/goodtogo/" rel="nofollow">Learn More About Tolling</a></li>
	<li><a href="https://mygoodtogo.com/olcsc/AccountLogin.do" rel="nofollow">Pay Your Toll Bill</a></li>
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a0bf86f7-c7f7-457f-8c66-c89dfb005cf1';
    $display->content['new-a0bf86f7-c7f7-457f-8c66-c89dfb005cf1'] = $pane;
    $display->panels['right'][3] = 'new-a0bf86f7-c7f7-457f-8c66-c89dfb005cf1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
