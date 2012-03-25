<?php
/**
 * @file
 * opendata_ctypes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opendata_ctypes_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function opendata_ctypes_node_info() {
  $items = array(
    'data' => array(
      'name' => t('Data'),
      'base' => 'node_content',
      'description' => t('Opendata Content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
