<?php
/**
 * @file
 * wsdot_metatag.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function wsdot_metatag_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [current-page:pager][site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => 'Washington State Department of Transportation',
      ),
      'description' => array(
        'value' => 'The official home page for WSDOT. Take a look at how we keep people, businesses and the economy moving by operating and improving the state\'s transportation systems.',
      ),
      'rating' => array(
        'value' => 'general',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'pragma' => array(
        'value' => 'no-cache',
      ),
      'cache-control' => array(
        'value' => 'no-cache',
      ),
      'msvalidate.01' => array(
        'value' => '91DA02A1D45F4CB7A4428F89A190D14F',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'dcterms.created' => array(
        'value' => '[node:created:custom:Y-m-d\\TH:i:s.000\\Z]',
      ),
      'dcterms.modified' => array(
        'value' => '[node:changed:custom:Y-m-d\\TH:i:s.000\\Z]',
      ),
    ),
  );

  // Exported Metatag config instance: node:publication.
  $config['node:publication'] = array(
    'instance' => 'node:publication',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:field-site-structure:0:root] - [node:title] | [current-page:pager][site:name]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[user:name] | [site:name]',
      ),
      'image_src' => array(
        'value' => '[user:picture:url]',
      ),
    ),
  );

  return $config;
}
