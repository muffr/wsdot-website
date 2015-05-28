<?php

/**
 * @file
 * The WSDOT user migration.
 */

/**
 * Migration of users from the AEUser table.
 */
class WSDOTUser extends WSDOTMigrationBase {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'UserId' => t('Unique ID of the user'),
      'Username' => t('Username'),
      'UsernameUpper' => t('Uppercase username'),
      'UserSID' => t('?'),
    );

    $query = Database::getConnection('default', 'migrate')
      ->select('AEUser', 'u')
      ->fields('u');

    $this->source = new MigrateSourceSQL($query, $fields, NULL, $this->sourceOptions);

    $this->destination = new MigrateDestinationUser();

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'UserId' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'User ID',
        )
      ),
      MigrateDestinationUser::getKeySchema()
    );

    $this->addFieldMapping('name', 'Username')
      ->callbacks(array($this, 'stripUsername'));
    $this->addFieldMapping('mail', 'Username')
      ->callbacks(array($this, 'usernameToEmail'));

    $this->addUnmigratedDestinations(array(
      'UsernameUpper',
    ));
  }

  protected function stripUsername($username) {
    $split = explode('/', $username);
    return array_pop($split);
  }

  protected function usernameToEmail($username) {
    $stripped = $this->stripUsername($username);
    return $stripped . '@example.com';
  }
}
