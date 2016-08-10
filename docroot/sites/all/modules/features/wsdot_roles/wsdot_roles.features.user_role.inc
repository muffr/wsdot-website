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
    'weight' => 10,
  );

  // Exported role: ER Project Editor.
  $roles['ER Project Editor'] = array(
    'name' => 'ER Project Editor',
    'weight' => 11,
  );

  // Exported role: Equal Opportunity Editor.
  $roles['Equal Opportunity Editor'] = array(
    'name' => 'Equal Opportunity Editor',
    'weight' => 20,
  );

  // Exported role: Good To Go Editor.
  $roles['Good To Go Editor'] = array(
    'name' => 'Good To Go Editor',
    'weight' => 19,
  );

  // Exported role: HQ Communication Editor.
  $roles['HQ Communication Editor'] = array(
    'name' => 'HQ Communication Editor',
    'weight' => 4,
  );

  // Exported role: Moderator.
  $roles['Moderator'] = array(
    'name' => 'Moderator',
    'weight' => 3,
  );

  // Exported role: NC Project Author.
  $roles['NC Project Author'] = array(
    'name' => 'NC Project Author',
    'weight' => 8,
  );

  // Exported role: NC Project Editor.
  $roles['NC Project Editor'] = array(
    'name' => 'NC Project Editor',
    'weight' => 9,
  );

  // Exported role: NW Project Author.
  $roles['NW Project Author'] = array(
    'name' => 'NW Project Author',
    'weight' => 6,
  );

  // Exported role: NW Project Editor.
  $roles['NW Project Editor'] = array(
    'name' => 'NW Project Editor',
    'weight' => 7,
  );

  // Exported role: News Editor.
  $roles['News Editor'] = array(
    'name' => 'News Editor',
    'weight' => 5,
  );

  // Exported role: OR Project Author.
  $roles['OR Project Author'] = array(
    'name' => 'OR Project Author',
    'weight' => 16,
  );

  // Exported role: OR Project Editor.
  $roles['OR Project Editor'] = array(
    'name' => 'OR Project Editor',
    'weight' => 17,
  );

  // Exported role: SC Project Author.
  $roles['SC Project Author'] = array(
    'name' => 'SC Project Author',
    'weight' => 12,
  );

  // Exported role: SC Project Editor.
  $roles['SC Project Editor'] = array(
    'name' => 'SC Project Editor',
    'weight' => 13,
  );

  // Exported role: SW Project Author.
  $roles['SW Project Author'] = array(
    'name' => 'SW Project Author',
    'weight' => 14,
  );

  // Exported role: SW Project Editor.
  $roles['SW Project Editor'] = array(
    'name' => 'SW Project Editor',
    'weight' => 15,
  );

  // Exported role: Tolling Editor.
  $roles['Tolling Editor'] = array(
    'name' => 'Tolling Editor',
    'weight' => 18,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
