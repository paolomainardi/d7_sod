<?php
/**
 * @file
 * sod_sessions.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function sod_sessions_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sod14.
  $menus['menu-sod14'] = array(
    'menu_name' => 'menu-sod14',
    'title' => 'Raduno 2017',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Raduno 2017');


  return $menus;
}
