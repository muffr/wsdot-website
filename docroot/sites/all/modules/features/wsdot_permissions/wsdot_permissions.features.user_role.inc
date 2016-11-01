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

  // Exported role: ER Editor.
  $roles['ER Editor'] = array(
    'name' => 'ER Editor',
    'weight' => 26,
  );

  // Exported role: Employment Editor.
  $roles['Employment Editor'] = array(
    'name' => 'Employment Editor',
    'weight' => 35,
  );

  // Exported role: Ferries Editor.
  $roles['Ferries Editor'] = array(
    'name' => 'Ferries Editor',
    'weight' => 34,
  );

  // Exported role: Finance Editor.
  $roles['Finance Editor'] = array(
    'name' => 'Finance Editor',
    'weight' => 23,
  );

  // Exported role: NC Editor.
  $roles['NC Editor'] = array(
    'name' => 'NC Editor',
    'weight' => 25,
  );

  // Exported role: NW Editor.
  $roles['NW Editor'] = array(
    'name' => 'NW Editor',
    'weight' => 24,
  );

  // Exported role: OR Editor.
  $roles['OR Editor'] = array(
    'name' => 'OR Editor',
    'weight' => 29,
  );

  // Exported role: Planning Author.
  $roles['Planning Author'] = array(
    'name' => 'Planning Author',
    'weight' => 30,
  );

  // Exported role: Planning Editor.
  $roles['Planning Editor'] = array(
    'name' => 'Planning Editor',
    'weight' => 31,
  );

  // Exported role: Policy Editor.
  $roles['Policy Editor'] = array(
    'name' => 'Policy Editor',
    'weight' => 21,
  );

  // Exported role: Research Editor.
  $roles['Research Editor'] = array(
    'name' => 'Research Editor',
    'weight' => 22,
  );

  // Exported role: SC Editor.
  $roles['SC Editor'] = array(
    'name' => 'SC Editor',
    'weight' => 27,
  );

  // Exported role: SW Editor.
  $roles['SW Editor'] = array(
    'name' => 'SW Editor',
    'weight' => 28,
  );

  // Exported role: Transit Editor.
  $roles['Transit Editor'] = array(
    'name' => 'Transit Editor',
    'weight' => 33,
  );

  // Exported role: Tribal Editor.
  $roles['Tribal Editor'] = array(
    'name' => 'Tribal Editor',
    'weight' => 32,
  );

  return $roles;
}
