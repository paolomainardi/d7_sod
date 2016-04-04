<?php
/**
 * @file
 * sod_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sod_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  return $permissions;
}
