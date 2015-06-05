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
      // @todo: Temporary - we expect to replace this with a migration from
      // LDAP.
      'user' => array(
        'class_name' => 'WSDOTUser',
        'group_name' => 'wsdot',
        'description' => 'Import of users',
      ),
      'news' => array(
        'class_name' => 'WSDOTNewsArticle',
        'group_name' => 'wsdot',
        'description' => 'Import of news articles',
        'type_guid' => array('{78FF8841-6880-444C-9BFA-56732F591D17}'),
        'destination_type' => 'news_article',
        'dependencies' => array('file', 'user'),
        'earliest_date' => '2014-01-01',
      ),
      'page' => array(
        'class_name' => 'WSDOTPage',
        'group_name' => 'wsdot',
        'description' => 'Import of default standard pages',
        'type_guid' => array('{DFF8BE08-33C2-4C8B-912F-75DA9E798298}'),
        'destination_type' => 'page',
        'dependencies' => array('file', 'user'),
        'earliest_date' => '2012-01-01',
      ),
      'publication' => array(
        'class_name' => 'WSDOTPublication',
        'group_name' => 'wsdot',
        'description' => 'Import of publications (abstracts)',
        'type_guid' => array('{320598FA-2DBE-4DF8-A6C7-E0BDAD394A3C}',
          '{46978165-408D-4F68-AEC2-1FB11FC79D59}'),
        'destination_type' => 'publication',
        'dependencies' => array('file', 'user'),
      ),
      'project' => array(
        'class_name' => 'WSDOTProject',
        'group_name' => 'wsdot',
        'description' => 'Import of projects',
        'type_guid' => array('{66EA195A-46C1-4072-86AE-0480A7693696}',
          '{302FD56C-9930-4A45-969C-29901D086242}'),
        'destination_type' => 'project',
        'dependencies' => array('file', 'user'),
      ),
    ),
  );

  return $api;
}
