<?php
/**
 * @file
 * opendata_ctypes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opendata_ctypes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opendata_ctypes_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opendata_ctypes_node_info() {
  $items = array(
    'data' => array(
      'name' => t('Dati'),
      'base' => 'node_content',
      'description' => t('Opendata Content type'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
    'strumento' => array(
      'name' => t('Tool'),
      'base' => 'node_content',
      'description' => t('Opendata manipulation software'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
