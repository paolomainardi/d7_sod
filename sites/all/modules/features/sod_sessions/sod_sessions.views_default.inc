<?php
/**
 * @file
 * sod_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sod_sessions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'le_mie_proposte';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Le mie proposte';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Le mie proposte';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'state' => 'state',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Non hai ancora inviato una proposta.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contestuale: Contenuto: Identificativo uid dell'autore */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'sod14/sessioni/my';
  $translatables['le_mie_proposte'] = array(
    t('Master'),
    t('Le mie proposte'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('Non hai ancora inviato una proposta.'),
    t('Titolo'),
    t('Tutti'),
    t('Page'),
  );
  $export['le_mie_proposte'] = $view;

  $view = new view();
  $view->name = 'sessioni_a_cui_partecipo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessioni a cui partecipo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessioni a cui partecipo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Non sei iscritto ancora a nessuna sessione, <?php print l(\'clicca qui per visualizzarle tutte\', \'sod14/sessioni\') ?>.';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Relazione: Flags: partecipo */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'partecipo';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Azioni';
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'sod14/sessioni/iscrizioni';
  $translatables['sessioni_a_cui_partecipo'] = array(
    t('Master'),
    t('Sessioni a cui partecipo'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('Non sei iscritto ancora a nessuna sessione, <?php print l(\'clicca qui per visualizzarle tutte\', \'sod14/sessioni\') ?>.'),
    t('flag'),
    t('Titolo'),
    t('Azioni'),
    t('Page'),
  );
  $export['sessioni_a_cui_partecipo'] = $view;

  $view = new view();
  $view->name = 'sessioni_sod14';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessioni sod14';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SOD14 - Sessioni';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'title' => 'title',
    'field_livello_di_difficolta' => 'field_livello_di_difficolta',
    'path' => 'path',
    'count' => 'count',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_livello_di_difficolta' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relazione: Flags: partecipo */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'partecipo';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relazione: Flags: partecipo counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'partecipo';
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Autore';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Livello di difficoltà */
  $handler->display->display_options['fields']['field_livello_di_difficolta']['id'] = 'field_livello_di_difficolta';
  $handler->display->display_options['fields']['field_livello_di_difficolta']['table'] = 'field_data_field_livello_di_difficolta';
  $handler->display->display_options['fields']['field_livello_di_difficolta']['field'] = 'field_livello_di_difficolta';
  $handler->display->display_options['fields']['field_livello_di_difficolta']['label'] = 'Livello';
  $handler->display->display_options['fields']['field_livello_di_difficolta']['empty'] = '-';
  $handler->display->display_options['fields']['field_livello_di_difficolta']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Campo: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Partecipanti';
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['text'] = '<a href="[path]" title="Vedi i partecipanti"> [count] </a>';
  /* Campo: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Azioni';
  $handler->display->display_options['fields']['ops']['empty'] = 'Autenticati per iscriverti';
  /* Campo: Contenuto: Tipo di attività */
  $handler->display->display_options['fields']['field_tipo_di_attivit_']['id'] = 'field_tipo_di_attivit_';
  $handler->display->display_options['fields']['field_tipo_di_attivit_']['table'] = 'field_data_field_tipo_di_attivit_';
  $handler->display->display_options['fields']['field_tipo_di_attivit_']['field'] = 'field_tipo_di_attivit_';
  $handler->display->display_options['fields']['field_tipo_di_attivit_']['label'] = 'Giornata';
  /* Criterio di ordinamento: Contenuto: Tipo di attività (field_tipo_di_attivit_) */
  $handler->display->display_options['sorts']['field_tipo_di_attivit__tid']['id'] = 'field_tipo_di_attivit__tid';
  $handler->display->display_options['sorts']['field_tipo_di_attivit__tid']['table'] = 'field_data_field_tipo_di_attivit_';
  $handler->display->display_options['sorts']['field_tipo_di_attivit__tid']['field'] = 'field_tipo_di_attivit__tid';
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );

  /* Display: Page - Lista sessioni */
  $handler = $view->new_display('page', 'Page - Lista sessioni', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'sod14/sessioni';
  $translatables['sessioni_sod14'] = array(
    t('Master'),
    t('SOD14 - Sessioni'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('autore'),
    t('flag'),
    t('counter'),
    t('Autore'),
    t('Titolo'),
    t('Livello'),
    t('-'),
    t('Partecipanti'),
    t('<a href="[path]" title="Vedi i partecipanti"> [count] </a>'),
    t('.'),
    t(','),
    t('Azioni'),
    t('Autenticati per iscriverti'),
    t('Giornata'),
    t('Page - Lista sessioni'),
  );
  $export['sessioni_sod14'] = $view;

  $view = new view();
  $view->name = 'sessions_lista_partecipanti';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Sessions lista partecipanti';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lista partecipanti';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessun utente ha ancora confermato la partecipazione a questa sessione.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relazione: Flags: User's flaggings */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'partecipo';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Campo: Profilo: Avatar */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Criterio di ordinamento: Utente: Data creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contestuale: Flags: ID contenuto */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'flagging';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['relationship'] = 'flag_user_content_rel';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entity_id']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'session',
  );
  $handler->display->display_options['argument_mode'] = 'none';
  $handler->display->display_options['show_title'] = 1;
  $translatables['sessions_lista_partecipanti'] = array(
    t('Master'),
    t('Lista partecipanti'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('Nessun utente ha ancora confermato la partecipazione a questa sessione.'),
    t('user flagged content'),
    t('Profilo'),
    t('Tutti'),
    t('EVA Field'),
  );
  $export['sessions_lista_partecipanti'] = $view;

  $view = new view();
  $view->name = 'sod14_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'sod14_users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Chi viene a SOD14';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Intestazione: Globale: Riassunto del risultato */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total persone partecipano a SOD14. <a href = "/blog/mara-cinquepalmi/sod14-come-iscriversi-e-come-partecipare">Partecipa anche tu</a>. ';
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessun utente trovato con questi criteri di ricerca.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Profilo: Avatar */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'avatar_thumb_small',
    'image_link' => 'content',
  );
  /* Campo: Profilo: Geocode */
  $handler->display->display_options['fields']['field_profile_geocode']['id'] = 'field_profile_geocode';
  $handler->display->display_options['fields']['field_profile_geocode']['table'] = 'field_data_field_profile_geocode';
  $handler->display->display_options['fields']['field_profile_geocode']['field'] = 'field_profile_geocode';
  $handler->display->display_options['fields']['field_profile_geocode']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_geocode']['label'] = '';
  $handler->display->display_options['fields']['field_profile_geocode']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_geocode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_geocode']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_profile_geocode']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_profile_geocode']['delta_offset'] = '0';
  /* Campo: Profilo: Avatar */
  $handler->display->display_options['fields']['field_profile_avatar_1']['id'] = 'field_profile_avatar_1';
  $handler->display->display_options['fields']['field_profile_avatar_1']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar_1']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar_1']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar_1']['settings'] = array(
    'image_style' => 'avatar_thumb_small',
    'image_link' => 'content',
  );
  /* Campo: Globale: Testo personalizzato */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[name] <br>
[field_profile_avatar_1] ';
  /* Criterio di ordinamento: Utente: Data creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Profilo: Citta di cui mi interesso - Area amministrativa (Provincia/stato) */
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['id'] = 'field_profiles_address_citta_administrative_area';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['table'] = 'field_data_field_profiles_address_citta';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['field'] = 'field_profiles_address_citta_administrative_area';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['operator_id'] = 'field_profiles_address_citta_administrative_area_op';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['label'] = 'Provincia';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['operator'] = 'field_profiles_address_citta_administrative_area_op';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['identifier'] = 'provincia';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Criterio del filtro: Profilo: Comunità di appartenenza (field_profile_comunita_appartene) */
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['id'] = 'field_profile_comunita_appartene_value';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['table'] = 'field_data_field_profile_comunita_appartene';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['field'] = 'field_profile_comunita_appartene_value';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['operator_id'] = 'field_profile_comunita_appartene_value_op';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['label'] = 'Categoria';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['operator'] = 'field_profile_comunita_appartene_value_op';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['identifier'] = 'appartenenza';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Criterio del filtro: Profilo: Pubblicazione dei dati (field_profile_extra_consenso) */
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['id'] = 'field_profile_extra_consenso_value';
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['table'] = 'field_data_field_profile_extra_consenso';
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['field'] = 'field_profile_extra_consenso_value';
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['group'] = 1;
  /* Criterio del filtro: Profilo: Partecipo a SOD14! (field__b_partecipo_a_sod14_b_) */
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['id'] = 'field__b_partecipo_a_sod14_b__value';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['table'] = 'field_data_field__b_partecipo_a_sod14_b_';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['field'] = 'field__b_partecipo_a_sod14_b__value';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['group'] = 1;
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['operator_id'] = 'field__b_partecipo_a_sod14_b__value_op';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['label'] = 'Partecipo a SOD14';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['operator'] = 'field__b_partecipo_a_sod14_b__value_op';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['identifier'] = 'sod14';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Criterio del filtro: Utente: Consenso al trattamento dei dati (field_user_privacy_polici) */
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['id'] = 'field_user_privacy_polici_value';
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['table'] = 'field_data_field_user_privacy_polici';
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['field'] = 'field_user_privacy_polici_value';
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['group'] = 1;

  /* Display: SOD14 User list */
  $handler = $view->new_display('page', 'SOD14 User list', 'sod14_user_list');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'sod14/iscritti/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Lista';
  $handler->display->display_options['menu']['description'] = 'Chi viene a SOD14';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Chi viene a SOD14';
  $handler->display->display_options['tab_options']['description'] = 'Chi viene a SOD14';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: SOD14 User map */
  $handler = $view->new_display('page', 'SOD14 User map', 'sod14_user_map');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = 'field_profile_geocode';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = 'field_profile_geocode';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['map'] = 'mapbox-tmcw';
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['cluster_radius'] = '80';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'nothing';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '17';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '2';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '0';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Intestazione: Globale: Riassunto del risultato */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Profilo: Citta di cui mi interesso - Area amministrativa (Provincia/stato) */
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['id'] = 'field_profiles_address_citta_administrative_area';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['table'] = 'field_data_field_profiles_address_citta';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['field'] = 'field_profiles_address_citta_administrative_area';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['operator_id'] = 'field_profiles_address_citta_administrative_area_op';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['label'] = 'Provincia';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['operator'] = 'field_profiles_address_citta_administrative_area_op';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['identifier'] = 'provincia';
  $handler->display->display_options['filters']['field_profiles_address_citta_administrative_area']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Criterio del filtro: Profilo: Comunità di appartenenza (field_profile_comunita_appartene) */
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['id'] = 'field_profile_comunita_appartene_value';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['table'] = 'field_data_field_profile_comunita_appartene';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['field'] = 'field_profile_comunita_appartene_value';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['operator_id'] = 'field_profile_comunita_appartene_value_op';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['label'] = 'Categoria';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['operator'] = 'field_profile_comunita_appartene_value_op';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['identifier'] = 'appartenenza';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Criterio del filtro: Profilo: Pubblicazione dei dati (field_profile_extra_consenso) */
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['id'] = 'field_profile_extra_consenso_value';
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['table'] = 'field_data_field_profile_extra_consenso';
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['field'] = 'field_profile_extra_consenso_value';
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_profile_extra_consenso_value']['group'] = 1;
  /* Criterio del filtro: Utente: Consenso al trattamento dei dati (field_user_privacy_polici) */
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['id'] = 'field_user_privacy_polici_value';
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['table'] = 'field_data_field_user_privacy_polici';
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['field'] = 'field_user_privacy_polici_value';
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_user_privacy_polici_value']['group'] = 1;
  /* Criterio del filtro: Profilo: Geocode (field_profile_geocode:lat) */
  $handler->display->display_options['filters']['field_profile_geocode_lat']['id'] = 'field_profile_geocode_lat';
  $handler->display->display_options['filters']['field_profile_geocode_lat']['table'] = 'field_data_field_profile_geocode';
  $handler->display->display_options['filters']['field_profile_geocode_lat']['field'] = 'field_profile_geocode_lat';
  $handler->display->display_options['filters']['field_profile_geocode_lat']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profile_geocode_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_profile_geocode_lat']['group'] = 1;
  /* Criterio del filtro: Profilo: Partecipo a SOD14! (field__b_partecipo_a_sod14_b_) */
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['id'] = 'field__b_partecipo_a_sod14_b__value';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['table'] = 'field_data_field__b_partecipo_a_sod14_b_';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['field'] = 'field__b_partecipo_a_sod14_b__value';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['group'] = 1;
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['operator_id'] = 'field__b_partecipo_a_sod14_b__value_op';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['label'] = 'Partecipo a SOD14';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['operator'] = 'field__b_partecipo_a_sod14_b__value_op';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['identifier'] = 'sod14';
  $handler->display->display_options['filters']['field__b_partecipo_a_sod14_b__value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'sod14/iscritti/map';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Mappa';
  $handler->display->display_options['menu']['description'] = 'Mappa utenti sod14';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['sod14_users'] = array(
    t('Master'),
    t('Chi viene a SOD14'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('@total persone partecipano a SOD14. <a href = "/blog/mara-cinquepalmi/sod14-come-iscriversi-e-come-partecipare">Partecipa anche tu</a>. '),
    t('Nessun utente trovato con questi criteri di ricerca.'),
    t('Profilo'),
    t('Testo personalizzato'),
    t('[name] <br>
[field_profile_avatar_1] '),
    t('Provincia'),
    t('Categoria'),
    t('Partecipo a SOD14'),
    t('SOD14 User list'),
    t('SOD14 User map'),
  );
  $export['sod14_users'] = $view;

  return $export;
}
