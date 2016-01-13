<?php
/**
 * @file
 * wsdot_news_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wsdot_news_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = 'Default WSDOT News home page';
  $page->path = 'news';
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
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news__panel_context_fc8c06b6-08d0-4514-b308-cd87eef3845e';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News Home',
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
  $display->layout = 'threecol_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
    'style' => 'default',
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'News Releases';
  $display->uuid = 'fc3e868d-a3f7-4467-86b4-af72a283176c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6ec340da-6737-4f81-99c3-e694b1bf1a4a';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Most Requested',
      'body' => '<div class="content bluebox">
<ul>
	<li><a href="http://www.wsdot.wa.gov/traffic/seattle/">Seattle Area Traffic</a></li>
	<li><a href="http://www.wsdot.wa.gov/traffic/passes/snoqualmie/">Snoqualmie Pass</a></li>
	<li><a href="http://www.wsdot.wa.gov/traffic/forecast/">Weather Forecast</a></li>
	<li><a href="http://www.wsdot.wa.gov/traffic/trafficalerts/">Traffic Conditions</a></li>
	<li><a href="http://www.wsdot.wa.gov/ferries/schedules/current/">Ferry Schedules</a></li>
	<li><a href="http://www.wsdot.wa.gov/employment/">Employment</a></li>
	<li><a href="http://dol.wa.gov/">Licensing</a></li>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6ec340da-6737-4f81-99c3-e694b1bf1a4a';
    $display->content['new-6ec340da-6737-4f81-99c3-e694b1bf1a4a'] = $pane;
    $display->panels['left'][0] = 'new-6ec340da-6737-4f81-99c3-e694b1bf1a4a';
    $pane = new stdClass();
    $pane->pid = 'new-54b31b7a-91ce-40bb-a152-15e1c71c9545';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Subscribe',
      'body' => '<div class="content">
<ul>
	<li><a class="rss" href="/news/rss.xml">RSS</a></li>
	<li><a href="/news/rss/">What is RSS?</a></li>
	<li><a href="http://service.govdelivery.com/service/multi_subscribe.html?code=WADOT" title="Sign up for e-mail updates">E-mail updates</a></li>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '54b31b7a-91ce-40bb-a152-15e1c71c9545';
    $display->content['new-54b31b7a-91ce-40bb-a152-15e1c71c9545'] = $pane;
    $display->panels['left'][1] = 'new-54b31b7a-91ce-40bb-a152-15e1c71c9545';
    $pane = new stdClass();
    $pane->pid = 'new-6c2d90fb-24cb-4f9b-951a-ab50e7071945';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contact Us',
      'body' => '<div class="content">
<ul>
<li><a href="http://www.wsdot.wa.gov/Communications/default.htm">Media Contacts</a></li>
<li><a href="http://www.wsdot.wa.gov/contact/feedback.htm">Ask Us a Question</a></li></ul></div>',
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
    $pane->uuid = '6c2d90fb-24cb-4f9b-951a-ab50e7071945';
    $display->content['new-6c2d90fb-24cb-4f9b-951a-ab50e7071945'] = $pane;
    $display->panels['left'][2] = 'new-6c2d90fb-24cb-4f9b-951a-ab50e7071945';
    $pane = new stdClass();
    $pane->pid = 'new-436a1880-5ecf-46c5-a55f-22273fe5298f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '436a1880-5ecf-46c5-a55f-22273fe5298f';
    $display->content['new-436a1880-5ecf-46c5-a55f-22273fe5298f'] = $pane;
    $display->panels['middle'][0] = 'new-436a1880-5ecf-46c5-a55f-22273fe5298f';
    $pane = new stdClass();
    $pane->pid = 'new-cc494f90-da88-4098-bf01-8d9c6b8ea29d';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'What\'s Going On?',
      'body' => '<div class="content bluebox">
<ul style="list-style:none;">
	<li style="padding-left:0px"><a class="twitter" href="http://twitter.com/wsdot" title="Main account">@wsdot</a></li>
	<li style="padding-left:0px"><a class="twitter" href="http://twitter.com/wsdot_traffic" title="Puget Sound traffic reports">@wsdot_traffic</a></li>
	<li style="padding-left:0px"><a class="twitter" href="https://twitter.com/goodtogowsdot" title="Good To Go! and tolling information">@GoodToGoWSDOT</a></li>
	<li style="padding-left:0px"><a class="twitter" href="http://twitter.com/wsdot_passes" title="Mountain pass reports">@wsdot_passes</a></li>
	<li style="padding-left:0px"><a class="twitter" href="http://twitter.com/wsdot_tacoma" title="Tacoma traffic">@wsdot_tacoma</a></li>
	<li style="padding-left:0px"><a class="twitter" href="http://twitter.com/wsdot_520" title="520 Project">@wsdot_520</a></li>
	<li style="padding-left:0px"><a class="twitter" href="mailto:b@berthadigssr99" title="Bertha">@berthadigssr99</a></li>
	<li style="padding-left:0px"><a class="twitter" href="http://twitter.com/wsdot_east" title="Tweets from east of the cascades">@wsdot_east</a></li>
	<li style="padding-left:0px"><a class="twitter" href="http://twitter.com/snoqualmiepass" title="Snoqualmie Pass">@SnoqualmiePass</a></li>
	<li style="padding-left:0px"><a class="twitter" href="http://twitter.com/wsferries" title="Washington Sate Ferries">@wsferries</a></li>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc494f90-da88-4098-bf01-8d9c6b8ea29d';
    $display->content['new-cc494f90-da88-4098-bf01-8d9c6b8ea29d'] = $pane;
    $display->panels['right'][0] = 'new-cc494f90-da88-4098-bf01-8d9c6b8ea29d';
    $pane = new stdClass();
    $pane->pid = 'new-bbdf2804-1100-404a-a281-42cf0485d6a2';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Blogs',
      'body' => '<div class="content">
<ul>
	<li><a href="http://wsdotblog.blogspot.com/">The WSDOT Blog</a></li>
	<li><a href="http://wsdotferries.blogspot.com/">Washington State Ferries Blog</a></li>
	<li><a href="http://facebook.com/wsdot">Facebook</a></li>
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bbdf2804-1100-404a-a281-42cf0485d6a2';
    $display->content['new-bbdf2804-1100-404a-a281-42cf0485d6a2'] = $pane;
    $display->panels['right'][1] = 'new-bbdf2804-1100-404a-a281-42cf0485d6a2';
    $pane = new stdClass();
    $pane->pid = 'new-52dbb385-2c97-49e7-85c9-47d87cc957e9';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Photos',
      'body' => '<div class="content">
<ul>
	<li>Insert Flickr widget</li>
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '52dbb385-2c97-49e7-85c9-47d87cc957e9';
    $display->content['new-52dbb385-2c97-49e7-85c9-47d87cc957e9'] = $pane;
    $display->panels['right'][2] = 'new-52dbb385-2c97-49e7-85c9-47d87cc957e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
