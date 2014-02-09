<?php
/**
 * @file
 * sod_working_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sod_working_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sod_working_group_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sod_working_group_node_info() {
  $items = array(
    'documento' => array(
      'name' => t('Documento'),
      'base' => 'node_content',
      'description' => t('Documento'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
    'working_group' => array(
      'name' => t('Working group'),
      'base' => 'node_content',
      'description' => t('Working group'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  return $items;
}
