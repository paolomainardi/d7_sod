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
  $handler->display->display_options['title'] = 'Community';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessun utente trovato con questi criteri di ricerca.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'Profilo';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Avatar */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Profile: Tag con cui ti identifichi  (field_profile_keywords) */
  $handler->display->display_options['filters']['field_profile_keywords_tid']['id'] = 'field_profile_keywords_tid';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['table'] = 'field_data_field_profile_keywords';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['field'] = 'field_profile_keywords_tid';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['value'] = '';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['operator_id'] = 'field_profile_keywords_tid_op';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['operator'] = 'field_profile_keywords_tid_op';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['field_profile_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_profile_keywords_tid']['vocabulary'] = 'user_interest_tags';
  /* Filter criterion: Profile: Citta di cui mi interesso - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['id'] = 'field_profiles_address_citta_locality';
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['table'] = 'field_data_field_profiles_address_citta';
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['field'] = 'field_profiles_address_citta_locality';
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['expose']['operator_id'] = 'field_profiles_address_citta_locality_op';
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['expose']['label'] = 'Citta';
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['expose']['operator'] = 'field_profiles_address_citta_locality_op';
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['expose']['identifier'] = 'citta';
  $handler->display->display_options['filters']['field_profiles_address_citta_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Profile: Citta di cui mi interesso - Administrative area (i.e. State / Province) */
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
  /* Filter criterion: Profile: Comunità di appartenenza (field_profile_comunita_appartene) */
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['id'] = 'field_profile_comunita_appartene_value';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['table'] = 'field_data_field_profile_comunita_appartene';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['field'] = 'field_profile_comunita_appartene_value';
  $handler->display->display_options['filters']['field_profile_comunita_appartene_value']['relationship'] = 'profile';
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

  /* Display: User search page */
  $handler = $view->new_display('page', 'User search page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'community';
  $translatables['sod_users_user_search'] = array(
    t('Master'),
    t('Community'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Nessun utente trovato con questi criteri di ricerca.'),
    t('Profilo'),
    t('Keywords'),
    t('Citta'),
    t('Provincia'),
    t('Categoria'),
    t('User search page'),
  );
  $export['sod_users_user_search'] = $view;

  return $export;
}
