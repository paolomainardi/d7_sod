<?php
/**
 * @file
 * sod_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sod_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_context';
  $context->description = 'Global context';
  $context->tag = 'global, sod';
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
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-custom-1' => array(
          'module' => 'menu_block',
          'delta' => 'custom-1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'boxes-twitter_widget_opendataitaly' => array(
          'module' => 'boxes',
          'delta' => 'twitter_widget_opendataitaly',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'menu_bar',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'menu_bar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global context');
  t('global, sod');
  $export['global_context'] = $context;

  return $export;
}
