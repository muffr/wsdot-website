<?php

/**
 * @file
 * Shared code for all WSDOT taxonomy migrations.
 */

/**
 * All WSDOT taxonomy migrations instantiate this class.
 *
 * We are imagining here that all categories are held in a single table, with
 * a 'category_type' column indicating what kind of category (tags, cities, etc.)
 * a category is in. Such a structure allows us to support all category types
 * with a simple parameterized class.
 */
class WSDOTTaxonomy extends WSDOTMigrationBase {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $query = "SELECT category_id,category_name,category_descr
              FROM cms_categories
              WHERE category_type={$arguments['category_type']}";
    $count_query = "SELECT COUNT(*)
                    FROM cms_categories
                    WHERE category_type={$arguments['category_type']}";
    $fields = array(
      'category_id' => t('Unique ID of the category'),
      'category_name' => t('Name of the category'),
      'category_descr' => t('Description of the category'),
    );

    $this->source = new MigrateSourceMSSQL($this->arguments['db_credentials'],
      $query, $count_query, $fields);
    $this->destination = new MigrateDestinationTerm($arguments['destination_vocabulary']);

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'category_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Category ID',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->addFieldMapping('name', 'category_name');
    $this->addFieldMapping('description', 'category_descr');

    $this->addUnmigratedDestinations(array(
      'format',
      'parent',
      'parent_name',
      'weight',
    ));
  }
}
