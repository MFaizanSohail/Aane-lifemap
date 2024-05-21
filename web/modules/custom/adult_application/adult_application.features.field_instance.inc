<?php
/**
 * @file
 * adult_application.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function adult_application_field_default_field_instances() {
  
  $field_instances = array();

  // Exported field_instance: 'entityform-appl_adult-field_access_to_car'
  $field_instances['entityform-appl_adult-field_access_to_car'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 39,
      ),
    ),
    'display_label' => 'Access to car',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_access_to_car',
    'label' => 'Do you have access to a car?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-4 border',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_address'
  $field_instances['entityform-appl_adult-field_address'] = array(
    'bundle' => 'appl_adult',
    'default_value' => array(
      0 => array(
        'element_key' => 'entityform|appl_adult|field_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 29,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6 col-sm-12 clear',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_age_diagnosis'
  $field_instances['entityform-appl_adult-field_age_diagnosis'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_age_diagnosis',
    'label' => 'Age at diagnosis',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' years old',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
      ),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_benefits_services'
  $field_instances['entityform-appl_adult-field_benefits_services'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please check all that apply.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'display_label' => 'Benefits/Services',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_benefits_services',
    'label' => 'Please indicate any benefits/services you are receiving',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'SSI
Common Health
MRC
Mass Health
SSDI
DDS (DMR)
DMH',
        'available_options_php' => '',
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => 'checkbox-inline',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'clear col-md-12 border',
        ),
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_client_signature'
  $field_instances['entityform-appl_adult-field_client_signature'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please type your name to indicate that you agree to the statement of truth above.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_client_signature',
    'label' => 'Client Signature',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_date_of_application'
  $field_instances['entityform-appl_adult-field_date_of_application'] = array(
    'bundle' => 'appl_adult',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_date_of_application',
    'label' => 'Date of Application',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-12',
        ),
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_date_of_last_primary_care_'
  $field_instances['entityform-appl_adult-field_date_of_last_primary_care_'] = array(
    'bundle' => 'appl_adult',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
    ),
    'display_label' => 'Last primary care appt.',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_date_of_last_primary_care_',
    'label' => 'When was your last primary care appointment?',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6 border',
        ),
        'increment' => 15,
        'input_format' => 'M j Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-10:+0',
      ),
      'type' => 'date_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_diagnosis'
  $field_instances['entityform-appl_adult-field_diagnosis'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'display_label' => 'Diagnosis',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_diagnosis',
    'label' => 'What is your present diagnosis?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'Asperger|Asperger Syndrome
HFA|High Functioning Autism
PDD|Pervasive Developmental Disorder - Not Otherwise Specified',
        'available_options_php' => '',
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_diagnostician'
  $field_instances['entityform-appl_adult-field_diagnostician'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 8,
      ),
    ),
    'display_label' => 'Diagnosing Dr.',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_diagnostician',
    'label' => 'What is the name of the doctor  who made the diagnosis?',
    'required' => 0,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'override_format' => 'default',
      'show_component_required_marker' => 0,
      'size' => array(
        'credentials' => 20,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'title',
        'family' => 'title',
        'generational' => 'title',
        'given' => 'title',
        'middle' => 'title',
        'title' => 'title',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-sm-12 clear',
        ),
      ),
      'type' => 'name_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_diagnostician_address'
  $field_instances['entityform-appl_adult-field_diagnostician_address'] = array(
    'bundle' => 'appl_adult',
    'default_value' => array(
      0 => array(
        'element_key' => 'entityform|appl_adult|field_diagnostician_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 9,
      ),
    ),
    'display_label' => 'Dr Addr',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_diagnostician_address',
    'label' => 'Diagnosing doctor\'s address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_diagnostician_phone'
  $field_instances['entityform-appl_adult-field_diagnostician_phone'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 10,
      ),
    ),
    'display_label' => 'Dr Phone',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_diagnostician_phone',
    'label' => 'Diagnosing doctor\'s phone',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6 align-addr',
        ),
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_dob'
  $field_instances['entityform-appl_adult-field_dob'] = array(
    'bundle' => 'appl_adult',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 28,
      ),
    ),
    'display_label' => 'DOB',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_dob',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6 align-name',
        ),
        'increment' => 15,
        'input_format' => 'M j Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1950:+0',
      ),
      'type' => 'date_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_driver'
  $field_instances['entityform-appl_adult-field_driver'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 38,
      ),
    ),
    'display_label' => 'Driver',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_driver',
    'label' => 'Do you drive?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-4 border',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_email1'
  $field_instances['entityform-appl_adult-field_email1'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Primary/preferred email address',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 30,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email1',
    'label' => 'Email 1',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-3 col-sm-6 align-addr',
        ),
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_email2'
  $field_instances['entityform-appl_adult-field_email2'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Secondary/backup email address',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 31,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email2',
    'label' => 'Email 2',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-3 col-sm-6 align-name',
        ),
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_ethnicity'
  $field_instances['entityform-appl_adult-field_ethnicity'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ethnicity',
    'label' => 'Ethnicity',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'white|White (non-Hispanic)
black|Black (non-Hispanic)
hispanic|Hispanic
native|Native American or Alaskan Native
asian|Asian or Pacific Islander',
        'available_options_php' => '',
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-4 border',
        ),
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 30,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_gender'
  $field_instances['entityform-appl_adult-field_gender'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_gender',
    'label' => 'Gender',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'F|Female
M|Male',
        'available_options_php' => '',
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-4 clear border',
        ),
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 30,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_goals'
  $field_instances['entityform-appl_adult-field_goals'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Examples: time management, organization work, asking for help from teachers, working in groups, interviewing skills, planning for college, making social connections, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'display_label' => 'Goals',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_goals',
    'label' => 'Name 1 or 2 things you would like assistance with',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_income'
  $field_instances['entityform-appl_adult-field_income'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter digits only, no commas.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 41,
      ),
    ),
    'display_label' => 'Income',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_income',
    'label' => 'What is your annual income?',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-4 clear border',
        ),
      ),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_income_supplement'
  $field_instances['entityform-appl_adult-field_income_supplement'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
    ),
    'display_label' => 'Income Supplement',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_income_supplement',
    'label' => 'Does your family or someone else help supplement your income?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => 'radio-inline',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-4 border',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_legal_difficulties'
  $field_instances['entityform-appl_adult-field_legal_difficulties'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'display_label' => 'Legal difficulties',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_legal_difficulties',
    'label' => 'Have you ever been convicted of a felony?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => 'radio-inline',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-12',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_legal_explanation'
  $field_instances['entityform-appl_adult-field_legal_explanation'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'display_label' => 'Legal Explanation',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_legal_explanation',
    'label' => 'If YES, explain the number of convictions, nature of the offense(s) and how recently such offense(s) was/were committed',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-12',
        ),
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_lifemap_program'
  $field_instances['entityform-appl_adult-field_lifemap_program'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'display_label' => 'Program',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_lifemap_program',
    'label' => 'To which program are you applying?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 1,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => 'checkbox-inline',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_living_arrangements'
  $field_instances['entityform-appl_adult-field_living_arrangements'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
    ),
    'display_label' => 'Living Arrangements',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'section',
    'field_name' => 'field_living_arrangements',
    'label' => 'What are your living arrangements?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'independent|I live on my own
parents|I live with my parent(s)
spouse|I live with my spouse',
        'available_options_php' => '',
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-4 clear border',
        ),
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_notes'
  $field_instances['entityform-appl_adult-field_notes'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-12',
        ),
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_other_prof_detail'
  $field_instances['entityform-appl_adult-field_other_prof_detail'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 1,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 15,
      ),
    ),
    'display_label' => 'Other Professionals Details',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_other_prof_detail',
    'label' => 'If YES, please indicate names and specialties',
    'required' => 0,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'override_format' => 'default',
      'show_component_required_marker' => 0,
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'title',
        'family' => 'title',
        'generational' => 'title',
        'given' => 'title',
        'middle' => 'title',
        'title' => 'title',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-12',
        ),
      ),
      'type' => 'name_widget',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_other_professionals'
  $field_instances['entityform-appl_adult-field_other_professionals'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'display_label' => 'Other Professionals',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_other_professionals',
    'label' => 'Are you working with other professionals such as a therapist, coach, case manager, speech therapist, etc?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => 'radio-inline',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6 border',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_other_setting'
  $field_instances['entityform-appl_adult-field_other_setting'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'display_label' => 'Other - Setting',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_other_setting',
    'label' => 'If YES, please indicate the setting',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => 'radio-inline',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6 border',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_permission_to_speak_to_doc'
  $field_instances['entityform-appl_adult-field_permission_to_speak_to_doc'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'display_label' => 'OK to speak to Dr?',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_permission_to_speak_to_doc',
    'label' => 'May we speak with your doctor?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => 'radio-inline',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_person_name'
  $field_instances['entityform-appl_adult-field_person_name'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 27,
      ),
    ),
    'display_label' => 'Name',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_person_name',
    'label' => 'Your Name',
    'required' => 1,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'override_format' => 'default',
      'show_component_required_marker' => 0,
      'size' => array(
        'credentials' => 35,
        'family' => 12,
        'generational' => 3,
        'given' => 12,
        'middle' => 12,
        'title' => 5,
      ),
      'title_display' => array(
        'credentials' => 'title',
        'family' => 'title',
        'generational' => 'title',
        'given' => 'title',
        'middle' => 'title',
        'title' => 'title',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
      ),
      'type' => 'name_widget',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_phone1'
  $field_instances['entityform-appl_adult-field_phone1'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Primary/preferred phone number',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 32,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone1',
    'label' => 'Phone 1',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-3 col-sm-6',
        ),
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_phone2'
  $field_instances['entityform-appl_adult-field_phone2'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A secondary/backup phone number',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 33,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone2',
    'label' => 'Phone 2',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-3 col-sm-6',
        ),
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_primary_care_physician'
  $field_instances['entityform-appl_adult-field_primary_care_physician'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
    ),
    'display_label' => 'Primary care physician',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_primary_care_physician',
    'label' => 'Do you have a primary care physician?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => 'radio-inline',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6 border',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_sig_person_completing'
  $field_instances['entityform-appl_adult-field_sig_person_completing'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the person completing this application is not the client, please type that person\'s name to indicate that he or she agrees to the statement of truth above.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_sig_person_completing',
    'label' => 'Signature of person completing application',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_special_interests'
  $field_instances['entityform-appl_adult-field_special_interests'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'display_label' => 'Interests',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_special_interests',
    'label' => 'What special interests do you have?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_supplement_amount'
  $field_instances['entityform-appl_adult-field_supplement_amount'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter digits only, no commas.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 42,
      ),
    ),
    'display_label' => 'Supplement Amount',
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_supplement_amount',
    'label' => 'If YES, indicate approximate annual amount',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-4 border',
        ),
      ),
      'type' => 'number',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-appl_adult-field_work_student_status'
  $field_instances['entityform-appl_adult-field_work_student_status'] = array(
    'bundle' => 'appl_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please check all that apply.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
    ),
    'display_label' => 'Work/Student Status',
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_work_student_status',
    'label' => 'Are you currently working/in school?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'Working
In School',
        'available_options_php' => '',
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-4 border',
        ),
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 28,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A secondary/backup phone number');
  t('Address');
  t('Age at diagnosis');
  t('Are you currently working/in school?');
  t('Are you working with other professionals such as a therapist, coach, case manager, speech therapist, etc?');
  t('Client Signature');
  t('Date of Application');
  t('Date of Birth');
  t('Diagnosing doctor\'s address');
  t('Diagnosing doctor\'s phone');
  t('Do you drive?');
  t('Do you have a primary care physician?');
  t('Do you have access to a car?');
  t('Does your family or someone else help supplement your income?');
  t('Email 1');
  t('Email 2');
  t('Ethnicity');
  t('Examples: time management, organization work, asking for help from teachers, working in groups, interviewing skills, planning for college, making social connections, etc.');
  t('Gender');
  t('Have you ever been convicted of a felony?');
  t('If YES, explain the number of convictions, nature of the offense(s) and how recently such offense(s) was/were committed');
  t('If YES, indicate approximate annual amount');
  t('If YES, please indicate names and specialties');
  t('If YES, please indicate the setting');
  t('If the person completing this application is not the client, please type that person\'s name to indicate that he or she agrees to the statement of truth above.');
  t('May we speak with your doctor?');
  t('Name 1 or 2 things you would like assistance with');
  t('Notes');
  t('Phone 1');
  t('Phone 2');
  t('Please check all that apply.');
  t('Please enter digits only, no commas.');
  t('Please indicate any benefits/services you are receiving');
  t('Please type your name to indicate that you agree to the statement of truth above.');
  t('Primary/preferred email address');
  t('Primary/preferred phone number');
  t('Secondary/backup email address');
  t('Signature of person completing application');
  t('To which program are you applying?');
  t('What are your living arrangements?');
  t('What is the name of the doctor  who made the diagnosis?');
  t('What is your annual income?');
  t('What is your present diagnosis?');
  t('What special interests do you have?');
  t('When was your last primary care appointment?');
  t('Your Name');

  return $field_instances;
}
