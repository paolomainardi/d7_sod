<?php
/**
 * @file
 * opendata_ctypes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function opendata_ctypes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sod_tools';
  $context->description = 'Tools context';
  $context->tag = 'tools';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'tools' => 'tools',
        'tools:page' => 'tools:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-tools-page' => array(
          'module' => 'views',
          'delta' => '-exp-tools-page',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Tools context');
  t('tools');
  $export['sod_tools'] = $context;

  return $export;
}
