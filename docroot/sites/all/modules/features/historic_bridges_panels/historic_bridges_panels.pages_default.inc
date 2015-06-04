<?php
/**
 * @file
 * historic_bridges_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function historic_bridges_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'historic_bridges';
  $page->task = 'page';
  $page->admin_title = 'Historic Bridges';
  $page->admin_description = '';
  $page->path = 'environment/culres/bridges';
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
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_historic_bridges__panel_context_4578080a-a561-48b5-a23a-ec956932e2c3';
  $handler->task = 'page';
  $handler->subtask = 'historic_bridges';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Historic Bridges';
  $display->uuid = 'ed4767c3-bb7b-4eae-910b-8ea539af4b5e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3171244-b2ad-482c-a94c-27777a8f3504';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Historic Bridges Text',
      'title' => '',
      'body' => '<p>The WSDOT Cultural Resources Program maintains an inventory of historic Washington State bridges. All bridges built before 1971 have been evaluated for eligibility for listing&nbsp;on the<a href="http://www.cr.nps.gov/nr/" title="National Register of Historic Places">National Register of Historic Places&nbsp;</a>(NRHP). The&nbsp;<a href="http://www.wsdot.wa.gov/NR/rdonlyres/983CD749-D2B2-4BDA-828A-AC61E0BE9095/0/NRHP_BridgesInventory.pdf" title="A list of historic highway bridges in Washington State.">NRHP Washington State Historic Highway Bridges</a>&nbsp;(pdf&nbsp;90 kb)&nbsp;table lists all bridges that have been recommended, nominated, determined eligible or listed on the NRHP. This list includes Interstate highway bridges and segments of highway containing bridges determined by&nbsp;the Federal Highway Administration (FHWA)&nbsp;to be of exceptional national significance but not yet evaluated for NRHP eligibility. The Advisory Council of Historic Preservation\'s&nbsp;Section 106 Exemption Regarding Effects to the Interstate Highway System (2005)&nbsp;excludes the majority of Interstate Highway Features from consideration as a historic&nbsp;property under Section 106 of the National Historic Preservation Act (NHPA). FHWA\'s&nbsp;<a href="http://www.environment.fhwa.dot.gov/histpres/highways_list.asp" title="FHWA Significant Highway Features of Washington">List of Nationally and Exceptionally Significant Features of the Federal Interstate Highway System</a>&nbsp;in&nbsp;Washington State are excluded from ACHP\'s Section 106 Exemption. At the request of&nbsp;FHWA, the ACHP issued a&nbsp;<a href="http://www.environment.fhwa.dot.gov/histpres/program_comment.asp" title="ACHP Program Comment Common post 1945 Bridges">Program Comment&nbsp;</a>&nbsp;that identifies common post 1945 concrete and steel bridges lacking distinction, not previously listed or determined eligible for listing on the National Register, and not located in or adjacent to historic districts that may be exempted from review under Section 106 of the NHPA. FHWA has published&nbsp;a&nbsp;list of<a href="http://www.environment.fhwa.dot.gov/histpres/bridges_list.asp" title="FHWA Common Post-1945 Concrete and Steel Bridges in Washington Excluded from Program Comment">Common Post-1945 Concrete and Steel Bridges in Washington&nbsp;</a>of exceptional quality&nbsp;excluded from&nbsp;ACHP\'s Program Comment. The WSDOT Cultural Resources Program&nbsp;and Visual Engineering Resources Group (VERG) have produced video documentaries of several historic bridges in Washington State.</p>

<ul>
	<li><a href="mms://media.wsdot.wa.gov/media/VERG/SimpsonAveBridge.wmv" title="Documentary of the Historic Simpson Avenue Bridge Repairs, 2012">Simpson Avenue Bridge Repairs and Preservation</a>,&nbsp;US 101- Grays Harbor County (Video)</li>
	<li><a href="mms://media.wsdot.wa.gov/media/VERG/Manette_Bridge_Documentary_640x480_web.wmv" title="Historic Documentary of the Manette Bridge, SR 303">History of the Manette Bridge</a>, SR 303- Kitsap County (Video)</li>
	<li>Puyallup River Bridge (1925), SR 167-&nbsp;Pierce County,&nbsp;Watch a&nbsp;<a href="http://www.youtube.com/watch?v=nwP7zPJfDf4&amp;feature=youtu.be" title="SR 167 Puyallup River bridge video">time-lapse video&nbsp;</a>of the historic steel&nbsp;bridge as it is lifted from its position&nbsp;above the Puyallup River&nbsp;and moved.</li>
</ul>

<p>Preview a&nbsp;selection of the most significant bridges in the state&nbsp;highlighted below. You can view and download photos, and read about these historic bridges, on the Library of Congress website:&nbsp;<a href="http://www.loc.gov/pictures/collection/hh/">http://www.loc.gov/pictures/collection/hh/</a>.</p>

<p>The WSDOT Cultural Resources Program maintains an inventory of historic Washington State bridges. All bridges built before 1971 have been evaluated for eligibility for listing&nbsp;on the<a href="http://www.cr.nps.gov/nr/" title="National Register of Historic Places">National Register of Historic Places&nbsp;</a>(NRHP). The&nbsp;<a href="http://www.wsdot.wa.gov/NR/rdonlyres/983CD749-D2B2-4BDA-828A-AC61E0BE9095/0/NRHP_BridgesInventory.pdf" title="A list of historic highway bridges in Washington State.">NRHP Washington State Historic Highway Bridges</a>&nbsp;(pdf&nbsp;90 kb)&nbsp;table lists all bridges that have been recommended, nominated, determined eligible or listed on the NRHP. This list includes Interstate highway bridges and segments of highway containing bridges determined by&nbsp;the Federal Highway Administration (FHWA)&nbsp;to be of exceptional national significance but not yet evaluated for NRHP eligibility. The Advisory Council of Historic Preservation\'s&nbsp;Section 106 Exemption Regarding Effects to the Interstate Highway System (2005)&nbsp;excludes the majority of Interstate Highway Features from consideration as a historic&nbsp;property under Section 106 of the National Historic Preservation Act (NHPA). FHWA\'s&nbsp;<a href="http://www.environment.fhwa.dot.gov/histpres/highways_list.asp" title="FHWA Significant Highway Features of Washington">List of Nationally and Exceptionally Significant Features of the Federal Interstate Highway System</a>&nbsp;in&nbsp;Washington State are excluded from ACHP\'s Section 106 Exemption. At the request of&nbsp;FHWA, the ACHP issued a&nbsp;<a href="http://www.environment.fhwa.dot.gov/histpres/program_comment.asp" title="ACHP Program Comment Common post 1945 Bridges">Program Comment&nbsp;</a>&nbsp;that identifies common post 1945 concrete and steel bridges lacking distinction, not previously listed or determined eligible for listing on the National Register, and not located in or adjacent to historic districts that may be exempted from review under Section 106 of the NHPA. FHWA has published&nbsp;a&nbsp;list of<a href="http://www.environment.fhwa.dot.gov/histpres/bridges_list.asp" title="FHWA Common Post-1945 Concrete and Steel Bridges in Washington Excluded from Program Comment">Common Post-1945 Concrete and Steel Bridges in Washington&nbsp;</a>of exceptional quality&nbsp;excluded from&nbsp;ACHP\'s Program Comment. The WSDOT Cultural Resources Program&nbsp;and Visual Engineering Resources Group (VERG) have produced video documentaries of several historic bridges in Washington State.</p>

<ul>
	<li><a href="mms://media.wsdot.wa.gov/media/VERG/SimpsonAveBridge.wmv" title="Documentary of the Historic Simpson Avenue Bridge Repairs, 2012">Simpson Avenue Bridge Repairs and Preservation</a>,&nbsp;US 101- Grays Harbor County (Video)</li>
	<li><a href="mms://media.wsdot.wa.gov/media/VERG/Manette_Bridge_Documentary_640x480_web.wmv" title="Historic Documentary of the Manette Bridge, SR 303">History of the Manette Bridge</a>, SR 303- Kitsap County (Video)</li>
	<li>Puyallup River Bridge (1925), SR 167-&nbsp;Pierce County,&nbsp;Watch a&nbsp;<a href="http://www.youtube.com/watch?v=nwP7zPJfDf4&amp;feature=youtu.be" title="SR 167 Puyallup River bridge video">time-lapse video&nbsp;</a>of the historic steel&nbsp;bridge as it is lifted from its position&nbsp;above the Puyallup River&nbsp;and moved.</li>
</ul>

<p>Preview a&nbsp;selection of the most significant bridges in the state&nbsp;highlighted below. You can view and download photos, and read about these historic bridges, on the Library of Congress website:&nbsp;<a href="http://www.loc.gov/pictures/collection/hh/">http://www.loc.gov/pictures/collection/hh/</a>.</p>
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
    $pane->uuid = 'b3171244-b2ad-482c-a94c-27777a8f3504';
    $display->content['new-b3171244-b2ad-482c-a94c-27777a8f3504'] = $pane;
    $display->panels['center'][0] = 'new-b3171244-b2ad-482c-a94c-27777a8f3504';
    $pane = new stdClass();
    $pane->pid = 'new-bcf613b9-bc05-4b6f-acc1-33a1a73eb36c';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'historic_bridges-panel_pane_1';
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
    $pane->uuid = 'bcf613b9-bc05-4b6f-acc1-33a1a73eb36c';
    $display->content['new-bcf613b9-bc05-4b6f-acc1-33a1a73eb36c'] = $pane;
    $display->panels['center'][1] = 'new-bcf613b9-bc05-4b6f-acc1-33a1a73eb36c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b3171244-b2ad-482c-a94c-27777a8f3504';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['historic_bridges'] = $page;

  return $pages;

}
