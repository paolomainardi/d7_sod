<?php
/**
 * @file
 * opendata_ctypes.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function opendata_ctypes_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_dati:node/1
  $menu_links['main-menu_dati:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Dati',
    'options' => array(
      'attributes' => array(),
      'node_type' => 'page',
      'identifier' => 'main-menu_dati:node/1',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_richiedi-dati:node/5
  $menu_links['main-menu_richiedi-dati:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Richiedi dati',
    'options' => array(
      'identifier' => 'main-menu_richiedi-dati:node/5',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dati:node/1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Dati');
  t('Richiedi dati');


  return $menu_links;
}
