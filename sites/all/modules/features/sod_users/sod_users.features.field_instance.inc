<?php
/**
 * @file
 * sod_users.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sod_users_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-main-field_profile_avatar'
  $field_instances['profile2-main-field_profile_avatar'] = array(
    'bundle' => 'main',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_avatar',
    'label' => 'Avatar',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'user_avatars',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '500 KB',
      'max_resolution' => '',
      'min_resolution' => '250x250',
      'title_field' => 0,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'collapsible' => 2,
        'croparea' => '500x500',
        'enforce_minimum' => 1,
        'enforce_ratio' => 1,
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
        'resolution' => '250x250',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_blog_personale'
  $field_instances['profile2-main-field_profile_blog_personale'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_blog_personale',
    'label' => 'Blog personale',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_classe_di_reddito'
  $field_instances['profile2-main-field_profile_classe_di_reddito'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_classe_di_reddito',
    'label' => 'Classe di reddito',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_comunita_appartene'
  $field_instances['profile2-main-field_profile_comunita_appartene'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_comunita_appartene',
    'label' => 'Comunità di appartenenza',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_descrizione'
  $field_instances['profile2-main-field_profile_descrizione'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_descrizione',
    'label' => 'Descrizione',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_extra_consenso'
  $field_instances['profile2-main-field_profile_extra_consenso'] = array(
    'bundle' => 'main',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Puoi trovare la privacy policy qui: <a href="http://www.spaghettiopendata.org/privacy-policy"> http://www.spaghettiopendata.org/privacy-policy </a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_extra_consenso',
    'label' => 'Consenso al trattamento dei dati',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_facebook'
  $field_instances['profile2-main-field_profile_facebook'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserire l\'url completo es: http://facebook.com/nomeutente',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Profilo Facebook',
      'url' => 0,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_geocode'
  $field_instances['profile2-main-field_profile_geocode'] = array(
    'bundle' => 'main',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_geocode',
    'label' => 'Geocode',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geocoder',
      'settings' => array(
        'delta_handling' => 'default',
        'geocoder_field' => 'field_profiles_address_citta',
        'geocoder_handler' => 'mapquest_nominatim',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
      ),
      'type' => 'geocoder',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_income_with_od'
  $field_instances['profile2-main-field_profile_income_with_od'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_income_with_od',
    'label' => 'Reddito generato con gli OD',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_keywords'
  $field_instances['profile2-main-field_profile_keywords'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_keywords',
    'label' => 'Tag con cui ti identifichi ',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_linkedin'
  $field_instances['profile2-main-field_profile_linkedin'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserire l\'url completo es: http://linkedin.com/nomeutente',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_linkedin',
    'label' => 'Linkedin',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Profilo Linkedin',
      'url' => 0,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_nome'
  $field_instances['profile2-main-field_profile_nome'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_nome',
    'label' => 'Nome',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_twitter'
  $field_instances['profile2-main-field_profile_twitter'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Inserire l\'url completo es: http://twitter.com/nomeutente',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Profilo Twitter',
      'url' => 0,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profiles_address_citta'
  $field_instances['profile2-main-field_profiles_address_citta'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profiles_address_citta',
    'label' => 'Citta di cui mi interesso',
    'required' => 0,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'IT' => 'IT',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_user_privacy_polici'
  $field_instances['user-user-field_user_privacy_polici'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Accedendo a "SpaghettiOpendata” l’utente accetta di essere vincolato legalmente alle seguenti condizioni d’uso. <br>
<a href="http://www.spaghettiopendata.org">Maggiori informazioni sul trattamento dei dati e privacy policy</a>
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_privacy_polici',
    'label' => 'Trattamento dei dati e privacy policy',
    'required' => 1,
    'settings' => array(
      'user_field_privacy' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accedendo a "SpaghettiOpendata” l’utente accetta di essere vincolato legalmente alle seguenti condizioni d’uso. <br>
<a href="http://www.spaghettiopendata.org">Maggiori informazioni sul trattamento dei dati e privacy policy</a>
');
  t('Avatar');
  t('Blog personale');
  t('Citta di cui mi interesso');
  t('Classe di reddito');
  t('Comunità di appartenenza');
  t('Consenso al trattamento dei dati');
  t('Descrizione');
  t('Facebook');
  t('Geocode');
  t('Inserire l\'url completo es: http://facebook.com/nomeutente');
  t('Inserire l\'url completo es: http://linkedin.com/nomeutente');
  t('Inserire l\'url completo es: http://twitter.com/nomeutente');
  t('Linkedin');
  t('Nome');
  t('Puoi trovare la privacy policy qui: <a href="http://www.spaghettiopendata.org/privacy-policy"> http://www.spaghettiopendata.org/privacy-policy </a>');
  t('Reddito generato con gli OD');
  t('Tag con cui ti identifichi ');
  t('Trattamento dei dati e privacy policy');
  t('Twitter');

  return $field_instances;
}
