<?php
/**
 * @file
 * wsdot_news_article_content_type.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function wsdot_news_article_content_type_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news_article:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news_article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '60.01431311255948',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '39.98568688744053',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '983cdce7-3d86-40b1-a361-aeddab6711f0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8e9862f5-bdcd-4787-843d-fe8b791bc523';
    $pane->panel = 'center';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e9862f5-bdcd-4787-843d-fe8b791bc523';
    $display->content['new-8e9862f5-bdcd-4787-843d-fe8b791bc523'] = $pane;
    $display->panels['center'][0] = 'new-8e9862f5-bdcd-4787-843d-fe8b791bc523';
    $pane = new stdClass();
    $pane->pid = 'new-823f7494-fefe-4174-946e-81455d6e628f';
    $pane->panel = 'center';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '823f7494-fefe-4174-946e-81455d6e628f';
    $display->content['new-823f7494-fefe-4174-946e-81455d6e628f'] = $pane;
    $display->panels['center'][1] = 'new-823f7494-fefe-4174-946e-81455d6e628f';
    $pane = new stdClass();
    $pane->pid = 'new-7b753d28-8e1c-4b24-9fd9-bbeb1bd381b6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7b753d28-8e1c-4b24-9fd9-bbeb1bd381b6';
    $display->content['new-7b753d28-8e1c-4b24-9fd9-bbeb1bd381b6'] = $pane;
    $display->panels['center'][2] = 'new-7b753d28-8e1c-4b24-9fd9-bbeb1bd381b6';
    $pane = new stdClass();
    $pane->pid = 'new-66a41680-d195-4bc9-b32f-77682847f473';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'widgets-s_socialmedia_share-default';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social_media_share_widget',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '66a41680-d195-4bc9-b32f-77682847f473';
    $display->content['new-66a41680-d195-4bc9-b32f-77682847f473'] = $pane;
    $display->panels['center'][3] = 'new-66a41680-d195-4bc9-b32f-77682847f473';
    $pane = new stdClass();
    $pane->pid = 'new-d287313f-4ba0-47a8-9706-c3066691918b';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Traveler Information',
      'body' => '<div class="widgetdata brownbg">
<div style="float:left">
<ul class="twocol">
	<li><a href="http://www.wsdot.wa.gov/traffic/passes/" rel="nofollow">Mountain Passes</a></li>
	<li><a href="http://www.wsdot.wa.gov/traffic/trafficalerts/" rel="nofollow">Travel Alerts</a></li>
	<li><a href="http://www.wsdot.wa.gov/traffic/weather/" rel="nofollow">Weather</a></li>
	<li><a href="http://www.wsdot.wa.gov/construction/" rel="nofollow">Local Construction</a></li>
</ul>
</div>

<div class="cl">&nbsp;</div>
</div>
',
      'format' => 'wysiwyg',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd287313f-4ba0-47a8-9706-c3066691918b';
    $display->content['new-d287313f-4ba0-47a8-9706-c3066691918b'] = $pane;
    $display->panels['right'][0] = 'new-d287313f-4ba0-47a8-9706-c3066691918b';
    $pane = new stdClass();
    $pane->pid = 'new-02767c70-a634-4e7b-b409-f73043aeb12f';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Stay Connected',
      'body' => '<div class="widgetdata brownbg">
<ul class="threecol_icons" style="list-style:none">
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
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '02767c70-a634-4e7b-b409-f73043aeb12f';
    $display->content['new-02767c70-a634-4e7b-b409-f73043aeb12f'] = $pane;
    $display->panels['right'][1] = 'new-02767c70-a634-4e7b-b409-f73043aeb12f';
    $pane = new stdClass();
    $pane->pid = 'new-5c9b8011-1896-423a-8234-113e8bac9b83';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Get Our Mobile App',
      'body' => '<div class="widgetdata brownbg">
<ul class="onecol">
	<li>Our <a href="https://play.google.com/store/apps/details?id=gov.wa.wsdot.android.wsdot" rel="nofollow">Android</a> and <a href="https://itunes.apple.com/us/app/wsdot/id387209224?mt=8" rel="nofollow">iPhone</a> apps include statewide traffic cameras, travel alerts, mountain pass reports, ferry schedules and alerts, northbound Canadian border wait times and more.</li>
</ul>
<div class="cl">&nbsp;</div>
</div>',
      'format' => 'wysiwyg',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5c9b8011-1896-423a-8234-113e8bac9b83';
    $display->content['new-5c9b8011-1896-423a-8234-113e8bac9b83'] = $pane;
    $display->panels['right'][2] = 'new-5c9b8011-1896-423a-8234-113e8bac9b83';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news_article:default:default'] = $panelizer;

  return $export;
}
