<?php
/**
 * @file
 * opendata_ctypes.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function opendata_ctypes_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sod_tools_importer';
  $feeds_importer->config = array(
    'name' => 'SOD Tools',
    'description' => 'SOD Tools impoter',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'strumento',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'label:text',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'uri:url',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'sito:url',
            'target' => 'field_tool_url:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'description:text',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'tipologia:text',
            'target' => 'field_tool_type',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'licenza:text',
            'target' => 'field_tool_license',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'target:text',
            'target' => 'field_tool_target',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sod_tools_importer'] = $feeds_importer;

  return $export;
}
