<?php
/**
 * @file
 * wsdot_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wsdot_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access flood unblock'.
  $permissions['access flood unblock'] = array(
    'name' => 'access flood unblock',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flood_unblock',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'access workbench access by role'.
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer any social profiles'.
  $permissions['administer any social profiles'] = array(
    'name' => 'administer any social profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer ckeditor link'.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer devel menu items'.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer features menu items'.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu-flexslider-example menu items'.
  $permissions['administer menu-flexslider-example menu items'] = array(
    'name' => 'administer menu-flexslider-example menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer own social profiles'.
  $permissions['administer own social profiles'] = array(
    'name' => 'administer own social profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panel-nodes'.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer file audio defaults'.
  $permissions['administer panelizer file audio defaults'] = array(
    'name' => 'administer panelizer file audio defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer file document defaults'.
  $permissions['administer panelizer file document defaults'] = array(
    'name' => 'administer panelizer file document defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer file image defaults'.
  $permissions['administer panelizer file image defaults'] = array(
    'name' => 'administer panelizer file image defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer file video defaults'.
  $permissions['administer panelizer file video defaults'] = array(
    'name' => 'administer panelizer file video defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node advertisements defaults'.
  $permissions['administer panelizer node advertisements defaults'] = array(
    'name' => 'administer panelizer node advertisements defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article defaults'.
  $permissions['administer panelizer node article defaults'] = array(
    'name' => 'administer panelizer node article defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node auction_parcel defaults'.
  $permissions['administer panelizer node auction_parcel defaults'] = array(
    'name' => 'administer panelizer node auction_parcel defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event defaults'.
  $permissions['administer panelizer node event defaults'] = array(
    'name' => 'administer panelizer node event defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node flexslider_example defaults'.
  $permissions['administer panelizer node flexslider_example defaults'] = array(
    'name' => 'administer panelizer node flexslider_example defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node funding_table defaults'.
  $permissions['administer panelizer node funding_table defaults'] = array(
    'name' => 'administer panelizer node funding_table defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_article content'.
  $permissions['administer panelizer node news_article content'] = array(
    'name' => 'administer panelizer node news_article content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_article context'.
  $permissions['administer panelizer node news_article context'] = array(
    'name' => 'administer panelizer node news_article context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_article defaults'.
  $permissions['administer panelizer node news_article defaults'] = array(
    'name' => 'administer panelizer node news_article defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_article layout'.
  $permissions['administer panelizer node news_article layout'] = array(
    'name' => 'administer panelizer node news_article layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_article overview'.
  $permissions['administer panelizer node news_article overview'] = array(
    'name' => 'administer panelizer node news_article overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news_article settings'.
  $permissions['administer panelizer node news_article settings'] = array(
    'name' => 'administer panelizer node news_article settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page defaults'.
  $permissions['administer panelizer node page defaults'] = array(
    'name' => 'administer panelizer node page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node park_and_ride_lots defaults'.
  $permissions['administer panelizer node park_and_ride_lots defaults'] = array(
    'name' => 'administer panelizer node park_and_ride_lots defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node pin_report defaults'.
  $permissions['administer panelizer node pin_report defaults'] = array(
    'name' => 'administer panelizer node pin_report defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node plan_sheet defaults'.
  $permissions['administer panelizer node plan_sheet defaults'] = array(
    'name' => 'administer panelizer node plan_sheet defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project content'.
  $permissions['administer panelizer node project content'] = array(
    'name' => 'administer panelizer node project content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project context'.
  $permissions['administer panelizer node project context'] = array(
    'name' => 'administer panelizer node project context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project defaults'.
  $permissions['administer panelizer node project defaults'] = array(
    'name' => 'administer panelizer node project defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project layout'.
  $permissions['administer panelizer node project layout'] = array(
    'name' => 'administer panelizer node project layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project overview'.
  $permissions['administer panelizer node project overview'] = array(
    'name' => 'administer panelizer node project overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node project settings'.
  $permissions['administer panelizer node project settings'] = array(
    'name' => 'administer panelizer node project settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node publication defaults'.
  $permissions['administer panelizer node publication defaults'] = array(
    'name' => 'administer panelizer node publication defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node rest_area defaults'.
  $permissions['administer panelizer node rest_area defaults'] = array(
    'name' => 'administer panelizer node rest_area defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node roadwork defaults'.
  $permissions['administer panelizer node roadwork defaults'] = array(
    'name' => 'administer panelizer node roadwork defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slideshow defaults'.
  $permissions['administer panelizer node slideshow defaults'] = array(
    'name' => 'administer panelizer node slideshow defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform defaults'.
  $permissions['administer panelizer node webform defaults'] = array(
    'name' => 'administer panelizer node webform defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node wetland_monitoring_reports defaults'.
  $permissions['administer panelizer node wetland_monitoring_reports defaults'] = array(
    'name' => 'administer panelizer node wetland_monitoring_reports defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term amenities defaults'.
  $permissions['administer panelizer taxonomy_term amenities defaults'] = array(
    'name' => 'administer panelizer taxonomy_term amenities defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term cities defaults'.
  $permissions['administer panelizer taxonomy_term cities defaults'] = array(
    'name' => 'administer panelizer taxonomy_term cities defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term counties defaults'.
  $permissions['administer panelizer taxonomy_term counties defaults'] = array(
    'name' => 'administer panelizer taxonomy_term counties defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term funding_types defaults'.
  $permissions['administer panelizer taxonomy_term funding_types defaults'] = array(
    'name' => 'administer panelizer taxonomy_term funding_types defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term highways defaults'.
  $permissions['administer panelizer taxonomy_term highways defaults'] = array(
    'name' => 'administer panelizer taxonomy_term highways defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term modes defaults'.
  $permissions['administer panelizer taxonomy_term modes defaults'] = array(
    'name' => 'administer panelizer taxonomy_term modes defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term mountain_passes defaults'.
  $permissions['administer panelizer taxonomy_term mountain_passes defaults'] = array(
    'name' => 'administer panelizer taxonomy_term mountain_passes defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term organizations defaults'.
  $permissions['administer panelizer taxonomy_term organizations defaults'] = array(
    'name' => 'administer panelizer taxonomy_term organizations defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term project_phases defaults'.
  $permissions['administer panelizer taxonomy_term project_phases defaults'] = array(
    'name' => 'administer panelizer taxonomy_term project_phases defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term protect_category defaults'.
  $permissions['administer panelizer taxonomy_term protect_category defaults'] = array(
    'name' => 'administer panelizer taxonomy_term protect_category defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term regions defaults'.
  $permissions['administer panelizer taxonomy_term regions defaults'] = array(
    'name' => 'administer panelizer taxonomy_term regions defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term site_structure content'.
  $permissions['administer panelizer taxonomy_term site_structure content'] = array(
    'name' => 'administer panelizer taxonomy_term site_structure content',
    'roles' => array(
      'ER Editor' => 'ER Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term site_structure defaults'.
  $permissions['administer panelizer taxonomy_term site_structure defaults'] = array(
    'name' => 'administer panelizer taxonomy_term site_structure defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term subjects defaults'.
  $permissions['administer panelizer taxonomy_term subjects defaults'] = array(
    'name' => 'administer panelizer taxonomy_term subjects defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term tags defaults'.
  $permissions['administer panelizer taxonomy_term tags defaults'] = array(
    'name' => 'administer panelizer taxonomy_term tags defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer password policies'.
  $permissions['administer password policies'] = array(
    'name' => 'administer password policies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer social media'.
  $permissions['administer social media'] = array(
    'name' => 'administer social media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer widgets sets'.
  $permissions['administer widgets sets'] = array(
    'name' => 'administer widgets sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'widgets',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench access'.
  $permissions['administer workbench access'] = array(
    'name' => 'administer workbench access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'assign workbench access'.
  $permissions['assign workbench access'] = array(
    'name' => 'assign workbench access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'batch update workbench access'.
  $permissions['batch update workbench access'] = array(
    'name' => 'batch update workbench access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear wsdot_public_default_import feeds'.
  $permissions['clear wsdot_public_default_import feeds'] = array(
    'name' => 'clear wsdot_public_default_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear wsdot_public_newsitem_import feeds'.
  $permissions['clear wsdot_public_newsitem_import feeds'] = array(
    'name' => 'clear wsdot_public_newsitem_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear wsdot_public_project_funding_table_import feeds'.
  $permissions['clear wsdot_public_project_funding_table_import feeds'] = array(
    'name' => 'clear wsdot_public_project_funding_table_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear wsdot_public_project_import feeds'.
  $permissions['clear wsdot_public_project_import feeds'] = array(
    'name' => 'clear wsdot_public_project_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear wsdot_public_project_pin_report_import feeds'.
  $permissions['clear wsdot_public_project_pin_report_import feeds'] = array(
    'name' => 'clear wsdot_public_project_pin_report_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear wsdot_public_projectspecifics_import feeds'.
  $permissions['clear wsdot_public_projectspecifics_import feeds'] = array(
    'name' => 'clear wsdot_public_projectspecifics_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create advertisements content'.
  $permissions['create advertisements content'] = array(
    'name' => 'create advertisements content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create auction_parcel content'.
  $permissions['create auction_parcel content'] = array(
    'name' => 'create auction_parcel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create flexslider_example content'.
  $permissions['create flexslider_example content'] = array(
    'name' => 'create flexslider_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create funding_table content'.
  $permissions['create funding_table content'] = array(
    'name' => 'create funding_table content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create news_article content'.
  $permissions['create news_article content'] = array(
    'name' => 'create news_article content',
    'roles' => array(
      'News Editor' => 'News Editor',
      'Training Editor' => 'Training Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create park_and_ride_lots content'.
  $permissions['create park_and_ride_lots content'] = array(
    'name' => 'create park_and_ride_lots content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create pin_report content'.
  $permissions['create pin_report content'] = array(
    'name' => 'create pin_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create plan_sheet content'.
  $permissions['create plan_sheet content'] = array(
    'name' => 'create plan_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'ER Editor' => 'ER Editor',
      'Ferries Editor' => 'Ferries Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'Rail Editor' => 'Rail Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create publication content'.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      'Research Editor' => 'Research Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create rest_area content'.
  $permissions['create rest_area content'] = array(
    'name' => 'create rest_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create roadwork content'.
  $permissions['create roadwork content'] = array(
    'name' => 'create roadwork content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create slideshow content'.
  $permissions['create slideshow content'] = array(
    'name' => 'create slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create wetland_monitoring_reports content'.
  $permissions['create wetland_monitoring_reports content'] = array(
    'name' => 'create wetland_monitoring_reports content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any advertisements content'.
  $permissions['delete any advertisements content'] = array(
    'name' => 'delete any advertisements content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any auction_parcel content'.
  $permissions['delete any auction_parcel content'] = array(
    'name' => 'delete any auction_parcel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any flexslider_example content'.
  $permissions['delete any flexslider_example content'] = array(
    'name' => 'delete any flexslider_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any funding_table content'.
  $permissions['delete any funding_table content'] = array(
    'name' => 'delete any funding_table content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any news_article content'.
  $permissions['delete any news_article content'] = array(
    'name' => 'delete any news_article content',
    'roles' => array(
      'News Editor' => 'News Editor',
      'Training Editor' => 'Training Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Training Editor' => 'Training Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any park_and_ride_lots content'.
  $permissions['delete any park_and_ride_lots content'] = array(
    'name' => 'delete any park_and_ride_lots content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any pin_report content'.
  $permissions['delete any pin_report content'] = array(
    'name' => 'delete any pin_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any plan_sheet content'.
  $permissions['delete any plan_sheet content'] = array(
    'name' => 'delete any plan_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any publication content'.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any rest_area content'.
  $permissions['delete any rest_area content'] = array(
    'name' => 'delete any rest_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any roadwork content'.
  $permissions['delete any roadwork content'] = array(
    'name' => 'delete any roadwork content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any slideshow content'.
  $permissions['delete any slideshow content'] = array(
    'name' => 'delete any slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any wetland_monitoring_reports content'.
  $permissions['delete any wetland_monitoring_reports content'] = array(
    'name' => 'delete any wetland_monitoring_reports content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own advertisements content'.
  $permissions['delete own advertisements content'] = array(
    'name' => 'delete own advertisements content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own auction_parcel content'.
  $permissions['delete own auction_parcel content'] = array(
    'name' => 'delete own auction_parcel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own flexslider_example content'.
  $permissions['delete own flexslider_example content'] = array(
    'name' => 'delete own flexslider_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own funding_table content'.
  $permissions['delete own funding_table content'] = array(
    'name' => 'delete own funding_table content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own news_article content'.
  $permissions['delete own news_article content'] = array(
    'name' => 'delete own news_article content',
    'roles' => array(
      'News Editor' => 'News Editor',
      'Training Editor' => 'Training Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Training Editor' => 'Training Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own park_and_ride_lots content'.
  $permissions['delete own park_and_ride_lots content'] = array(
    'name' => 'delete own park_and_ride_lots content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own pin_report content'.
  $permissions['delete own pin_report content'] = array(
    'name' => 'delete own pin_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own plan_sheet content'.
  $permissions['delete own plan_sheet content'] = array(
    'name' => 'delete own plan_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own publication content'.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own rest_area content'.
  $permissions['delete own rest_area content'] = array(
    'name' => 'delete own rest_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own roadwork content'.
  $permissions['delete own roadwork content'] = array(
    'name' => 'delete own roadwork content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own slideshow content'.
  $permissions['delete own slideshow content'] = array(
    'name' => 'delete own slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete own wetland_monitoring_reports content'.
  $permissions['delete own wetland_monitoring_reports content'] = array(
    'name' => 'delete own wetland_monitoring_reports content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in amenities'.
  $permissions['delete terms in amenities'] = array(
    'name' => 'delete terms in amenities',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cities'.
  $permissions['delete terms in cities'] = array(
    'name' => 'delete terms in cities',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in counties'.
  $permissions['delete terms in counties'] = array(
    'name' => 'delete terms in counties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in funding_types'.
  $permissions['delete terms in funding_types'] = array(
    'name' => 'delete terms in funding_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in highways'.
  $permissions['delete terms in highways'] = array(
    'name' => 'delete terms in highways',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in modes'.
  $permissions['delete terms in modes'] = array(
    'name' => 'delete terms in modes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in mountain_passes'.
  $permissions['delete terms in mountain_passes'] = array(
    'name' => 'delete terms in mountain_passes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organizations'.
  $permissions['delete terms in organizations'] = array(
    'name' => 'delete terms in organizations',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in project_phases'.
  $permissions['delete terms in project_phases'] = array(
    'name' => 'delete terms in project_phases',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in protect_category'.
  $permissions['delete terms in protect_category'] = array(
    'name' => 'delete terms in protect_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in regions'.
  $permissions['delete terms in regions'] = array(
    'name' => 'delete terms in regions',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in site_structure'.
  $permissions['delete terms in site_structure'] = array(
    'name' => 'delete terms in site_structure',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in subjects'.
  $permissions['delete terms in subjects'] = array(
    'name' => 'delete terms in subjects',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any advertisements content'.
  $permissions['edit any advertisements content'] = array(
    'name' => 'edit any advertisements content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any auction_parcel content'.
  $permissions['edit any auction_parcel content'] = array(
    'name' => 'edit any auction_parcel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any flexslider_example content'.
  $permissions['edit any flexslider_example content'] = array(
    'name' => 'edit any flexslider_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any funding_table content'.
  $permissions['edit any funding_table content'] = array(
    'name' => 'edit any funding_table content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any news_article content'.
  $permissions['edit any news_article content'] = array(
    'name' => 'edit any news_article content',
    'roles' => array(
      'News Editor' => 'News Editor',
      'Training Editor' => 'Training Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any park_and_ride_lots content'.
  $permissions['edit any park_and_ride_lots content'] = array(
    'name' => 'edit any park_and_ride_lots content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any pin_report content'.
  $permissions['edit any pin_report content'] = array(
    'name' => 'edit any pin_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any plan_sheet content'.
  $permissions['edit any plan_sheet content'] = array(
    'name' => 'edit any plan_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'ER Editor' => 'ER Editor',
      'Ferries Editor' => 'Ferries Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'Rail Editor' => 'Rail Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any publication content'.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      'Research Editor' => 'Research Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any rest_area content'.
  $permissions['edit any rest_area content'] = array(
    'name' => 'edit any rest_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any roadwork content'.
  $permissions['edit any roadwork content'] = array(
    'name' => 'edit any roadwork content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any slideshow content'.
  $permissions['edit any slideshow content'] = array(
    'name' => 'edit any slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any wetland_monitoring_reports content'.
  $permissions['edit any wetland_monitoring_reports content'] = array(
    'name' => 'edit any wetland_monitoring_reports content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own advertisements content'.
  $permissions['edit own advertisements content'] = array(
    'name' => 'edit own advertisements content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own auction_parcel content'.
  $permissions['edit own auction_parcel content'] = array(
    'name' => 'edit own auction_parcel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own flexslider_example content'.
  $permissions['edit own flexslider_example content'] = array(
    'name' => 'edit own flexslider_example content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own funding_table content'.
  $permissions['edit own funding_table content'] = array(
    'name' => 'edit own funding_table content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own news_article content'.
  $permissions['edit own news_article content'] = array(
    'name' => 'edit own news_article content',
    'roles' => array(
      'News Editor' => 'News Editor',
      'Training Editor' => 'Training Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own park_and_ride_lots content'.
  $permissions['edit own park_and_ride_lots content'] = array(
    'name' => 'edit own park_and_ride_lots content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own pin_report content'.
  $permissions['edit own pin_report content'] = array(
    'name' => 'edit own pin_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own plan_sheet content'.
  $permissions['edit own plan_sheet content'] = array(
    'name' => 'edit own plan_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'ER Editor' => 'ER Editor',
      'Ferries Editor' => 'Ferries Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'Rail Editor' => 'Rail Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own publication content'.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      'Research Editor' => 'Research Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own rest_area content'.
  $permissions['edit own rest_area content'] = array(
    'name' => 'edit own rest_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own roadwork content'.
  $permissions['edit own roadwork content'] = array(
    'name' => 'edit own roadwork content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own slideshow content'.
  $permissions['edit own slideshow content'] = array(
    'name' => 'edit own slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit own wetland_monitoring_reports content'.
  $permissions['edit own wetland_monitoring_reports content'] = array(
    'name' => 'edit own wetland_monitoring_reports content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in amenities'.
  $permissions['edit terms in amenities'] = array(
    'name' => 'edit terms in amenities',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cities'.
  $permissions['edit terms in cities'] = array(
    'name' => 'edit terms in cities',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in counties'.
  $permissions['edit terms in counties'] = array(
    'name' => 'edit terms in counties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in funding_types'.
  $permissions['edit terms in funding_types'] = array(
    'name' => 'edit terms in funding_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in highways'.
  $permissions['edit terms in highways'] = array(
    'name' => 'edit terms in highways',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in modes'.
  $permissions['edit terms in modes'] = array(
    'name' => 'edit terms in modes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in mountain_passes'.
  $permissions['edit terms in mountain_passes'] = array(
    'name' => 'edit terms in mountain_passes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organizations'.
  $permissions['edit terms in organizations'] = array(
    'name' => 'edit terms in organizations',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in project_phases'.
  $permissions['edit terms in project_phases'] = array(
    'name' => 'edit terms in project_phases',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in protect_category'.
  $permissions['edit terms in protect_category'] = array(
    'name' => 'edit terms in protect_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in regions'.
  $permissions['edit terms in regions'] = array(
    'name' => 'edit terms in regions',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in site_structure'.
  $permissions['edit terms in site_structure'] = array(
    'name' => 'edit terms in site_structure',
    'roles' => array(
      'ER Editor' => 'ER Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in subjects'.
  $permissions['edit terms in subjects'] = array(
    'name' => 'edit terms in subjects',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'force password change'.
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import users'.
  $permissions['import users'] = array(
    'name' => 'import users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user_import',
  );

  // Exported permission: 'import wsdot_public_default_import feeds'.
  $permissions['import wsdot_public_default_import feeds'] = array(
    'name' => 'import wsdot_public_default_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import wsdot_public_newsitem_import feeds'.
  $permissions['import wsdot_public_newsitem_import feeds'] = array(
    'name' => 'import wsdot_public_newsitem_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import wsdot_public_project_funding_table_import feeds'.
  $permissions['import wsdot_public_project_funding_table_import feeds'] = array(
    'name' => 'import wsdot_public_project_funding_table_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import wsdot_public_project_import feeds'.
  $permissions['import wsdot_public_project_import feeds'] = array(
    'name' => 'import wsdot_public_project_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import wsdot_public_project_pin_report_import feeds'.
  $permissions['import wsdot_public_project_pin_report_import feeds'] = array(
    'name' => 'import wsdot_public_project_pin_report_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import wsdot_public_projectspecifics_import feeds'.
  $permissions['import wsdot_public_projectspecifics_import feeds'] = array(
    'name' => 'import wsdot_public_projectspecifics_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'limited user import'.
  $permissions['limited user import'] = array(
    'name' => 'limited user import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user_import',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_moderation to draft'.
  $permissions['moderate content from needs_moderation to draft'] = array(
    'name' => 'moderate content from needs_moderation to draft',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_moderation to published'.
  $permissions['moderate content from needs_moderation to published'] = array(
    'name' => 'moderate content from needs_moderation to published',
    'roles' => array(
      'Environment Editor' => 'Environment Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to needs_moderation'.
  $permissions['moderate content from needs_review to needs_moderation'] = array(
    'name' => 'moderate content from needs_review to needs_moderation',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'preview focal point'.
  $permissions['preview focal point'] = array(
    'name' => 'preview focal point',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'focal_point',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule publishing of nodes'.
  $permissions['schedule publishing of nodes'] = array(
    'name' => 'schedule publishing of nodes',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'tamper wsdot_public_default_import'.
  $permissions['tamper wsdot_public_default_import'] = array(
    'name' => 'tamper wsdot_public_default_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper wsdot_public_newsitem_import'.
  $permissions['tamper wsdot_public_newsitem_import'] = array(
    'name' => 'tamper wsdot_public_newsitem_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper wsdot_public_project_funding_table_import'.
  $permissions['tamper wsdot_public_project_funding_table_import'] = array(
    'name' => 'tamper wsdot_public_project_funding_table_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper wsdot_public_project_import'.
  $permissions['tamper wsdot_public_project_import'] = array(
    'name' => 'tamper wsdot_public_project_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper wsdot_public_project_pin_report_import'.
  $permissions['tamper wsdot_public_project_pin_report_import'] = array(
    'name' => 'tamper wsdot_public_project_pin_report_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper wsdot_public_projectspecifics_import'.
  $permissions['tamper wsdot_public_projectspecifics_import'] = array(
    'name' => 'tamper wsdot_public_projectspecifics_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unblock expired accounts'.
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: 'unlock wsdot_public_default_import feeds'.
  $permissions['unlock wsdot_public_default_import feeds'] = array(
    'name' => 'unlock wsdot_public_default_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock wsdot_public_newsitem_import feeds'.
  $permissions['unlock wsdot_public_newsitem_import feeds'] = array(
    'name' => 'unlock wsdot_public_newsitem_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock wsdot_public_project_funding_table_import feeds'.
  $permissions['unlock wsdot_public_project_funding_table_import feeds'] = array(
    'name' => 'unlock wsdot_public_project_funding_table_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock wsdot_public_project_import feeds'.
  $permissions['unlock wsdot_public_project_import feeds'] = array(
    'name' => 'unlock wsdot_public_project_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock wsdot_public_project_pin_report_import feeds'.
  $permissions['unlock wsdot_public_project_pin_report_import feeds'] = array(
    'name' => 'unlock wsdot_public_project_pin_report_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock wsdot_public_projectspecifics_import feeds'.
  $permissions['unlock wsdot_public_projectspecifics_import feeds'] = array(
    'name' => 'unlock wsdot_public_projectspecifics_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'ER Editor' => 'ER Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'OR Editor' => 'OR Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format wysiwyg'.
  $permissions['use text format wysiwyg'] = array(
    'name' => 'use text format wysiwyg',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_media add form'.
  $permissions['use workbench_media add form'] = array(
    'name' => 'use workbench_media add form',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_media',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view workbench access information'.
  $permissions['view workbench access information'] = array(
    'name' => 'view workbench access information',
    'roles' => array(
      'Asset Editor' => 'Asset Editor',
      'Business Editor' => 'Business Editor',
      'ER Editor' => 'ER Editor',
      'Employment Editor' => 'Employment Editor',
      'Environment Editor' => 'Environment Editor',
      'Equal Opportunity Editor' => 'Equal Opportunity Editor',
      'Ferries Editor' => 'Ferries Editor',
      'Finance Editor' => 'Finance Editor',
      'Good To Go Editor' => 'Good To Go Editor',
      'HQ Communication Editor' => 'HQ Communication Editor',
      'NC Editor' => 'NC Editor',
      'NW Editor' => 'NW Editor',
      'News Editor' => 'News Editor',
      'OR Editor' => 'OR Editor',
      'Planning Author' => 'Planning Author',
      'Planning Editor' => 'Planning Editor',
      'Policy Editor' => 'Policy Editor',
      'Rail Editor' => 'Rail Editor',
      'Research Editor' => 'Research Editor',
      'SC Editor' => 'SC Editor',
      'SW Editor' => 'SW Editor',
      'Tolling Editor' => 'Tolling Editor',
      'Traffic Editor' => 'Traffic Editor',
      'Training Editor' => 'Training Editor',
      'Transit Editor' => 'Transit Editor',
      'Tribal Editor' => 'Tribal Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: 'view workbench taxonomy pages'.
  $permissions['view workbench taxonomy pages'] = array(
    'name' => 'view workbench taxonomy pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  return $permissions;
}
