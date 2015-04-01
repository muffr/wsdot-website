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
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name Region Home';
  $display->uuid = '6f13e418-757c-4948-91c0-14867eda4ea2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a8ffd7b6-6179-41ad-baeb-fcd6200935fe';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'project_titles-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a8ffd7b6-6179-41ad-baeb-fcd6200935fe';
    $display->content['new-a8ffd7b6-6179-41ad-baeb-fcd6200935fe'] = $pane;
    $display->panels['left'][0] = 'new-a8ffd7b6-6179-41ad-baeb-fcd6200935fe';
    $pane = new stdClass();
    $pane->pid = 'new-e0855cd4-274e-444a-8414-9158f85ae1ce';
    $pane->panel = 'left';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e0855cd4-274e-444a-8414-9158f85ae1ce';
    $display->content['new-e0855cd4-274e-444a-8414-9158f85ae1ce'] = $pane;
    $display->panels['left'][1] = 'new-e0855cd4-274e-444a-8414-9158f85ae1ce';
    $pane = new stdClass();
    $pane->pid = 'new-f5cd6116-7ae0-410a-a8e3-3ef9491b78ec';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_titles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_regions_tid' => '%term:name',
      ),
      'context' => array(
        0 => 'argument_term_1',
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
    $pane->uuid = 'f5cd6116-7ae0-410a-a8e3-3ef9491b78ec';
    $display->content['new-f5cd6116-7ae0-410a-a8e3-3ef9491b78ec'] = $pane;
    $display->panels['right'][0] = 'new-f5cd6116-7ae0-410a-a8e3-3ef9491b78ec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__regions'] = $handler;

  return $export;
}
