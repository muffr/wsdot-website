<?php
/**
 * @file
 * wsdot_pathologic.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wsdot_pathologic_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathologic_local_paths';
  $strongarm->value = 'http://wsdot.dev.dd:8083/
http://wsdotdev.prod.acquia-sites.com/
https://wsdotdev.prod.acquia-sites.com/
http://wsdotstg.prod.acquia-sites.com/
https://wsdotstg.prod.acquia-sites.com/
http://wsdot.prod.acquia-sites.com/
https://wsdot.prod.acquia-sites.com/
http://www.wsdot.wa.gov/
https://www.wsdot.wa.gov/
http://wsdot.wa.gov/
https://wsdot.wa.gov/';
  $export['pathologic_local_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathologic_protocol_style';
  $strongarm->value = 'path';
  $export['pathologic_protocol_style'] = $strongarm;

  return $export;
}
