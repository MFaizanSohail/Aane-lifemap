<?php
/**
 * @file
 * adult_appl_fieldgroups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function adult_appl_fieldgroups_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|entityform|appl_adult|default';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '6',
    'children' => array(
      0 => 'field_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_admin|entityform|appl_adult|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|entityform|appl_adult|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '6',
    'children' => array(
      0 => 'field_date_of_application',
      1 => 'field_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_admin|entityform|appl_adult|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicant_information|entityform|appl_adult|default';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_access_to_car',
      1 => 'field_driver',
      2 => 'field_income',
      3 => 'field_income_supplement',
      4 => 'field_living_arrangements',
      5 => 'field_supplement_amount',
      6 => 'field_work_student_status',
      7 => 'field_person_name',
      8 => 'field_email1',
      9 => 'field_email2',
      10 => 'field_phone1',
      11 => 'field_phone2',
      12 => 'field_address',
      13 => 'field_gender',
      14 => 'field_dob',
      15 => 'field_ethnicity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-applicant-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_applicant_information|entityform|appl_adult|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicant_information|entityform|appl_adult|form';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_access_to_car',
      1 => 'field_driver',
      2 => 'field_income',
      3 => 'field_income_supplement',
      4 => 'field_living_arrangements',
      5 => 'field_supplement_amount',
      6 => 'field_work_student_status',
      7 => 'field_person_name',
      8 => 'field_email1',
      9 => 'field_email2',
      10 => 'field_phone1',
      11 => 'field_phone2',
      12 => 'field_address',
      13 => 'field_gender',
      14 => 'field_dob',
      15 => 'field_ethnicity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Applicant Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-applicant-information field-group-fieldset container-fluid',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_applicant_information|entityform|appl_adult|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_diagnosis_treatment|entityform|appl_adult|default';
  $field_group->group_name = 'group_diagnosis_treatment';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Diagnosis and Treatment',
    'weight' => '3',
    'children' => array(
      0 => 'field_age_diagnosis',
      1 => 'field_benefits_services',
      2 => 'field_date_of_last_primary_care_',
      3 => 'field_diagnosis',
      4 => 'field_diagnostician',
      5 => 'field_diagnostician_address',
      6 => 'field_diagnostician_phone',
      7 => 'field_other_professionals',
      8 => 'field_other_setting',
      9 => 'field_permission_to_speak_to_doc',
      10 => 'field_primary_care_physician',
      11 => 'field_other_prof_detail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-diagnosis-treatment field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_diagnosis_treatment|entityform|appl_adult|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_diagnosis_treatment|entityform|appl_adult|form';
  $field_group->group_name = 'group_diagnosis_treatment';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Diagnosis and Treatment',
    'weight' => '2',
    'children' => array(
      0 => 'field_age_diagnosis',
      1 => 'field_benefits_services',
      2 => 'field_date_of_last_primary_care_',
      3 => 'field_diagnosis',
      4 => 'field_diagnostician',
      5 => 'field_diagnostician_address',
      6 => 'field_diagnostician_phone',
      7 => 'field_other_professionals',
      8 => 'field_other_setting',
      9 => 'field_permission_to_speak_to_doc',
      10 => 'field_primary_care_physician',
      11 => 'field_other_prof_detail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-diagnosis-treatment field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_diagnosis_treatment|entityform|appl_adult|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goals_interests|entityform|appl_adult|default';
  $field_group->group_name = 'group_goals_interests';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Goals and Interests',
    'weight' => '2',
    'children' => array(
      0 => 'field_goals',
      1 => 'field_special_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-goals-interests field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_goals_interests|entityform|appl_adult|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goals_interests|entityform|appl_adult|form';
  $field_group->group_name = 'group_goals_interests';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Goals and Interests',
    'weight' => '3',
    'children' => array(
      0 => 'field_goals',
      1 => 'field_special_interests',
      2 => 'group_history',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-goals-interests field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_goals_interests|entityform|appl_adult|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_history|entityform|appl_adult|default';
  $field_group->group_name = 'group_history';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'History',
    'weight' => '4',
    'children' => array(
      0 => 'field_legal_difficulties',
      1 => 'field_legal_explanation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-history field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_history|entityform|appl_adult|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_history|entityform|appl_adult|form';
  $field_group->group_name = 'group_history';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_goals_interests';
  $field_group->data = array(
    'label' => 'History',
    'weight' => '6',
    'children' => array(
      0 => 'field_legal_difficulties',
      1 => 'field_legal_explanation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'History',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-history field-group-fieldset',
        'description' => 'Conviction will not disqualify any applicant from participating in this program.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_history|entityform|appl_adult|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program|entityform|appl_adult|default';
  $field_group->group_name = 'group_program';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program',
    'weight' => '0',
    'children' => array(
      0 => 'field_date_of_application',
      1 => 'field_lifemap_program',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-program field-group-fieldset',
      ),
    ),
  );
  $export['group_program|entityform|appl_adult|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_statement_truth|entityform|appl_adult|form';
  $field_group->group_name = 'group_statement_truth';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statement of Truth',
    'weight' => '4',
    'children' => array(
      0 => 'field_client_signature',
      1 => 'field_sig_person_completing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Statement of Truth',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-statement-truth field-group-fieldset',
        'description' => 'I certify that information contained in this application is true and complete. I understand that false information may be grounds for not accepting me to participate or for immediate termination of participation in this program. I authorize the verification of any or all information listed above.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_statement_truth|entityform|appl_adult|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_truth|entityform|appl_adult|default';
  $field_group->group_name = 'group_truth';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'appl_adult';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statement of Truth',
    'weight' => '5',
    'children' => array(
      0 => 'field_client_signature',
      1 => 'field_sig_person_completing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Statement of Truth',
      'instance_settings' => array(
        'classes' => 'group-truth field-group-fieldset',
        'description' => 'I certify that information contained in this application is true and complete. I understand that false information may be grounds for not accepting me to participate or for immediate termination of this program. I authorize verification of any or all information listed above.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_truth|entityform|appl_adult|default'] = $field_group;

  return $export;
}
