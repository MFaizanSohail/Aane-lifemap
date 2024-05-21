<?php
/**
 * @file
 * adult_application.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function adult_application_taxonomy_default_vocabularies() {
  return array(
    'lifemap_program' => array(
      'name' => 'LifeMAP Program',
      'machine_name' => 'lifemap_program',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}