<?php
/**
 * @file
 * wsdot_taxonomy_term_panels.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function wsdot_taxonomy_term_panels_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:regions:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'regions';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
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
          0 => 1,
          1 => 'main',
          2 => 3,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '50',
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
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'column',
        'width' => '185',
        'width_type' => 'px',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Navigation',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => '50',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 4,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%taxonomy_term:name Region';
  $display->uuid = 'b5ac4e2e-763f-4a06-a6d4-99e3dd2a57dd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a083d42b-3051-4b4c-b9aa-453e6eb30b64';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a083d42b-3051-4b4c-b9aa-453e6eb30b64';
    $display->content['new-a083d42b-3051-4b4c-b9aa-453e6eb30b64'] = $pane;
    $display->panels['center'][0] = 'new-a083d42b-3051-4b4c-b9aa-453e6eb30b64';
    $pane = new stdClass();
    $pane->pid = 'new-416a930b-75d5-478f-9ff6-201b65266b60';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Traffic and Roads',
      'body' => '<ul>
	<li><a href="#">Links to local construction and traffic advisories</a></li>
</ul>
',
      'format' => 'wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '416a930b-75d5-478f-9ff6-201b65266b60';
    $display->content['new-416a930b-75d5-478f-9ff6-201b65266b60'] = $pane;
    $display->panels['center'][1] = 'new-416a930b-75d5-478f-9ff6-201b65266b60';
    $pane = new stdClass();
    $pane->pid = 'new-9f58b387-e022-4e2f-ad97-4cd2b2e6bdc8';
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
	<li><a href="#">Link one</a></li>
	<li><a href="#">Link two</a></li>
	<li><a href="#">Link three</a></li>
</ul>
</div>',
      'format' => 'wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f58b387-e022-4e2f-ad97-4cd2b2e6bdc8';
    $display->content['new-9f58b387-e022-4e2f-ad97-4cd2b2e6bdc8'] = $pane;
    $display->panels['left'][0] = 'new-9f58b387-e022-4e2f-ad97-4cd2b2e6bdc8';
    $pane = new stdClass();
    $pane->pid = 'new-a9b7486b-e29a-4c0a-85d3-dfabf6e80f61';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Small region map',
      'title' => 'Local Information',
      'body' => '<p style="text-align:center">Click on map for local info</p>

<ul id="regions">
	<li id="regions-northwest"><a href="/regions/northwest/" title="Northwest">Northwest</a></li>
	<li id="regions-olympic"><a href="/regions/olympic/" title="Olympic">Olympic</a></li>
	<li id="regions-southwest"><a href="/regions/southwest/" title="Southwest">Southwest</a></li>
	<li id="regions-southcentral"><a href="/regions/south-central/" title="South Central">South Central</a></li>
	<li id="regions-northcentral"><a href="/regions/north-central/" title="North Central">North Central</a></li>
	<li id="regions-eastern"><a href="/regions/eastern/" title="Eastern">Eastern</a></li>
</ul>

<p style="text-align:center"><a href="/regions/map">View larger map for<br />
more local links</a></p>
',
      'format' => 'wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a9b7486b-e29a-4c0a-85d3-dfabf6e80f61';
    $display->content['new-a9b7486b-e29a-4c0a-85d3-dfabf6e80f61'] = $pane;
    $display->panels['left'][1] = 'new-a9b7486b-e29a-4c0a-85d3-dfabf6e80f61';
    $pane = new stdClass();
    $pane->pid = 'new-585b5a0a-8b2a-483d-8abb-0e9d3aef705e';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contact Us',
      'body' => '<p>Your contact information</p>
',
      'format' => 'wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '585b5a0a-8b2a-483d-8abb-0e9d3aef705e';
    $display->content['new-585b5a0a-8b2a-483d-8abb-0e9d3aef705e'] = $pane;
    $display->panels['left'][2] = 'new-585b5a0a-8b2a-483d-8abb-0e9d3aef705e';
    $pane = new stdClass();
    $pane->pid = 'new-3e3a2e7d-e994-412a-a5cb-acbdfc9c7847';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Projects',
      'body' => '<ul>
	<li><a href="/projects/">Statewide Projects</a></li>
</ul>
',
      'format' => 'wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e3a2e7d-e994-412a-a5cb-acbdfc9c7847';
    $display->content['new-3e3a2e7d-e994-412a-a5cb-acbdfc9c7847'] = $pane;
    $display->panels['right'][0] = 'new-3e3a2e7d-e994-412a-a5cb-acbdfc9c7847';
    $pane = new stdClass();
    $pane->pid = 'new-a02c5977-ac62-49be-8118-485016207376';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Local Information',
      'body' => '<ul>
	<li><a href="#">Links to local content</a></li>
</ul>
',
      'format' => 'wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a02c5977-ac62-49be-8118-485016207376';
    $display->content['new-a02c5977-ac62-49be-8118-485016207376'] = $pane;
    $display->panels['right'][1] = 'new-a02c5977-ac62-49be-8118-485016207376';
    $pane = new stdClass();
    $pane->pid = 'new-df2e38e8-932c-4c6e-ac0a-abcbdb5fc358';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Stay Connected',
      'body' => '<div class="widgetdata">
<ul class="threecol_icons" style="list-style:none">
	<li><a class="blogger" href="http://wsdotblog.blogspot.com/">Blogger</a></li>
	<li><a class="flickr" href="http://www.flickr.com/photos/wsdot/">Flickr</a></li>
	<li><a class="rss" href="http://www.wsdot.wa.gov/news/rss/">RSS</a></li>
	<li><a class="twitter" href="http://twitter.com/wsdot">Twitter</a></li>
	<li><a class="youtube" href="http://www.youtube.com/wsdot">YouTube</a></li>
	<li><a class="facebook" href="http://www.facebook.com/wsdot">Facebook</a></li>
</ul>

<div class="cl">&nbsp;</div>
</div>
',
      'format' => 'wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df2e38e8-932c-4c6e-ac0a-abcbdb5fc358';
    $display->content['new-df2e38e8-932c-4c6e-ac0a-abcbdb5fc358'] = $pane;
    $display->panels['right'][2] = 'new-df2e38e8-932c-4c6e-ac0a-abcbdb5fc358';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:regions:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:regions:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'regions';
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
  $display->title = '%taxonomy_term:name Region';
  $display->uuid = '4edccfaa-6718-44d0-a87f-839d40e7b969';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ff234af3-c864-4a54-8484-50d88f818075';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff234af3-c864-4a54-8484-50d88f818075';
    $display->content['new-ff234af3-c864-4a54-8484-50d88f818075'] = $pane;
    $display->panels['middle'][0] = 'new-ff234af3-c864-4a54-8484-50d88f818075';
    $pane = new stdClass();
    $pane->pid = 'new-6f271130-94e2-4999-a6d5-3e5438e29410';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_titles-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f271130-94e2-4999-a6d5-3e5438e29410';
    $display->content['new-6f271130-94e2-4999-a6d5-3e5438e29410'] = $pane;
    $display->panels['right'][0] = 'new-6f271130-94e2-4999-a6d5-3e5438e29410';
    $pane = new stdClass();
    $pane->pid = 'new-bf588013-586a-446c-96e7-4a581ea5c47b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_titles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bf588013-586a-446c-96e7-4a581ea5c47b';
    $display->content['new-bf588013-586a-446c-96e7-4a581ea5c47b'] = $pane;
    $display->panels['right'][1] = 'new-bf588013-586a-446c-96e7-4a581ea5c47b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:regions:default:default'] = $panelizer;

  return $export;
}
