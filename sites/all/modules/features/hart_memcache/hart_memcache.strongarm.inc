<?php
/**
 * @file
 * hart_memcache.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hart_memcache_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_memcache_statistics';
  $strongarm->value = 0;
  $export['show_memcache_statistics'] = $strongarm;

  return $export;
}
