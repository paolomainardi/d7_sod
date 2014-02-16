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

  // Exported menu link: user-menu_il-mio-account:user
  $menu_links['user-menu_il-mio-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Il mio account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_il-mio-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_invia-una-proposta-per-sod14:node/add/session
  $menu_links['user-menu_invia-una-proposta-per-sod14:node/add/session'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/session',
    'router_path' => 'node/add/session',
    'link_title' => 'Invia una proposta per SOD14',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_invia-una-proposta-per-sod14:node/add/session',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_le-mie-proposte-inviate:my-sessions
  $menu_links['user-menu_le-mie-proposte-inviate:my-sessions'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'my-sessions',
    'router_path' => 'my-sessions',
    'link_title' => 'Le mie proposte inviate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_le-mie-proposte-inviate:my-sessions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
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
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: user-menu_modifica-il-mio-profilo:menutoken/5300fb4f419d9
  $menu_links['user-menu_modifica-il-mio-profilo:menutoken/5300fb4f419d9'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/5300fb4f419d9',
    'router_path' => 'menutoken/%',
    'link_title' => 'Modifica il mio profilo',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]/edit/main',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/5300fb4f419d9',
      'identifier' => 'user-menu_modifica-il-mio-profilo:menutoken/5300fb4f419d9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Il mio account');
  t('Invia una proposta per SOD14');
  t('Le mie proposte inviate');
  t('Log out');
  t('Modifica il mio profilo');


  return $menu_links;
}
