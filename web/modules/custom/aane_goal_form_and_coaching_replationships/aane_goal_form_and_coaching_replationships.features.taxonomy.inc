<?php
/**
 * @file
 * aane_goal_form_and_coaching_replationships.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function aane_goal_form_and_coaching_replationships_taxonomy_default_vocabularies() {
  return array(
    'funding_program' => array(
      'name' => 'Funding Program',
      'machine_name' => 'funding_program',
      'description' => 'List of LifeMAP funding programs',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'goals' => array(
      'name' => 'Goals',
      'machine_name' => 'goals',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'time_entry_status' => array(
      'name' => 'Time Entry Status',
      'machine_name' => 'time_entry_status',
      'description' => 'Payment status of an appointment/timesheet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'time_entry_type' => array(
      'name' => 'Time Entry Type',
      'machine_name' => 'time_entry_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
