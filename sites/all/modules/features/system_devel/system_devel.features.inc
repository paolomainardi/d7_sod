<?php
/**
 * @file
 * system_devel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function system_devel_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
