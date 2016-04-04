<?php
/**
 * @file
 * sod_working_group.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function sod_working_group_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:working_group:add user'
  $permissions['node:working_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:working_group:administer group'
  $permissions['node:working_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:working_group:approve and deny subscription'
  $permissions['node:working_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:working_group:create documento content'
  $permissions['node:working_group:create documento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:working_group:delete any documento content'
  $permissions['node:working_group:delete any documento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:working_group:delete own documento content'
  $permissions['node:working_group:delete own documento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:working_group:manage members'
  $permissions['node:working_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:working_group:manage permissions'
  $permissions['node:working_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:working_group:manage roles'
  $permissions['node:working_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:working_group:subscribe'
  $permissions['node:working_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:working_group:subscribe without approval'
  $permissions['node:working_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:working_group:unsubscribe'
  $permissions['node:working_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:working_group:update any documento content'
  $permissions['node:working_group:update any documento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:working_group:update group'
  $permissions['node:working_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:working_group:update own documento content'
  $permissions['node:working_group:update own documento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
