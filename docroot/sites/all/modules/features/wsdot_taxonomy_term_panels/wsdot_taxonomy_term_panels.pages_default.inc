<?php
/**
 * @file
 * wsdot_taxonomy_term_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function wsdot_taxonomy_term_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__regions';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Regions',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'regions',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'regions' => 'regions',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name Region Home';
  $display->uuid = '6f13e418-757c-4948-91c0-14867eda4ea2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7a3143a9-061e-4d6e-bc95-bd87263a1939';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'My links',
      'title' => 'Links links links',
      'body' => '<ul>
	<li>heres one</li>
	<li>another</li>
	<li>another</li>
</ul>
',
      'format' => 'wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7a3143a9-061e-4d6e-bc95-bd87263a1939';
    $display->content['new-7a3143a9-061e-4d6e-bc95-bd87263a1939'] = $pane;
    $display->panels['left'][0] = 'new-7a3143a9-061e-4d6e-bc95-bd87263a1939';
    $pane = new stdClass();
    $pane->pid = 'new-7065f2ec-bcf3-486d-9dd3-fe24efbde0a2';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'I\'m special!',
      'body' => '<p>Don\'t you *dare* put me in a corner.</p>
',
      'format' => 'wysiwyg',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7065f2ec-bcf3-486d-9dd3-fe24efbde0a2';
    $display->content['new-7065f2ec-bcf3-486d-9dd3-fe24efbde0a2'] = $pane;
    $display->panels['left'][1] = 'new-7065f2ec-bcf3-486d-9dd3-fe24efbde0a2';
    $pane = new stdClass();
    $pane->pid = 'new-e5e3a4ba-6e80-470c-9b8d-929fdb7b97cc';
    $pane->panel = 'left';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e5e3a4ba-6e80-470c-9b8d-929fdb7b97cc';
    $display->content['new-e5e3a4ba-6e80-470c-9b8d-929fdb7b97cc'] = $pane;
    $display->panels['left'][2] = 'new-e5e3a4ba-6e80-470c-9b8d-929fdb7b97cc';
    $pane = new stdClass();
    $pane->pid = 'new-e0855cd4-274e-444a-8414-9158f85ae1ce';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_titles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_regions_tid' => '%term:name ',
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
    $pane->uuid = 'e0855cd4-274e-444a-8414-9158f85ae1ce';
    $display->content['new-e0855cd4-274e-444a-8414-9158f85ae1ce'] = $pane;
    $display->panels['right'][0] = 'new-e0855cd4-274e-444a-8414-9158f85ae1ce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__regions'] = $handler;

  return $export;
}
