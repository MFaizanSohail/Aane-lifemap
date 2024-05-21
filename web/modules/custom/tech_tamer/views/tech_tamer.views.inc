<?php
/**
 * @file tech_tamer.views.inc
 *
 * Misc utility Addons to views
 */

/**
 * Implements hook_views_data_alter
 * Adds a uid_current_or_role filter to the uid field of the users table, if not already defined
 * @param &$data
 */
function tech_tamer_views_data_alter(&$data) {
  if ( isset($data['users']) && !isset($data['users']['uid_current_or_role']) ) {
    $data['users']['uid_current_or_role'] = array(
      'real field' => 'uid',
      'title' => t('Current User Referenced or Role'),
      'help' => t('Filter the view to the currently logged in user, unless the current user has one or more of the specified roles.  NOTE: Do not use this filter in an OR group.'),
      'filter' => array(
        'handler' => 'tech_tamer_handler_filter_user_current_or_role',
      ),
    );
  }
}