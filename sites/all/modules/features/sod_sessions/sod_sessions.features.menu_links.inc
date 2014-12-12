<?php
/**
 * @file
 * sod_sessions.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sod_sessions_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-sod14_le-mie-proposte-inviate:sod14/sessioni/my
  $menu_links['menu-sod14_le-mie-proposte-inviate:sod14/sessioni/my'] = array(
    'menu_name' => 'menu-sod14',
    'link_path' => 'sod14/sessioni/my',
    'router_path' => 'sod14/sessioni',
    'link_title' => 'Le mie proposte inviate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-sod14_le-mie-proposte-inviate:sod14/sessioni/my',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-sod14_le-sessioni-a-cui-partecipo:sod14/sessioni/iscrizioni
  $menu_links['menu-sod14_le-sessioni-a-cui-partecipo:sod14/sessioni/iscrizioni'] = array(
    'menu_name' => 'menu-sod14',
    'link_path' => 'sod14/sessioni/iscrizioni',
    'router_path' => 'sod14/sessioni',
    'link_title' => 'Le sessioni a cui partecipo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-sod14_le-sessioni-a-cui-partecipo:sod14/sessioni/iscrizioni',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-sod14_vedi-tutte-le-sessioni:sod14/sessioni
  $menu_links['menu-sod14_vedi-tutte-le-sessioni:sod14/sessioni'] = array(
    'menu_name' => 'menu-sod14',
    'link_path' => 'sod14/sessioni',
    'router_path' => 'sod14/sessioni',
    'link_title' => 'Vedi tutte le sessioni',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-sod14_vedi-tutte-le-sessioni:sod14/sessioni',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Le mie proposte inviate');
  t('Le sessioni a cui partecipo');
  t('Vedi tutte le sessioni');


  return $menu_links;
}
