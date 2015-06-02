<?php

/**
 * @file
 * Shared code for all WSDOT migrations.
 */

/**
 * All WSDOT migrations should extend this class.
 */
abstract class WSDOTMigrationBase extends Migration {
  /**
   * Default options to pass to source plugins.
   *
   * @var array
   */
  protected $sourceOptions = array();

  public function __construct($arguments) {
    parent::__construct($arguments);

    // Options each migration should pass to its source plugin.
    $this->sourceOptions = array(
      'map_joinable' => FALSE,  // Necessary when the source data and map table
                                // cannot be joined directly.
      'cache_counts' => TRUE,   // The node queries are complex and slow, so
                                // speed up source counting by caching the results.
    );
  }
}
