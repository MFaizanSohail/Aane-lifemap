<?php
/**
 * @file
 * aane_goal_form_and_coaching_replationships.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aane_goal_form_and_coaching_replationships_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_coaching';
  $view->description = 'A tab on the Administer LifeMAP dashboard';
  $view->tag = 'dash-admin';
  $view->base_table = 'node';
  $view->human_name = 'Administration: Coaching Assignments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administration: Coaching Assignments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'user_1' => 'user_1',
    'user' => 'user',
    'label' => 'label',
    'label_1' => 'label_1',
    'field_coaching_active' => 'field_coaching_active',
    'field_notes' => 'field_notes',
    'field_hours_since_report' => 'field_hours_since_report',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'label';
  $handler->display->display_options['style_options']['info'] = array(
    'user_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'user' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'label_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_coaching_active' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hours_since_report' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span class="results">Displaying @start - @end of @total coaching assignments</span>';
  /* Relationship: Coach */
  $handler->display->display_options['relationships']['field_rel_coach_target_id']['id'] = 'field_rel_coach_target_id';
  $handler->display->display_options['relationships']['field_rel_coach_target_id']['table'] = 'field_data_field_rel_coach';
  $handler->display->display_options['relationships']['field_rel_coach_target_id']['field'] = 'field_rel_coach_target_id';
  $handler->display->display_options['relationships']['field_rel_coach_target_id']['ui_name'] = 'Coach';
  $handler->display->display_options['relationships']['field_rel_coach_target_id']['label'] = 'Coach';
  /* Relationship: Client */
  $handler->display->display_options['relationships']['field_rel_client_target_id']['id'] = 'field_rel_client_target_id';
  $handler->display->display_options['relationships']['field_rel_client_target_id']['table'] = 'field_data_field_rel_client';
  $handler->display->display_options['relationships']['field_rel_client_target_id']['field'] = 'field_rel_client_target_id';
  $handler->display->display_options['relationships']['field_rel_client_target_id']['ui_name'] = 'Client';
  $handler->display->display_options['relationships']['field_rel_client_target_id']['label'] = 'Client';
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user_1']['id'] = 'user_1';
  $handler->display->display_options['fields']['user_1']['table'] = 'profile';
  $handler->display->display_options['fields']['user_1']['field'] = 'user';
  $handler->display->display_options['fields']['user_1']['relationship'] = 'field_rel_coach_target_id';
  $handler->display->display_options['fields']['user_1']['label'] = 'Coach uid';
  $handler->display->display_options['fields']['user_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_1']['separator'] = '';
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['relationship'] = 'field_rel_client_target_id';
  $handler->display->display_options['fields']['user']['label'] = 'Client uid';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['user']['separator'] = '';
  /* Field: Profile: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'profile';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'field_rel_coach_target_id';
  $handler->display->display_options['fields']['label']['label'] = 'Coach';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = 'user/[user_1]';
  /* Field: Profile: Label */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'profile';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['relationship'] = 'field_rel_client_target_id';
  $handler->display->display_options['fields']['label_1']['label'] = 'Client';
  $handler->display->display_options['fields']['label_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label_1']['alter']['path'] = 'client-dash/[user]';
  /* Field: Content: Active */
  $handler->display->display_options['fields']['field_coaching_active']['id'] = 'field_coaching_active';
  $handler->display->display_options['fields']['field_coaching_active']['table'] = 'field_data_field_coaching_active';
  $handler->display->display_options['fields']['field_coaching_active']['field'] = 'field_coaching_active';
  $handler->display->display_options['fields']['field_coaching_active']['element_default_classes'] = FALSE;
  /* Field: Field: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_notes']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_notes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_notes']['field_api_classes'] = TRUE;
  /* Field: Content: Hours Since Report */
  $handler->display->display_options['fields']['field_hours_since_report']['id'] = 'field_hours_since_report';
  $handler->display->display_options['fields']['field_hours_since_report']['table'] = 'field_data_field_hours_since_report';
  $handler->display->display_options['fields']['field_hours_since_report']['field'] = 'field_hours_since_report';
  $handler->display->display_options['fields']['field_hours_since_report']['label'] = 'Hours Since Evaluation';
  $handler->display->display_options['fields']['field_hours_since_report']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hours_since_report']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hours_since_report']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hours_since_report']['field_api_classes'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Relationship';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Coach (field_rel_coach) */
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['id'] = 'field_rel_coach_target_id';
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['table'] = 'field_data_field_rel_coach';
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['field'] = 'field_rel_coach_target_id';
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['title'] = 'Coach: %1 Client: %2';
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_rel_coach_target_id']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'coaching_relationship' => 'coaching_relationship',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Label */
  $handler->display->display_options['filters']['label']['id'] = 'label';
  $handler->display->display_options['filters']['label']['table'] = 'profile';
  $handler->display->display_options['filters']['label']['field'] = 'label';
  $handler->display->display_options['filters']['label']['relationship'] = 'field_rel_coach_target_id';
  $handler->display->display_options['filters']['label']['operator'] = 'contains';
  $handler->display->display_options['filters']['label']['exposed'] = TRUE;
  $handler->display->display_options['filters']['label']['expose']['operator_id'] = 'label_op';
  $handler->display->display_options['filters']['label']['expose']['label'] = 'Coach';
  $handler->display->display_options['filters']['label']['expose']['operator'] = 'label_op';
  $handler->display->display_options['filters']['label']['expose']['identifier'] = 'label';
  $handler->display->display_options['filters']['label']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Profile: Label */
  $handler->display->display_options['filters']['label_1']['id'] = 'label_1';
  $handler->display->display_options['filters']['label_1']['table'] = 'profile';
  $handler->display->display_options['filters']['label_1']['field'] = 'label';
  $handler->display->display_options['filters']['label_1']['relationship'] = 'field_rel_client_target_id';
  $handler->display->display_options['filters']['label_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['label_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['label_1']['expose']['operator_id'] = 'label_1_op';
  $handler->display->display_options['filters']['label_1']['expose']['label'] = 'Client';
  $handler->display->display_options['filters']['label_1']['expose']['operator'] = 'label_1_op';
  $handler->display->display_options['filters']['label_1']['expose']['identifier'] = 'label_1';
  $handler->display->display_options['filters']['label_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Active (field_coaching_active) */
  $handler->display->display_options['filters']['field_coaching_active_value']['id'] = 'field_coaching_active_value';
  $handler->display->display_options['filters']['field_coaching_active_value']['table'] = 'field_data_field_coaching_active';
  $handler->display->display_options['filters']['field_coaching_active_value']['field'] = 'field_coaching_active_value';
  $handler->display->display_options['filters']['field_coaching_active_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_coaching_active_value']['expose']['operator_id'] = 'field_coaching_active_value_op';
  $handler->display->display_options['filters']['field_coaching_active_value']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['field_coaching_active_value']['expose']['operator'] = 'field_coaching_active_value_op';
  $handler->display->display_options['filters']['field_coaching_active_value']['expose']['identifier'] = 'field_coaching_active_value';
  $handler->display->display_options['filters']['field_coaching_active_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_coaching_active_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Coaching Assignments Page */
  $handler = $view->new_display('page', 'Coaching Assignments Page', 'admin_coaching_page');
  $handler->display->display_options['path'] = 'admin-dashboard/coaching';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Coaching Assignments';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'profile';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'field_rel_coach_target_id';
  $handler->display->display_options['fields']['label']['label'] = 'Coach';
  $handler->display->display_options['fields']['label']['alter']['path'] = 'user/[user_1]';
  $handler->display->display_options['fields']['label']['element_default_classes'] = FALSE;
  /* Field: Profile: Label */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'profile';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['relationship'] = 'field_rel_client_target_id';
  $handler->display->display_options['fields']['label_1']['label'] = 'Client';
  $handler->display->display_options['fields']['label_1']['alter']['path'] = 'client/[user]';
  /* Field: Content: Active */
  $handler->display->display_options['fields']['field_coaching_active']['id'] = 'field_coaching_active';
  $handler->display->display_options['fields']['field_coaching_active']['table'] = 'field_data_field_coaching_active';
  $handler->display->display_options['fields']['field_coaching_active']['field'] = 'field_coaching_active';
  $handler->display->display_options['fields']['field_coaching_active']['element_default_classes'] = FALSE;
  /* Field: Field: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_notes']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_notes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_notes']['field_api_classes'] = TRUE;
  $handler->display->display_options['path'] = 'admin-dashboard/coaching/xls';
  $handler->display->display_options['displays'] = array(
    'admin_coaching_page' => 'admin_coaching_page',
    'default' => 0,
  );
  $export['admin_coaching'] = $view;

  return $export;
}
