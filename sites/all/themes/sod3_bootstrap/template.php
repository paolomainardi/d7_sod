<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_preprocess_page()
 * Remove "container" class form navbar
 */
function sod3_bootstrap_preprocess_page(&$variables) {
  $variables['navbar_classes_array'] = array('navbar', 'navbar-default');
}

/**
 *
 */
function sod3_bootstrap_preprocess_flag(&$vars) {
  $flag =& $vars['flag'];
  $action = $vars['action'];
  $entity_id = $vars['entity_id'];

  if ($flag->name == 'partecipo') {
    $classes = &$vars['flag_wrapper_classes_array'];
    $classes[] = 'btn';

    // use the red button
    if ($action == 'unflag') {
      $classes[] = 'btn-warning';
    }
    // use the blue button
    if ($action == 'flag') {
      $classes[] = 'btn-primary';
    }
  }
}
