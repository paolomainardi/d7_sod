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
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'menu_bar',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'menu_bar',
          'weight' => '-9',
        ),
        'boxes-sod_apps_links' => array(
          'module' => 'boxes',
          'delta' => 'sod_apps_links',
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => 1,
        ),
        'boxes-twitter_widget_opendataitaly' => array(
          'module' => 'boxes',
          'delta' => 'twitter_widget_opendataitaly',
          'region' => 'sidebar_first',
          'weight' => 2,
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
