<?php
/**
 * @file
 * sod_sessions.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sod_sessions_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_session-comment_body'
  $field_instances['comment-comment_node_session-comment_body'] = array(
    'bundle' => 'comment_node_session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-session-body'
  $field_instances['node-session-body'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Descrivi quello che vuoi fare in uno-tre paragrafi. Indica se servono materiali particolari per questa sessione – per esempio, se i partecipanti devono avere scaricato e installato software.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Descrizione',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-session-field_durata'
  $field_instances['node-session-field_durata'] = array(
    'bundle' => 'session',
    'default_value' => array(
      0 => array(
        'value' => 50,
      ),
    ),
    'deleted' => 0,
    'description' => 'Indica la durata in minuti di questa sessione',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_durata',
    'label' => 'Durata',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 30,
      'prefix' => '',
      'suffix' => ' minuti',
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-session-field_livello_di_difficolta'
  $field_instances['node-session-field_livello_di_difficolta'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Da qui puoi scegliere il livello di difficoltà della sessione.
',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_livello_di_difficolta',
    'label' => 'Livello di difficoltà',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-session-field_tipo_di_attivit_'
  $field_instances['node-session-field_tipo_di_attivit_'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indica il tipo di attività per cui proponi la tua sessione.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tipo_di_attivit_',
    'label' => 'Tipo di attività',
    'required' => 1,
    'settings' => array(
      'user_field_privacy' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Comment');
  t('Da qui puoi scegliere il livello di difficoltà della sessione.
');
  t('Descrivi quello che vuoi fare in uno-tre paragrafi. Indica se servono materiali particolari per questa sessione – per esempio, se i partecipanti devono avere scaricato e installato software.');
  t('Descrizione');
  t('Durata');
  t('Indica il tipo di attività per cui proponi la tua sessione.');
  t('Indica la durata in minuti di questa sessione');
  t('Livello di difficoltà');
  t('Tipo di attività');

  return $field_instances;
}
