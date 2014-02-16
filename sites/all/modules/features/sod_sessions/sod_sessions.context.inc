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

  return $export;
}
