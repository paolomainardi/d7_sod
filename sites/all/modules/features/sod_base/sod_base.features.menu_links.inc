<?php
/**
 * @file
 * sod_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sod_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: devel_devel-settings:devel/settings
  $menu_links['devel_devel-settings:devel/settings'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/settings',
    'router_path' => 'devel/settings',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/twinbit/works/sod/site/it/admin/structure/block">block administration</a> page.',
      ),
      'identifier' => 'devel_devel-settings:devel/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_variable-editor:devel/variable
  $menu_links['devel_variable-editor:devel/variable'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/variable',
    'router_path' => 'devel/variable',
    'link_title' => 'Variable editor',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit and delete site variables.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_variable-editor:devel/variable',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_aiuto:node/4
  $menu_links['main-menu_aiuto:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Aiuto',
    'options' => array(
      'identifier' => 'main-menu_aiuto:node/4',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_la-memoria:node/3
  $menu_links['main-menu_la-memoria:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'La memoria',
    'options' => array(
      'identifier' => 'main-menu_la-memoria:node/3',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_strumenti:node/2
  $menu_links['main-menu_strumenti:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Strumenti',
    'options' => array(
      'identifier' => 'main-menu_strumenti:node/2',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_basic-page:node/add/page
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_basic-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_aggiungi-contenuto:node/add',
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
    'parent_identifier' => 'navigation_aggiungi-contenuto:node/add',
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
    'weight' => 0,
    'customized' => 0,
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
    'weight' => 0,
    'customized' => 0,
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
    'weight' => 0,
    'customized' => 0,
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
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_dati:node/add/data
  $menu_links['navigation_dati:node/add/data'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/data',
    'router_path' => 'node/add/data',
    'link_title' => 'Dati',
    'options' => array(
      'attributes' => array(
        'title' => 'Opendata Content type',
      ),
      'identifier' => 'navigation_dati:node/add/data',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_aggiungi-contenuto:node/add',
  );
  // Exported menu link: navigation_documento:node/add/documento
  $menu_links['navigation_documento:node/add/documento'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/documento',
    'router_path' => 'node/add/documento',
    'link_title' => 'Documento',
    'options' => array(
      'attributes' => array(
        'title' => 'Documento',
      ),
      'identifier' => 'navigation_documento:node/add/documento',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_aggiungi-contenuto:node/add',
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
    'weight' => 5,
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
    'weight' => 0,
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
    'weight' => 0,
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
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_iscrizione-al-raduno-sod:node/add/iscrizione-raduno-sod
  $menu_links['navigation_iscrizione-al-raduno-sod:node/add/iscrizione-raduno-sod'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/iscrizione-raduno-sod',
    'router_path' => 'node/add/iscrizione-raduno-sod',
    'link_title' => 'Iscrizione al raduno SOD',
    'options' => array(
      'identifier' => 'navigation_iscrizione-al-raduno-sod:node/add/iscrizione-raduno-sod',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_aggiungi-contenuto:node/add',
  );
  // Exported menu link: navigation_my-blog:blog/%
  $menu_links['navigation_my-blog:blog/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'blog/%',
    'router_path' => 'blog/%',
    'link_title' => 'My blog',
    'options' => array(
      'identifier' => 'navigation_my-blog:blog/%',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_blog:blog',
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
    'weight' => 0,
    'customized' => 0,
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
    'parent_identifier' => 'navigation_aggregatore-di-feed:aggregator',
  );
  // Exported menu link: navigation_tool:node/add/strumento
  $menu_links['navigation_tool:node/add/strumento'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/strumento',
    'router_path' => 'node/add/strumento',
    'link_title' => 'Tool',
    'options' => array(
      'attributes' => array(
        'title' => 'Opendata manipulation software',
      ),
      'identifier' => 'navigation_tool:node/add/strumento',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_aggiungi-contenuto:node/add',
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
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_webform:node/add/webform
  $menu_links['navigation_webform:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
      'identifier' => 'navigation_webform:node/add/webform',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_aggiungi-contenuto:node/add',
  );
  // Exported menu link: navigation_working-group:node/add/working-group
  $menu_links['navigation_working-group:node/add/working-group'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/working-group',
    'router_path' => 'node/add/working-group',
    'link_title' => 'Working group',
    'options' => array(
      'attributes' => array(
        'title' => 'Working group',
      ),
      'identifier' => 'navigation_working-group:node/add/working-group',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_aggiungi-contenuto:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Aiuto');
  t('Basic page');
  t('Blog');
  t('Blog post');
  t('Blogs');
  t('Books');
  t('Compose tips');
  t('Contact');
  t('Dati');
  t('Devel settings');
  t('Documento');
  t('Feed aggregator');
  t('Import');
  t('Import core RDF vocabularies');
  t('Import external RDF vocabulary');
  t('Iscrizione al raduno SOD');
  t('La memoria');
  t('My blog');
  t('Search');
  t('Sources');
  t('Strumenti');
  t('Tool');
  t('Translate strings');
  t('Variable editor');
  t('Webform');
  t('Working group');


  return $menu_links;
}
