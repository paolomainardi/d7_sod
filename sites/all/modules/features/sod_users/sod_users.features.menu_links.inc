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

  // Exported menu link: main-menu_community:community
  $menu_links['main-menu_community:community'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community',
    'router_path' => 'community',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => 'Community utenti',
      ),
      'identifier' => 'main-menu_community:community',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Community');


  return $menu_links;
}
