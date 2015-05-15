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
        // Define $conf['wsdot_source_db_credentials'] in the local settings.php
        // (not to be committed to the code repo). See MigrateSourceMSSQL
        // for documentation of the contents.
        'db_credentials' => variable_get('wsdot_source_db_credentials', array()),
      ),
    ),

    'migrations' => array(
      // Maximum reusability - assume there is a single table in the source
      // for all taxonomy, so we can share one class for all taxonomy migrations.
      'amenities' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of amenities',
        'category_type' => 'AMENITY',
        'destination_vocabulary' => 'amenities',
      ),
      'cities' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of cities',
        'category_type' => 'CITY',
        'destination_vocabulary' => 'cities',
      ),
      'counties' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of counties',
        'category_type' => 'COUNTY',
        'destination_vocabulary' => 'counties',
      ),
      'funding_types' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of funding types',
        'category_type' => 'FUNDING_TYPE',
        'destination_vocabulary' => 'funding_types',
      ),
      'highways' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of highways',
        'category_type' => 'HIGHWAY',
        'destination_vocabulary' => 'highways',
      ),
      'modes' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of modes',
        'category_type' => 'MODE',
        'destination_vocabulary' => 'modes',
      ),
      'mountain_passes' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of mountain passes',
        'category_type' => 'MOUNTAIN_PASS',
        'destination_vocabulary' => 'mountain_passes',
      ),
      'organizations' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of organizations',
        'category_type' => 'ORGANIZATION',
        'destination_vocabulary' => 'organizations',
      ),
      'project_phases' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of project phases',
        'category_type' => 'PROJECT_PHASE',
        'destination_vocabulary' => 'project_phases',
      ),
      'protect_category' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of protect categories',
        'category_type' => 'PROTECT_CATEGORY',
        'destination_vocabulary' => 'protect_category',
      ),
      'regions' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of regions',
        'category_type' => 'REGION',
        'destination_vocabulary' => 'regions',
      ),
      'subjects' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of subjects',
        'category_type' => 'SUBJECT',
        'destination_vocabulary' => 'subjects',
      ),
      'tags' => array(
        'class_name' => 'WSDOTTaxonomy',
        'group_name' => 'wsdot',
        'description' => 'Import of tags',
        'category_type' => 'TAG',
        'destination_vocabulary' => 'tags',
      ),

    ),
  );

  return $api;
}

