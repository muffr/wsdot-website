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

  // Exported role: Asset Editor.
  $roles['Asset Editor'] = array(
    'name' => 'Asset Editor',
    'weight' => 3,
  );

  // Exported role: Business Editor.
  $roles['Business Editor'] = array(
    'name' => 'Business Editor',
    'weight' => 4,
  );

  // Exported role: ER Editor.
  $roles['ER Editor'] = array(
    'name' => 'ER Editor',
    'weight' => 8,
  );

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

  // Exported role: Employment Editor.
  $roles['Employment Editor'] = array(
    'name' => 'Employment Editor',
    'weight' => 5,
  );

  // Exported role: Environment Editor.
  $roles['Environment Editor'] = array(
    'name' => 'Environment Editor',
    'weight' => 6,
  );

  // Exported role: Equal Opportunity Editor.
  $roles['Equal Opportunity Editor'] = array(
    'name' => 'Equal Opportunity Editor',
    'weight' => 7,
  );

  // Exported role: Ferries Editor.
  $roles['Ferries Editor'] = array(
    'name' => 'Ferries Editor',
    'weight' => 11,
  );

  // Exported role: Finance Editor.
  $roles['Finance Editor'] = array(
    'name' => 'Finance Editor',
    'weight' => 12,
  );

  // Exported role: Good To Go Editor.
  $roles['Good To Go Editor'] = array(
    'name' => 'Good To Go Editor',
    'weight' => 13,
  );

  // Exported role: HQ Communication Editor.
  $roles['HQ Communication Editor'] = array(
    'name' => 'HQ Communication Editor',
    'weight' => 14,
  );

  // Exported role: Moderator.
  $roles['Moderator'] = array(
    'name' => 'Moderator',
    'weight' => 15,
  );

  // Exported role: NC Editor.
  $roles['NC Editor'] = array(
    'name' => 'NC Editor',
    'weight' => 17,
  );

  // Exported role: NC Project Author.
  $roles['NC Project Author'] = array(
    'name' => 'NC Project Author',
    'weight' => 18,
  );

  // Exported role: NC Project Editor.
  $roles['NC Project Editor'] = array(
    'name' => 'NC Project Editor',
    'weight' => 19,
  );

  // Exported role: NW Editor.
  $roles['NW Editor'] = array(
    'name' => 'NW Editor',
    'weight' => 20,
  );

  // Exported role: NW Project Author.
  $roles['NW Project Author'] = array(
    'name' => 'NW Project Author',
    'weight' => 21,
  );

  // Exported role: NW Project Editor.
  $roles['NW Project Editor'] = array(
    'name' => 'NW Project Editor',
    'weight' => 22,
  );

  // Exported role: News Editor.
  $roles['News Editor'] = array(
    'name' => 'News Editor',
    'weight' => 16,
  );

  // Exported role: OR Editor.
  $roles['OR Editor'] = array(
    'name' => 'OR Editor',
    'weight' => 23,
  );

  // Exported role: OR Project Author.
  $roles['OR Project Author'] = array(
    'name' => 'OR Project Author',
    'weight' => 24,
  );

  // Exported role: OR Project Editor.
  $roles['OR Project Editor'] = array(
    'name' => 'OR Project Editor',
    'weight' => 25,
  );

  // Exported role: Planning Author.
  $roles['Planning Author'] = array(
    'name' => 'Planning Author',
    'weight' => 26,
  );

  // Exported role: Planning Editor.
  $roles['Planning Editor'] = array(
    'name' => 'Planning Editor',
    'weight' => 27,
  );

  // Exported role: Policy Editor.
  $roles['Policy Editor'] = array(
    'name' => 'Policy Editor',
    'weight' => 28,
  );

  // Exported role: Research Editor.
  $roles['Research Editor'] = array(
    'name' => 'Research Editor',
    'weight' => 29,
  );

  // Exported role: SC Editor.
  $roles['SC Editor'] = array(
    'name' => 'SC Editor',
    'weight' => 30,
  );

  // Exported role: SC Project Author.
  $roles['SC Project Author'] = array(
    'name' => 'SC Project Author',
    'weight' => 31,
  );

  // Exported role: SC Project Editor.
  $roles['SC Project Editor'] = array(
    'name' => 'SC Project Editor',
    'weight' => 32,
  );

  // Exported role: SW Editor.
  $roles['SW Editor'] = array(
    'name' => 'SW Editor',
    'weight' => 33,
  );

  // Exported role: SW Project Author.
  $roles['SW Project Author'] = array(
    'name' => 'SW Project Author',
    'weight' => 34,
  );

  // Exported role: SW Project Editor.
  $roles['SW Project Editor'] = array(
    'name' => 'SW Project Editor',
    'weight' => 35,
  );

  // Exported role: Tolling Editor.
  $roles['Tolling Editor'] = array(
    'name' => 'Tolling Editor',
    'weight' => 36,
  );

  // Exported role: Traffic Editor.
  $roles['Traffic Editor'] = array(
    'name' => 'Traffic Editor',
    'weight' => 39,
  );

  // Exported role: Training Editor.
  $roles['Training Editor'] = array(
    'name' => 'Training Editor',
    'weight' => 40,
  );

  // Exported role: Transit Editor.
  $roles['Transit Editor'] = array(
    'name' => 'Transit Editor',
    'weight' => 37,
  );

  // Exported role: Tribal Editor.
  $roles['Tribal Editor'] = array(
    'name' => 'Tribal Editor',
    'weight' => 38,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
