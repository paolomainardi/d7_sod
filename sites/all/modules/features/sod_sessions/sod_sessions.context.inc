<?php
/**
 * @file
 * sod_sessions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sod_sessions_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sessions_menu_links';
  $context->description = '';
  $context->tag = 'sessions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '-community' => '-community',
        '-community/*' => '-community/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-sod14' => array(
          'module' => 'menu',
          'delta' => 'menu-sod14',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sessions');
  $export['sessions_menu_links'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sod14_users_list';
  $context->description = 'Lista utenti iscritti a sod14';
  $context->tag = 'sod14';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sod14/iscritti' => 'sod14/iscritti',
        'sod14/iscritti/list' => 'sod14/iscritti/list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-efeceb98455a88c83495ec41f7372a6c' => array(
          'module' => 'views',
          'delta' => 'efeceb98455a88c83495ec41f7372a6c',
          'region' => 'sidebar_first',
          'weight' => '-29',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Lista utenti iscritti a sod14');
  t('sod14');
  $export['sod14_users_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sod14_users_map';
  $context->description = 'Lista utenti iscritti a sod14';
  $context->tag = 'sod14';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sod14/iscritti/map' => 'sod14/iscritti/map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-sod14_users-sod14_user_map' => array(
          'module' => 'views',
          'delta' => '-exp-sod14_users-sod14_user_map',
          'region' => 'sidebar_first',
          'weight' => '-29',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Lista utenti iscritti a sod14');
  t('sod14');
  $export['sod14_users_map'] = $context;

  return $export;
}
