<?php
/**
 * @file
 * sod_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sod_users_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_extra_2015|profile2|main|form';
  $field_group->group_name = 'group_profile_extra_2015';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indagine 2015 sull\'economia degli open data',
    'weight' => '4',
    'children' => array(
      0 => 'field__reddito_2014_generato_con',
      1 => 'field_classe_di_reddito_2014',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile-extra-2015 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_extra_2015|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_extra|profile2|main|form';
  $field_group->group_name = 'group_profile_extra';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indagine 2014 sull\'economia degli open data',
    'weight' => '5',
    'children' => array(
      0 => 'field_profile_classe_di_reddito',
      1 => 'field_profile_income_with_od',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Indagine 2014 sull\'economia degli open data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Sì, "il nuovo petrolio", ok. Ma quanto valgono veramente gli open data in Italia? Quanti posti di lavoro? Quanto PIL?  Prova a misurare queste grandezze insieme alla comunità di Spaghetti Open Data. Queste informazioni NON sono open, ma private e saranno utilizzate solamente ai fini statistici',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_profile_extra|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_info|profile2|main|form';
  $field_group->group_name = 'group_profile_info';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informazioni',
    'weight' => '1',
    'children' => array(
      0 => 'field_profile_avatar',
      1 => 'field_profile_comunita_appartene',
      2 => 'field_profile_descrizione',
      3 => 'field_profile_extra_consenso',
      4 => 'field_profile_geocode',
      5 => 'field_profile_keywords',
      6 => 'field_profile_nome',
      7 => 'field_profiles_address_citta',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Informazioni',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profile-info field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_profile_info|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_main|profile2|main|form';
  $field_group->group_name = 'group_profile_main';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-profile-main field-group-tabs',
      ),
    ),
  );
  $export['group_profile_main|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_social|profile2|main|form';
  $field_group->group_name = 'group_profile_social';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account social',
    'weight' => '2',
    'children' => array(
      0 => 'field_profile_blog_personale',
      1 => 'field_profile_facebook',
      2 => 'field_profile_linkedin',
      3 => 'field_profile_twitter',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Account social',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_profile_social|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sod14|profile2|main|form';
  $field_group->group_name = 'group_sod14';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SOD15',
    'weight' => '3',
    'children' => array(
      0 => 'field__b_partecipo_a_sod14_b_',
      1 => 'field_test',
      2 => 'field_partecipo_a_sod15',
      3 => 'field_partecipo_a_sod16',
      4 => 'field_partecipo_a_sod17',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'SOD15',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-sod14 group-sod15 field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_sod14|profile2|main|form'] = $field_group;

  return $export;
}
