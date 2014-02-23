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
