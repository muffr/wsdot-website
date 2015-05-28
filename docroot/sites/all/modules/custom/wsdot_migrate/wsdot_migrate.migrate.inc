<?php

/**
 * @file
 * Registration of WSDOT migration processes.
 */

/**
 * Implements hook_migrate_api().
 */
function wsdot_migrate_migrate_api() {

  $api = array(
    'api' => 2,

    'groups' => array(
      // Besides a nice title for the UI, the group definition holds any
      // configuration shared among migrations, so it doesn't need to be passed
      // to each one individually.
      'wsdot' => array(
        'title' => t('WSDOT imports'),
      ),
    ),

    'migrations' => array(
      'file' => array(
        'class_name' => 'WSDOTFile',
        'group_name' => 'wsdot',
        'description' => 'Import of files',
      ),
      'user' => array(
        'class_name' => 'WSDOTUser',
        'group_name' => 'wsdot',
        'description' => 'Import of users',
      ),
      // Maximum reusability - the Node table covers all content types, so we
      // can share one class for all node migrations.
      'news' => array(
        'class_name' => 'WSDOTNewsArticle',
        'group_name' => 'wsdot',
        'description' => 'Import of news articles',
        'type_guid' => '{78FF8841-6880-444C-9BFA-56732F591D17}',
        'destination_type' => 'news_article',
        'dependencies' => array('user'),
      ),
    ),
  );

  return $api;
}
