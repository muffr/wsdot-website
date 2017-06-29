<?php
/**
 * @file
 * wsdot_services_api.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function wsdot_services_api_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'wsdot_api_v1';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api/wsdot/v1';
  $endpoint->authentication = array();
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'news' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'projects' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['wsdot_api_v1'] = $endpoint;

  return $export;
}
