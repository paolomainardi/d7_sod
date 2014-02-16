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
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: navigation_session:node/add/session
  $menu_links['navigation_session:node/add/session'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/session',
    'router_path' => 'node/add/session',
    'link_title' => 'Session',
    'options' => array(
      'attributes' => array(
        'title' => 'Form di caricamento proposte per il raduno SOD14',
      ),
      'identifier' => 'navigation_session:node/add/session',
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
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'parent_identifier' => 'navigation_add-content:node/add',
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
    'parent_identifier' => 'navigation_add-content:node/add',
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
      'alter' => FALSE,
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
  t('Add content');
  t('Basic page');
  t('Blog post');
  t('Blogs');
  t('Books');
  t('Compose tips');
  t('Contact');
  t('Dati');
  t('Documento');
  t('Feed aggregator');
  t('Il mio account');
  t('Import');
  t('Import core RDF vocabularies');
  t('Import external RDF vocabulary');
  t('Iscrizione al raduno SOD');
  t('Modifica il mio profilo');
  t('My blog');
  t('Search');
  t('Session');
  t('Sources');
  t('Tool');
  t('Translate strings');
  t('Webform');
  t('Working group');


  return $menu_links;
}
