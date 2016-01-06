<?php
/**
 * @file
 * wsdot_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wsdot_roles_user_default_roles() {
  $roles = array();

  // Exported role: ER Project Author.
  $roles['ER Project Author'] = array(
    'name' => 'ER Project Author',
    'weight' => 9,
  );

  // Exported role: ER Project Editor.
  $roles['ER Project Editor'] = array(
    'name' => 'ER Project Editor',
    'weight' => 10,
  );

  // Exported role: Moderator.
  $roles['Moderator'] = array(
    'name' => 'Moderator',
    'weight' => 4,
  );

  // Exported role: NC Project Author.
  $roles['NC Project Author'] = array(
    'name' => 'NC Project Author',
    'weight' => 7,
  );

  // Exported role: NC Project Editor.
  $roles['NC Project Editor'] = array(
    'name' => 'NC Project Editor',
    'weight' => 8,
  );

  // Exported role: NW Project Author.
  $roles['NW Project Author'] = array(
    'name' => 'NW Project Author',
    'weight' => 5,
  );

  // Exported role: NW Project Editor.
  $roles['NW Project Editor'] = array(
    'name' => 'NW Project Editor',
    'weight' => 6,
  );

  // Exported role: News Editor.
  $roles['News Editor'] = array(
    'name' => 'News Editor',
    'weight' => 3,
  );

  // Exported role: OR Project Author.
  $roles['OR Project Author'] = array(
    'name' => 'OR Project Author',
    'weight' => 15,
  );

  // Exported role: OR Project Editor.
  $roles['OR Project Editor'] = array(
    'name' => 'OR Project Editor',
    'weight' => 16,
  );

  // Exported role: SC Project Author.
  $roles['SC Project Author'] = array(
    'name' => 'SC Project Author',
    'weight' => 11,
  );

  // Exported role: SC Project Editors.
  $roles['SC Project Editors'] = array(
    'name' => 'SC Project Editors',
    'weight' => 12,
  );

  // Exported role: SW Project Author.
  $roles['SW Project Author'] = array(
    'name' => 'SW Project Author',
    'weight' => 13,
  );

  // Exported role: SW Project Editor.
  $roles['SW Project Editor'] = array(
    'name' => 'SW Project Editor',
    'weight' => 14,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
