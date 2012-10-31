<?php

/*
 * A function to change jQuery and jQuery UI version
 * 
 */
function sod_bootstrap_js_alter(&$scripts) {
  // dpm($javascript, 'BEFORE');
  $theme_path = drupal_get_path('theme','sod_bootstrap');
  $new_jquery = $theme_path . '/js/jquery-1.8.2.min.js';
  $scripts[$new_jquery] = $scripts['misc/jquery.js'];
  $scripts[$new_jquery]['version'] = '1.8.2';
  $scripts[$new_jquery]['data'] = $new_jquery;
  unset($scripts['misc/jquery.js']);
  // dpm($javascript, 'AFTER');
  foreach ($scripts as $path => $lib) {
    if (strstr($path, 'misc/ui/jquery.ui')) {
      // dpm ($lib, $path);
      $new_path = str_replace('misc', $theme_path . '/js', $path);
      $scripts[$new_path] = $scripts[$path];
      $scripts[$new_path]['version'] = '1.8.24';
      $scripts[$new_path]['data'] = $new_path;
      unset($scripts[$path]);
    }
  }
  // dpm($scripts);
}