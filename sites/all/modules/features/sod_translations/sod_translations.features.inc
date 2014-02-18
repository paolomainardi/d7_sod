<?php
/**
 * @file
 * sod_translations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sod_translations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
