<?php
/**
 * @file
 * aane_goal_form_and_coaching_replationships.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aane_goal_form_and_coaching_replationships_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function aane_goal_form_and_coaching_replationships_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function aane_goal_form_and_coaching_replationships_node_info() {
  $items = array(
    'appointment' => array(
      'name' => t('Coaching Session'),
      'base' => 'node_content',
      'description' => t('Information about a meeting between a coach and a client.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<p>Please note that ALL coaching sessions must be entered by 7am of the Monday following the end of the timesheet pay period.</p>
<p><strong>Don\'t forget to hit the SAVE button when you are done!</strong></p>'),
    ),
    'coaching_relationship' => array(
      'name' => t('Coaching Assignment'),
      'base' => 'node_content',
      'description' => t('Information about the relationship between a particular coach and client.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'goal' => array(
      'name' => t('Goal'),
      'base' => 'node_content',
      'description' => t('A goal chosen by a client to work on, and track progress toward, with a coach.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'skills_assess_adult' => array(
      'name' => t('FSA - Adult'),
      'base' => 'node_content',
      'description' => t('An assessment of functional skills in a variety of categories.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'skills_assess_teen' => array(
      'name' => t('FSA - Teen'),
      'base' => 'node_content',
      'description' => t('An assessment of functional skills in a variety of categories.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
