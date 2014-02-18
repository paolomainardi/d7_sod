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

  // Exported menu link: navigation_:l10n_client/save
  $menu_links['navigation_:l10n_client/save'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'l10n_client/save',
    'router_path' => 'l10n_client/save',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:l10n_client/save',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: navigation_add-content:node/add
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: navigation_blog-post:node/add/blog
  $menu_links['navigation_blog-post:node/add/blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog post',
    'options' => array(
      'attributes' => array(
        'title' => 'Use for multi-user blogs. Every user gets a personal blog.',
      ),
      'identifier' => 'navigation_blog-post:node/add/blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_blogs:blog
  $menu_links['navigation_blogs:blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(
      'identifier' => 'navigation_blogs:blog',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: navigation_books:book
  $menu_links['navigation_books:book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Books',
    'options' => array(
      'identifier' => 'navigation_books:book',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: navigation_contact:contact
  $menu_links['navigation_contact:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'navigation_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: navigation_feed-aggregator:aggregator
  $menu_links['navigation_feed-aggregator:aggregator'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'aggregator',
    'router_path' => 'aggregator',
    'link_title' => 'Feed aggregator',
    'options' => array(
      'identifier' => 'navigation_feed-aggregator:aggregator',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  // Exported menu link: navigation_import-core-rdf-vocabularies:evoc/import_core
  $menu_links['navigation_import-core-rdf-vocabularies:evoc/import_core'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'evoc/import_core',
    'router_path' => 'evoc/import_core',
    'link_title' => 'Import core RDF vocabularies',
    'options' => array(
      'attributes' => array(
        'title' => 'Perform a batch import of the vocabularies used by core.',
      ),
      'identifier' => 'navigation_import-core-rdf-vocabularies:evoc/import_core',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: navigation_import-external-rdf-vocabulary:evoc/import
  $menu_links['navigation_import-external-rdf-vocabulary:evoc/import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'evoc/import',
    'router_path' => 'evoc/import',
    'link_title' => 'Import external RDF vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => 'Import RDF terms of an external vocabulary.',
      ),
      'identifier' => 'navigation_import-external-rdf-vocabulary:evoc/import',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: navigation_import:import
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: navigation_search:search
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: navigation_sources:aggregator/sources
  $menu_links['navigation_sources:aggregator/sources'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'aggregator/sources',
    'router_path' => 'aggregator/sources',
    'link_title' => 'Sources',
    'options' => array(
      'identifier' => 'navigation_sources:aggregator/sources',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_feed-aggregator:aggregator',
  );
  // Exported menu link: navigation_translate-strings:locale
  $menu_links['navigation_translate-strings:locale'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'locale',
    'router_path' => 'locale',
    'link_title' => 'Translate strings',
    'options' => array(
      'identifier' => 'navigation_translate-strings:locale',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Blog post');
  t('Blogs');
  t('Books');
  t('Compose tips');
  t('Contact');
  t('Feed aggregator');
  t('Il mio account');
  t('Import');
  t('Import core RDF vocabularies');
  t('Import external RDF vocabulary');
  t('Search');
  t('Sources');
  t('Translate strings');


  return $menu_links;
}
