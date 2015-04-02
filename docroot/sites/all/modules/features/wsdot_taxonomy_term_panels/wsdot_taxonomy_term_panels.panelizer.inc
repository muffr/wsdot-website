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
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
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
    $pane->pid = 'new-7a84440f-94ac-4deb-aaa1-7176ded1fa70';
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
    $pane->uuid = '7a84440f-94ac-4deb-aaa1-7176ded1fa70';
    $display->content['new-7a84440f-94ac-4deb-aaa1-7176ded1fa70'] = $pane;
    $display->panels['middle'][0] = 'new-7a84440f-94ac-4deb-aaa1-7176ded1fa70';
    $pane = new stdClass();
    $pane->pid = 'new-1119018d-ff76-4a70-809c-32f17dc35f31';
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
    $pane->uuid = '1119018d-ff76-4a70-809c-32f17dc35f31';
    $display->content['new-1119018d-ff76-4a70-809c-32f17dc35f31'] = $pane;
    $display->panels['right'][0] = 'new-1119018d-ff76-4a70-809c-32f17dc35f31';
    $pane = new stdClass();
    $pane->pid = 'new-f68dfd76-6edc-4461-9be7-22bed5b2c33c';
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
    $pane->uuid = 'f68dfd76-6edc-4461-9be7-22bed5b2c33c';
    $display->content['new-f68dfd76-6edc-4461-9be7-22bed5b2c33c'] = $pane;
    $display->panels['right'][1] = 'new-f68dfd76-6edc-4461-9be7-22bed5b2c33c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1119018d-ff76-4a70-809c-32f17dc35f31';
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
  $panelizer->pipeline = 'ipe';
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
