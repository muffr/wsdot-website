<?php
/**
 * @file
 * wsdot_wetland_reports_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_wetland_reports_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wsdot_wetland_reports_content_type_node_info() {
  $items = array(
    'wetland_monitoring_reports' => array(
      'name' => t('Wetland Monitoring Reports'),
      'base' => 'node_content',
      'description' => t('This is the form to fill out for the individual entries that make up the Wetland Monitoring Reports home page. If the entry has only a link to the report, then use that link text as the title. If you have a three or four line entry, still enter all of that text as the title. The report document will always be linked to the word "report". So the entire link would be something like "report (pdf 100 kb)" and of course "100" would be replaced with the actual file size.'),
      'has_title' => '1',
      'title_label' => t('title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
