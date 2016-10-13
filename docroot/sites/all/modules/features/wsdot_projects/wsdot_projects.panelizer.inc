<?php
/**
 * @file
 * wsdot_projects.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function wsdot_projects_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'project';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:project:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
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
        'width' => '75',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '25',
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
    'right' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8235a4b3-0549-49b9-83f7-1f7e7f54e238';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:project:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2b5a128a-e816-4583-87b1-073037ca503c';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_status';
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
    'override_title' => 1,
    'override_title_text' => 'Status',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'projectstatusbox',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2b5a128a-e816-4583-87b1-073037ca503c';
  $display->content['new-2b5a128a-e816-4583-87b1-073037ca503c'] = $pane;
  $display->panels['center'][0] = 'new-2b5a128a-e816-4583-87b1-073037ca503c';
  $pane = new stdClass();
  $pane->pid = 'new-d092e9c5-7c2b-4faa-add8-68c2017223af';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd092e9c5-7c2b-4faa-add8-68c2017223af';
  $display->content['new-d092e9c5-7c2b-4faa-add8-68c2017223af'] = $pane;
  $display->panels['center'][1] = 'new-d092e9c5-7c2b-4faa-add8-68c2017223af';
  $pane = new stdClass();
  $pane->pid = 'new-896aca83-3c07-45e3-8e0d-fbefe506be59';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_funding_table';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'default',
      'links' => 0,
    ),
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
  $pane->uuid = '896aca83-3c07-45e3-8e0d-fbefe506be59';
  $display->content['new-896aca83-3c07-45e3-8e0d-fbefe506be59'] = $pane;
  $display->panels['center'][2] = 'new-896aca83-3c07-45e3-8e0d-fbefe506be59';
  $pane = new stdClass();
  $pane->pid = 'new-76e35c5b-e2ad-4b0b-8305-ed4a571b86c6';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_contact';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '76e35c5b-e2ad-4b0b-8305-ed4a571b86c6';
  $display->content['new-76e35c5b-e2ad-4b0b-8305-ed4a571b86c6'] = $pane;
  $display->panels['center'][3] = 'new-76e35c5b-e2ad-4b0b-8305-ed4a571b86c6';
  $pane = new stdClass();
  $pane->pid = 'new-90820125-098f-487f-9424-0c6c943f2748';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_project_phase';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'ds_taxonomy_view_mode',
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
  $pane->css = array(
    'css_id' => 'project-phase',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '90820125-098f-487f-9424-0c6c943f2748';
  $display->content['new-90820125-098f-487f-9424-0c6c943f2748'] = $pane;
  $display->panels['right'][0] = 'new-90820125-098f-487f-9424-0c6c943f2748';
  $pane = new stdClass();
  $pane->pid = 'new-df55cdc6-3ce1-46ee-9ad3-f8d8e109a7d1';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_legacy_map';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df55cdc6-3ce1-46ee-9ad3-f8d8e109a7d1';
  $display->content['new-df55cdc6-3ce1-46ee-9ad3-f8d8e109a7d1'] = $pane;
  $display->panels['right'][1] = 'new-df55cdc6-3ce1-46ee-9ad3-f8d8e109a7d1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:project:default:default'] = $panelizer;

  return $export;
}
