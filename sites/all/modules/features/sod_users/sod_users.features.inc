<?php
/**
 * @file
 * sod_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sod_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function sod_users_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Il mio profilo",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "metatags" : [],
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function sod_users_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: main
  $schemaorg['profile2']['main'] = array(
    'field_profile_nome' => array(
      'predicates' => array(
        0 => 'schema:alternateName',
      ),
      'type' => 'property',
    ),
    'field_profile_comunita_appartene' => array(
      'predicates' => array(
        0 => 'schema:jobTitle',
      ),
      'type' => 'property',
    ),
    'field_profile_keywords' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
      'type' => 'rel',
    ),
    'field_profile_descrizione' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
      ),
      'type' => 'property',
    ),
    'field_profile_blog_personale' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
      'type' => 'property',
    ),
    'field_profile_facebook' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
      'type' => 'property',
    ),
    'field_profile_twitter' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
      'type' => 'property',
    ),
    'field_profile_linkedin' => array(
      'predicates' => array(
        0 => 'schema:sameAs',
      ),
      'type' => 'property',
    ),
    'field_profile_address' => array(
      'predicates' => array(
        0 => 'schema:jobLocation',
      ),
      'type' => 'property',
    ),
    'rdftype' => array(
      0 => 'schema:person',
    ),
    'field_profile_avatar' => array(
      'predicates' => array(
        0 => 'schema:image',
      ),
      'type' => 'rel',
    ),
    'field_profile_income_with_od' => array(
      'predicates' => array(),
    ),
    'field_profile_extra_consenso' => array(
      'predicates' => array(),
    ),
    'field_profile_citta' => array(
      'predicates' => array(
        0 => 'schema:addressLocality',
      ),
    ),
    'field_profiles_address_citta' => array(
      'predicates' => array(
        0 => 'schema:addressLocality',
      ),
      'type' => 'property',
    ),
    'field_profile_geocode' => array(
      'predicates' => array(),
    ),
  );

  // Exported RDF mapping: user_interest_tags
  $schemaorg['taxonomy_term']['user_interest_tags'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
  );

  // Exported RDF mapping: user
  $schemaorg['user']['user'] = array(
    'rdftype' => array(
      0 => 'schema:Person',
      1 => 'sioc:UserAccount',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'homepage' => array(
      'predicates' => array(
        0 => 'foaf:page',
      ),
      'type' => 'rel',
    ),
    'field_user_privacy_polici' => array(
      'predicates' => array(),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}
