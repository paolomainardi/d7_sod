<?php
/**
 * @file
 * sod_users.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sod_users_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sod_users';
  $context->description = '';
  $context->tag = 'users';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('users');
  $export['sod_users'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sod_users_community_search';
  $context->description = '';
  $context->tag = 'users';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community' => 'community',
        'community/list' => 'community/list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-75da15a99a2718dc4789ef2c6c7e600f' => array(
          'module' => 'views',
          'delta' => '75da15a99a2718dc4789ef2c6c7e600f',
          'region' => 'sidebar_first',
          'weight' => '-26',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('users');
  $export['sod_users_community_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sod_users_map';
  $context->description = '';
  $context->tag = 'users';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community/map' => 'community/map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4471966015a324fd491a421255fb62a1' => array(
          'module' => 'views',
          'delta' => '4471966015a324fd491a421255fb62a1',
          'region' => 'sidebar_first',
          'weight' => '-24',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('users');
  $export['sod_users_map'] = $context;

  return $export;
}
