<?php
/**
 * @file
 * sod_sessions.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function sod_sessions_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'SOD15',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5c277811-db49-4099-b5ac-d909521de6ef',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'conference',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Avanzato',
    'description' => '<p>Richiede conoscenze avanzate di programmazione, analisi dei dati o conoscenza delle principali forme di licenza.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6281645c-9d71-46bd-8629-f0da636fb856',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'session_difficuly_level',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Semplice',
    'description' => '<p>Non richiede alcun rudimento di programmazione, tutto possono partecipare.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9b44e5e7-2b5d-4d7c-88ff-b7a657e706f0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'session_difficuly_level',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Intermedio',
    'description' => '<p>Richiede qualche rudimento di programmazione, analisi dei dati o conoscenza di base delle principali forme di licenza</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f8e3821f-93b6-40a0-aeb9-c9b4e48f08e1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'session_difficuly_level',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'SOD14',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fdd88dce-807f-4b41-bf4e-961b5d591cd9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'conference',
    'metatags' => array(),
  );
  return $terms;
}
