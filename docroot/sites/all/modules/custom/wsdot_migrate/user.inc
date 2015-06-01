<?php

/**
 * @file
 * The WSDOT user migration.
 * @todo: Replace with migration from LDAP.
 */

/**
 * Migration of users from the AEUser table.
 */
class WSDOTUser extends WSDOTMigrationBase {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'UserId' => t('Unique ID of the user - referenced from the Node table'),
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
    $this->addFieldMapping('status')
      ->defaultValue(1)
      ->description('Default imported accounts to enabled');
    $this->addFieldMapping('roles')
      ->defaultValue(DRUPAL_AUTHENTICATED_RID)
      ->description('Default to simple authenticated privileges for now');

    $this->addUnmigratedDestinations(array(
      'access',
      'created',
      'data',
      'init',
      'is_new',
      'language',
      'login',
      'pass',
      'path',
      'pathauto',
      'picture',
      'role_names',
      'signature',
      'signature_format',
      'theme',
      'timezone',
    ));

    $this->addUnmigratedSources(array(
      'UsernameUpper',
      'UserSID',
    ));
  }

  /**
   * Strip the username (with the incoming form WinNT://WSDOT/WalkerP) to just
   * the trailing component (WalkerP). Note that this results in some dupes
   * (e.g., for Domain Admins).
   *
   * @param string $username
   *
   * @return string
   */
  protected function stripUsername($username) {
    $split = explode('/', $username);
    return array_pop($split);
  }

  /**
   * Construct a fake unique email address from the username.
   *
   * @param string $username
   *
   * @return string
   */
  protected function usernameToEmail($username) {
    $stripped = $this->stripUsername($username);
    return $stripped . '@example.com';
  }
}
