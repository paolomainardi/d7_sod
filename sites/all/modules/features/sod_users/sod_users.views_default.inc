<?php
/**
 * @file
 * sod_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sod_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sod_users_user_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mappa community';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
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
  /* Criterio del filtro: Profilo: Tag con cui ti identifichi  (field_profile_keywords) */
  $handler->display->display_options['filters']['field_profile_keywords_tid']['id'] = 'field_profile_keywords_tid';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['table'] = 'field_data_field_profile_keywords';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['field'] = 'field_profile_keywords_tid';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['value'] = '';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['operator_id'] = 'field_profile_keywords_tid_op';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['label'] = 'Parole chiave';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['operator'] = 'field_profile_keywords_tid_op';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_profile_keywords_tid']['vocabulary'] = 'user_interest_tags';
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

  /* Display: User search page */
  $handler = $view->new_display('page', 'User search page', 'page_community');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'community/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Lista';
  $handler->display->display_options['menu']['description'] = 'Community italiana OD';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Community';
  $handler->display->display_options['tab_options']['description'] = 'Community utenti';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: User map (ip_geoloc) */
  $handler = $view->new_display('page', 'User map (ip_geoloc)', 'community_map');
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
  $handler->display->display_options['style_options']['map_height'] = '600';
  $handler->display->display_options['style_options']['cluster_radius'] = '80';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'nothing';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '18';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '2';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'community/map';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Mappa';
  $handler->display->display_options['menu']['description'] = 'Mappa utenti';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['sod_users_user_search'] = array(
    t('Master'),
    t('Mappa community'),
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
    t('Nessun utente trovato con questi criteri di ricerca.'),
    t('Profilo'),
    t('Testo personalizzato'),
    t('[name] <br>
[field_profile_avatar_1] '),
    t('Parole chiave'),
    t('Provincia'),
    t('Categoria'),
    t('User search page'),
    t('User map (ip_geoloc)'),
  );
  $export['sod_users_user_search'] = $view;

  return $export;
}
