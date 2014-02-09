<?php
/**
 * @file
 * sod_users.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sod_users_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_modifica-il-mio-profilo:menutoken/52f7ea122eb8c
  $menu_links['user-menu_modifica-il-mio-profilo:menutoken/52f7ea122eb8c'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/52f7ea122eb8c',
    'router_path' => 'menutoken/%',
    'link_title' => 'Modifica il mio profilo',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/edit',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_modifica-il-mio-profilo:menutoken/52f7ea122eb8c',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Log out');
  t('Modifica il mio profilo');
  t('User account');


  return $menu_links;
}
