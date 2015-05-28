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

    $this->sourceOptions = array(
      'map_joinable' => FALSE,
    );
  }
}
