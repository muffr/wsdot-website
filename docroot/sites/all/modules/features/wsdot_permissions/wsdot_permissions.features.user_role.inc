<?php
/**
 * @file
 * wsdot_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wsdot_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Policy Editor.
  $roles['Policy Editor'] = array(
    'name' => 'Policy Editor',
    'weight' => 21,
  );

  return $roles;
}
