<?php
/**
 * @file
 * client_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function client_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'client_dash';
  $view->description = 'Home page for client dashboard - revised';
  $view->tag = 'dash-client';
  $view->base_table = 'profile';
  $view->human_name = 'Client Dash';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client Dash';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Edit button';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/user/[user]/edit/client?destination=client-dash/[user]" class="edit-btn">Edit Profile</a>';
  $handler->display->display_options['footer']['area']['format'] = 'html_full';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['separator'] = '';
  /* Field: Profile: Rendered Profile */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'page';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Contextual filter: Client UID Validated */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['ui_name'] = 'Client UID Validated';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = '%1';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'client';
  $handler->display->display_options['arguments']['user']['validate']['fail'] = 'access denied';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'client' => 'client',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'client-dash/%/profile';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Profile';
  $handler->display->display_options['menu']['description'] = 'Basic information';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Client Dashboard';
  $handler->display->display_options['tab_options']['description'] = 'Dashboard of information about a client.';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'user-menu';
  $export['client_dash'] = $view;

  $view = new view();
  $view->name = 'client_dash_goals';
  $view->description = 'Goals tab for client dash';
  $view->tag = 'dash-client';
  $view->base_table = 'profile';
  $view->human_name = 'Client Dash Goals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client Dash';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'field_date_started' => 'field_date_started',
    'title' => 'title',
    'field_status' => 'field_status',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date_started';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_started' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/goal?field_ref_client=[pid]&destination=client-dash/!1/goals" class="addNew">Add New Goal</a>';
  $handler->display->display_options['header']['area']['format'] = 'html_full';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Client User Acct */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['ui_name'] = 'Client User Acct';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: Goal */
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['id'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['table'] = 'profile';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['field'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['ui_name'] = 'Goal';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['label'] = 'Goal';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['required'] = TRUE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Content: Date Started */
  $handler->display->display_options['fields']['field_date_started']['id'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['table'] = 'field_data_field_date_started';
  $handler->display->display_options['fields']['field_date_started']['field'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['relationship'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['fields']['field_date_started']['label'] = 'Started';
  $handler->display->display_options['fields']['field_date_started']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_started']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['relationship'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['fields']['field_status']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['text'] = 'Detail';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Contextual filter: Client UID Validated */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['ui_name'] = 'Client UID Validated';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = 'Goals: %1';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'client';
  $handler->display->display_options['arguments']['user']['validate']['fail'] = 'access denied';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'client' => 'client',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'goal' => 'goal',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'client-dash/%/goals';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Goals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['client_dash_goals'] = $view;

  $view = new view();
  $view->name = 'client_dash_intake';
  $view->description = 'Assessments tab on revised client dashboard';
  $view->tag = 'dash-client';
  $view->base_table = 'profile';
  $view->human_name = 'Client Dash Intake';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client Dash';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'field_date_assessment' => 'field_date_assessment',
    'type' => 'type',
    'field_ref_goal' => 'field_ref_goal',
    'name' => 'name',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
  );
  
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_assessment' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_goal' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
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
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/[nid]/edit?destination=client-dash/!1/intake" class="edit-btn">Edit Intake Form</a>';
  $handler->display->display_options['footer']['area']['format'] = 'html_full';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Relationship: Client User Acct */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['ui_name'] = 'Client User Acct';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: Intake */
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['id'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['table'] = 'profile';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['field'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['ui_name'] = 'Intake';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['label'] = 'Intake';
  $handler->display->display_options['relationships']['reverse_field_ref_client_node']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_ref_client_node';
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Contextual filter: Client UID Validated */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['ui_name'] = 'Client UID Validated';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = 'Intake: %1';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'client';
  $handler->display->display_options['arguments']['user']['validate']['fail'] = 'access denied';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'client' => 'client',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_ref_client_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'intake_adult' => 'intake_adult',
    'intake_teen' => 'intake_teen',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'client-dash/%/intake';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Intake';
  $handler->display->display_options['menu']['description'] = 'Intake form';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['client_dash_intake'] = $view;

  $view = new view();
  $view->name = 'client_dash_reports';
  $view->description = 'Goals tab for client dash';
  $view->tag = 'dash-client';
  $view->base_table = 'profile';
  $view->human_name = 'Client Dash Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client Dash';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'field_report_date' => 'field_report_date',
    'field_report_type' => 'field_report_type',
    'field_client_report' => 'field_client_report',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_report_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_report_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_client_report' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/client-report?field_report_client=[pid]&destination=client-dash/!1/reports" class="addNew">Make New Report</a>';
  $handler->display->display_options['header']['area']['format'] = 'html_full';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Client User Acct */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['ui_name'] = 'Client User Acct';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: Client Report */
  $handler->display->display_options['relationships']['reverse_field_report_client_node']['id'] = 'reverse_field_report_client_node';
  $handler->display->display_options['relationships']['reverse_field_report_client_node']['table'] = 'profile';
  $handler->display->display_options['relationships']['reverse_field_report_client_node']['field'] = 'reverse_field_report_client_node';
  $handler->display->display_options['relationships']['reverse_field_report_client_node']['ui_name'] = 'Client Report';
  $handler->display->display_options['relationships']['reverse_field_report_client_node']['label'] = 'Client Report';
  $handler->display->display_options['relationships']['reverse_field_report_client_node']['required'] = TRUE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_report_date']['id'] = 'field_report_date';
  $handler->display->display_options['fields']['field_report_date']['table'] = 'field_data_field_report_date';
  $handler->display->display_options['fields']['field_report_date']['field'] = 'field_report_date';
  $handler->display->display_options['fields']['field_report_date']['relationship'] = 'reverse_field_report_client_node';
  /* Field: Content: Type of Report or Interaction */
  $handler->display->display_options['fields']['field_report_type']['id'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['table'] = 'field_data_field_report_type';
  $handler->display->display_options['fields']['field_report_type']['field'] = 'field_report_type';
  $handler->display->display_options['fields']['field_report_type']['relationship'] = 'reverse_field_report_client_node';
  $handler->display->display_options['fields']['field_report_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_report_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_report_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Report/Notes */
  $handler->display->display_options['fields']['field_client_report']['id'] = 'field_client_report';
  $handler->display->display_options['fields']['field_client_report']['table'] = 'field_data_field_client_report';
  $handler->display->display_options['fields']['field_client_report']['field'] = 'field_client_report';
  $handler->display->display_options['fields']['field_client_report']['relationship'] = 'reverse_field_report_client_node';
  $handler->display->display_options['fields']['field_client_report']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_client_report']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_client_report']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_report_client_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['text'] = 'Detail';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_report_client_node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['relationship'] = 'reverse_field_report_client_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Contextual filter: Client UID Validated */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['ui_name'] = 'Client UID Validated';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = 'Client Reports: %1';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'client';
  $handler->display->display_options['arguments']['user']['validate']['fail'] = 'access denied';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'client' => 'client',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'client-dash/%/reports';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['client_dash_reports'] = $view;

  $view = new view();
  $view->name = 'client_dash_sessions';
  $view->description = 'Coaching Sessions from Client Dashboard';
  $view->tag = 'dash-client';
  $view->base_table = 'profile';
  $view->human_name = 'Client Dash Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client Dash';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'nid' => 'nid',
    'field_person_name' => 'field_person_name',
    'field_time_entry_date' => 'field_time_entry_date',
    'field_time_entry_length' => 'field_time_entry_length',
    'field_funding_program' => 'field_funding_program',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'field_time_coach_1' => 'field_time_coach_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_length' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_program' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_coach_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Client User Acct */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['ui_name'] = 'Client User Acct';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: Session */
  $handler->display->display_options['relationships']['reverse_field_time_client_node']['id'] = 'reverse_field_time_client_node';
  $handler->display->display_options['relationships']['reverse_field_time_client_node']['table'] = 'profile';
  $handler->display->display_options['relationships']['reverse_field_time_client_node']['field'] = 'reverse_field_time_client_node';
  $handler->display->display_options['relationships']['reverse_field_time_client_node']['ui_name'] = 'Session';
  $handler->display->display_options['relationships']['reverse_field_time_client_node']['label'] = 'Coaching Sessions';
  $handler->display->display_options['relationships']['reverse_field_time_client_node']['required'] = TRUE;
  /* Relationship: Coach Profile */
  $handler->display->display_options['relationships']['field_time_coach_target_id']['id'] = 'field_time_coach_target_id';
  $handler->display->display_options['relationships']['field_time_coach_target_id']['table'] = 'field_data_field_time_coach';
  $handler->display->display_options['relationships']['field_time_coach_target_id']['field'] = 'field_time_coach_target_id';
  $handler->display->display_options['relationships']['field_time_coach_target_id']['relationship'] = 'reverse_field_time_client_node';
  $handler->display->display_options['relationships']['field_time_coach_target_id']['ui_name'] = 'Coach Profile';
  $handler->display->display_options['relationships']['field_time_coach_target_id']['label'] = 'Coach Profile';
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_time_client_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Field: Your Name */
  $handler->display->display_options['fields']['field_person_name']['id'] = 'field_person_name';
  $handler->display->display_options['fields']['field_person_name']['table'] = 'field_data_field_person_name';
  $handler->display->display_options['fields']['field_person_name']['field'] = 'field_person_name';
  $handler->display->display_options['fields']['field_person_name']['relationship'] = 'field_time_coach_target_id';
  $handler->display->display_options['fields']['field_person_name']['label'] = 'Coach';
  $handler->display->display_options['fields']['field_person_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_name']['click_sort_column'] = 'family';
  $handler->display->display_options['fields']['field_person_name']['settings'] = array(
    'format' => 'name_alpha',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['relationship'] = 'reverse_field_time_client_node';
  /* Field: Content: Length */
  $handler->display->display_options['fields']['field_time_entry_length']['id'] = 'field_time_entry_length';
  $handler->display->display_options['fields']['field_time_entry_length']['table'] = 'field_data_field_time_entry_length';
  $handler->display->display_options['fields']['field_time_entry_length']['field'] = 'field_time_entry_length';
  $handler->display->display_options['fields']['field_time_entry_length']['relationship'] = 'reverse_field_time_client_node';
  $handler->display->display_options['fields']['field_time_entry_length']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_length']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Funding Program */
  $handler->display->display_options['fields']['field_funding_program']['id'] = 'field_funding_program';
  $handler->display->display_options['fields']['field_funding_program']['table'] = 'field_data_field_funding_program';
  $handler->display->display_options['fields']['field_funding_program']['field'] = 'field_funding_program';
  $handler->display->display_options['fields']['field_funding_program']['relationship'] = 'reverse_field_time_client_node';
  $handler->display->display_options['fields']['field_funding_program']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_program']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_time_client_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Details';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_time_client_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Coach PID */
  $handler->display->display_options['fields']['field_time_coach_1']['id'] = 'field_time_coach_1';
  $handler->display->display_options['fields']['field_time_coach_1']['table'] = 'field_data_field_time_coach';
  $handler->display->display_options['fields']['field_time_coach_1']['field'] = 'field_time_coach';
  $handler->display->display_options['fields']['field_time_coach_1']['relationship'] = 'reverse_field_time_client_node';
  $handler->display->display_options['fields']['field_time_coach_1']['ui_name'] = 'Coach PID';
  $handler->display->display_options['fields']['field_time_coach_1']['label'] = '';
  $handler->display->display_options['fields']['field_time_coach_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_time_coach_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_coach_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_time_coach_1']['settings'] = array(
    'link' => 0,
  );
  /* Contextual filter: Client UID Validated */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['ui_name'] = 'Client UID Validated';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = 'Coaching Sessions: %1';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'client';
  $handler->display->display_options['arguments']['user']['validate']['fail'] = 'access denied';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'client' => 'client',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_time_client_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'appointment' => 'appointment',
  );

  /* Display: Sessions Page */
  $handler = $view->new_display('page', 'Sessions Page', 'page');
  $handler->display->display_options['path'] = 'client-dash/%/sessions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Coaching Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['client_dash_sessions'] = $view;

  $view = new view();
  $view->name = 'client_notes';
  $view->description = 'A tab on the revised Client dashboard';
  $view->tag = 'dash-client';
  $view->base_table = 'node';
  $view->human_name = 'Client Dash Notes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_time_entry_date' => 'field_time_entry_date',
    'field_appt_notes' => 'field_appt_notes',
    'view_node' => 'edit_node',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_time_entry_date';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_time_entry_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_appt_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Coaching Session */
  $handler->display->display_options['relationships']['field_time_client_target_id']['id'] = 'field_time_client_target_id';
  $handler->display->display_options['relationships']['field_time_client_target_id']['table'] = 'field_data_field_time_client';
  $handler->display->display_options['relationships']['field_time_client_target_id']['field'] = 'field_time_client_target_id';
  $handler->display->display_options['relationships']['field_time_client_target_id']['ui_name'] = 'Coaching Session';
  $handler->display->display_options['relationships']['field_time_client_target_id']['label'] = 'Coaching Session';
  $handler->display->display_options['relationships']['field_time_client_target_id']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_entry_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Clinical Notes */
  $handler->display->display_options['fields']['field_appt_notes']['id'] = 'field_appt_notes';
  $handler->display->display_options['fields']['field_appt_notes']['table'] = 'field_data_field_appt_notes';
  $handler->display->display_options['fields']['field_appt_notes']['field'] = 'field_appt_notes';
  $handler->display->display_options['fields']['field_appt_notes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_appt_notes']['empty'] = 'No notes';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['relationship'] = 'field_time_client_target_id';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = 'Clinical Notes: %1';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'client';
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
    'appointment' => 'appointment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Notes from sessions between:';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now - 8 weeks';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-3:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_time_entry_date.field_time_entry_date_value' => 'field_data_field_time_entry_date.field_time_entry_date_value',
  );

  /* Display: Client Notes Page */
  $handler = $view->new_display('page', 'Client Notes Page', 'client_reports_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['path'] = 'client-dash/%/notes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Clinical Notes';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view_%exposed_%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_time_entry_date']['id'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['table'] = 'field_data_field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['field'] = 'field_time_entry_date';
  $handler->display->display_options['fields']['field_time_entry_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_time_entry_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_time_entry_date']['settings'] = array(
    'format_type' => 'date_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Clinical Notes */
  $handler->display->display_options['fields']['field_appt_notes']['id'] = 'field_appt_notes';
  $handler->display->display_options['fields']['field_appt_notes']['table'] = 'field_data_field_appt_notes';
  $handler->display->display_options['fields']['field_appt_notes']['field'] = 'field_appt_notes';
  $handler->display->display_options['fields']['field_appt_notes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_appt_notes']['empty'] = 'No notes';
  $handler->display->display_options['path'] = 'client-dashboard/%/notes/xls';
  $handler->display->display_options['displays'] = array(
    'client_reports_page' => 'client_reports_page',
    'default' => 0,
  );
  $export['client_notes'] = $view;

  $view = new view();
  $view->name = 'clone_of_client_goals';
  $view->description = 'A tab on the Client dashboard';
  $view->tag = 'client';
  $view->base_table = 'node';
  $view->human_name = 'Client Assessments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Client Assessments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/assess-anxiety-confidence" class="addNew">Add Anxiety/Confidence Assessment</a> <a href="/node/add/skills-assess-adult" class="addNew">Add Skills Assessment (Adult)</a> <a href="/node/add/skills-assess-teen" class="addNew">Add Skills Assessment (Teen)</a>';
  $handler->display->display_options['header']['area']['format'] = 'html_full';
  /* Relationship: Client */
  $handler->display->display_options['relationships']['field_ref_client_target_id']['id'] = 'field_ref_client_target_id';
  $handler->display->display_options['relationships']['field_ref_client_target_id']['table'] = 'field_data_field_ref_client';
  $handler->display->display_options['relationships']['field_ref_client_target_id']['field'] = 'field_ref_client_target_id';
  $handler->display->display_options['relationships']['field_ref_client_target_id']['ui_name'] = 'Client';
  $handler->display->display_options['relationships']['field_ref_client_target_id']['label'] = 'Client';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'field_ref_client_target_id';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['relationship'] = 'field_ref_client_target_id';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['user']['title'] = 'Assessments: %1';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['user']['validate']['type'] = 'client';
  $handler->display->display_options['arguments']['user']['validate']['fail'] = 'access denied';
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
    'goal_assess' => 'goal_assess',
    'skills_assess_adult' => 'skills_assess_adult',
    'skills_assess_teen' => 'skills_assess_teen',
  );

  /* Display: Assessments tab */
  $handler = $view->new_display('page', 'Assessments tab', 'client_assessments');
  $handler->display->display_options['path'] = 'client-dashboard/%/assessments';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Assessments';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['clone_of_client_goals'] = $view;

  return $export;
}
