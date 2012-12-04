<?php
/**
 * @file
 * sod_working_group.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sod_working_group_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'groups';
  $context->description = 'SOD Groups';
  $context->tag = 'SOD Groups';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('SOD Groups');
  $export['groups'] = $context;

  return $export;
}
