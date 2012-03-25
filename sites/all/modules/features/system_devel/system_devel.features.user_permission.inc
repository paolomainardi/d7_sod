<?php
/**
 * @file
 * system_devel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function system_devel_user_default_permissions() {
  $permissions = array();

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
  );

  // Exported permission: administer masquerade
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(),
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
  );

  // Exported permission: masquerade as admin
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(),
  );

  // Exported permission: masquerade as user
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(),
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
  );

  return $permissions;
}
