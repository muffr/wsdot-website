<?php

/**
 * @file
 * Shared code for all WSDOT migrations.
 */

/**
 * All WSDOT migrations should extend this class.
 */
abstract class WSDOTMigrationBase extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->sourceOptions = array(
      'map_joinable' => FALSE,
    );
  }
}
