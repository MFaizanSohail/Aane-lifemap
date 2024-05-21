<?php
/**
 * @file
 * aane_goal_form_and_coaching_replationships.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function aane_goal_form_and_coaching_replationships_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-appointment-field_appt_location'.
  $field_instances['node-appointment-field_appt_location'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Location',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_appt_location',
    'label' => 'Where did the appointment take place?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-appointment-field_appt_notes'.
  $field_instances['node-appointment-field_appt_notes'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_appt_notes',
    'label' => 'Clinical Notes',
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
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => '',
        ),
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-appointment-field_expenses'.
  $field_instances['node-appointment-field_expenses'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Omit dollar sign ($).',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_expenses',
    'label' => 'Expenses',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-appointment-field_funding_program'.
  $field_instances['node-appointment-field_funding_program'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For coach\'s information only - can\'t be changed here.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_funding_program',
    'label' => 'Funding Program',
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
            'disable_prepop' => 1,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 1,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => 'enabled',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-appointment-field_mileage'.
  $field_instances['node-appointment-field_mileage'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Number of miles.',
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
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_mileage',
    'label' => 'Mileage',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-appointment-field_payment_status'.
  $field_instances['node-appointment-field_payment_status'] = array(
    'bundle' => 'appointment',
    'default_value' => array(
      0 => array(
        'tid' => 108,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_payment_status',
    'label' => 'Payment Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-appointment-field_private_payment'.
  $field_instances['node-appointment-field_private_payment'] = array(
    'bundle' => 'appointment',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_private_payment',
    'label' => 'Private Payment (in whole or in part)',
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
            'disable_prepop' => 1,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 1,
          ),
          'enabled' => 1,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => 'enabled',
          ),
          'wrapper_classes' => '',
        ),
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-appointment-field_time_client'.
  $field_instances['node-appointment-field_time_client'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_time_client',
    'label' => 'Client',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-appointment-field_time_coach'.
  $field_instances['node-appointment-field_time_coach'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_time_coach',
    'label' => 'Coach',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'og_context' => 0,
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-appointment-field_time_entry_date'.
  $field_instances['node-appointment-field_time_entry_date'] = array(
    'bundle' => 'appointment',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_time_entry_date',
    'label' => 'Date & Time',
    'required' => 1,
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => 'enabled',
          ),
          'wrapper_classes' => '',
        ),
        'increment' => 5,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-1:+0',
      ),
      'type' => 'date_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-appointment-field_time_entry_end'.
  $field_instances['node-appointment-field_time_entry_end'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter as a time:  e.g. 10:30 am',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_time_entry_end',
    'label' => 'When did the appointment end?',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-appointment-field_time_entry_length'.
  $field_instances['node-appointment-field_time_entry_length'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Number of hours. Use decimals for partial hours, i.e. .25 for 15 minutes; .5 for 30 minutes; .75 for 45 minutes.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_time_entry_length',
    'label' => 'Appt. Length',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => 'type|number
min|0
step|.25',
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
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-appointment-field_time_entry_notes'.
  $field_instances['node-appointment-field_time_entry_notes'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Notes regarding reimbursement or payment for this appointment, if any.  Do not use this field for clinical observations.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_time_entry_notes',
    'label' => 'Expense/Other Notes',
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
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => '',
        ),
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-appointment-field_time_entry_type'.
  $field_instances['node-appointment-field_time_entry_type'] = array(
    'bundle' => 'appointment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_time_entry_type',
    'label' => 'Time Entry Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-coaching_relationship-field_coaching_active'.
  $field_instances['node-coaching_relationship-field_coaching_active'] = array(
    'bundle' => 'coaching_relationship',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_coaching_active',
    'label' => 'Active',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-coaching_relationship-field_disable_email'.
  $field_instances['node-coaching_relationship-field_disable_email'] = array(
    'bundle' => 'coaching_relationship',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_disable_email',
    'label' => 'Disable Email',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-coaching_relationship-field_hours_since_report'.
  $field_instances['node-coaching_relationship-field_hours_since_report'] = array(
    'bundle' => 'coaching_relationship',
    'deleted' => 0,
    'description' => 'This field will automatically calculate the number of assessment hours that have been logged between a coach and a client since the coach last created a report for that client.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Hours since last report',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_hours_since_report',
    'label' => 'Hours Since Report',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'computed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-coaching_relationship-field_notes'.
  $field_instances['node-coaching_relationship-field_notes'] = array(
    'bundle' => 'coaching_relationship',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-coaching_relationship-field_rel_client'.
  $field_instances['node-coaching_relationship-field_rel_client'] = array(
    'bundle' => 'coaching_relationship',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_rel_client',
    'label' => 'Client',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'og_context' => 0,
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-coaching_relationship-field_rel_coach'.
  $field_instances['node-coaching_relationship-field_rel_coach'] = array(
    'bundle' => 'coaching_relationship',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_rel_coach',
    'label' => 'Coach',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'og_context' => 0,
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-goal-field_date_started'.
  $field_instances['node-goal-field_date_started'] = array(
    'bundle' => 'goal',
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
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_date_started',
    'label' => 'Date Started',
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
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
        'increment' => 15,
        'input_format' => 'M j Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-goal-field_details'.
  $field_instances['node-goal-field_details'] = array(
    'bundle' => 'goal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter any details or notes about your goal.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_details',
    'label' => 'Details',
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
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-goal-field_goal_term'.
  $field_instances['node-goal-field_goal_term'] = array(
    'bundle' => 'goal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_goal_term',
    'label' => 'Goal',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => 'col-md-6',
        ),
      ),
      'type' => 'taxonomy_hs',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-goal-field_if_active_current_status'.
  $field_instances['node-goal-field_if_active_current_status'] = array(
    'bundle' => 'goal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_if_active_current_status',
    'label' => 'If active, level of progress?',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-goal-field_if_inactive_why'.
  $field_instances['node-goal-field_if_inactive_why'] = array(
    'bundle' => 'goal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'If inactive, why?',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_if_inactive_why',
    'label' => 'If inactive, why?',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-goal-field_ref_client'.
  $field_instances['node-goal-field_ref_client'] = array(
    'bundle' => 'goal',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ref_client',
    'label' => 'Client',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'custom_input' => array(
          'advanced' => array(
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => 'col-md-12',
        ),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-goal-field_status'.
  $field_instances['node-goal-field_status'] = array(
    'bundle' => 'goal',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_status',
    'label' => 'Goal Status',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_appropriate_greetings'.
  $field_instances['node-skills_assess_adult-field_appropriate_greetings'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Appropriate greetings',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_appropriate_greetings',
    'label' => 'I use appropriate greetings',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_ask_accept_support'.
  $field_instances['node-skills_assess_adult-field_ask_accept_support'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Ask Accept Support',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ask_accept_support',
    'label' => 'I am able to ask for/accept support',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_bank_balance'.
  $field_instances['node-skills_assess_adult-field_bank_balance'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Bank balance',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_bank_balance',
    'label' => 'Maintain my checkbook',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_basic_nutrition'.
  $field_instances['node-skills_assess_adult-field_basic_nutrition'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Basic nutrition',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_basic_nutrition',
    'label' => 'I know basic nutrition facts',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_benefits_exercise'.
  $field_instances['node-skills_assess_adult-field_benefits_exercise'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Benefits exercise',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_benefits_exercise',
    'label' => 'I understand the benefits of exercise',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_best_environments'.
  $field_instances['node-skills_assess_adult-field_best_environments'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Best environments',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_best_environments',
    'label' => 'I know which work environments I perform best in',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_clean_room'.
  $field_instances['node-skills_assess_adult-field_clean_room'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Clean room',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_clean_room',
    'label' => 'I clean my room/apartment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_clean_up'.
  $field_instances['node-skills_assess_adult-field_clean_up'] = array(
    'bundle' => 'skills_assess_adult',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Clean up',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_clean_up',
    'label' => 'I clean up after meals',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_college_experience_academ'.
  $field_instances['node-skills_assess_adult-field_college_experience_academ'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_college_experience_academ',
    'label' => 'I want my college experience to be about academics only',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_college_experience_social'.
  $field_instances['node-skills_assess_adult-field_college_experience_social'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_college_experience_social',
    'label' => 'I want my college experience to be a time of social and sexual exploration',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_comfortable_where_living'.
  $field_instances['node-skills_assess_adult-field_comfortable_where_living'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Comfortable where living',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_comfortable_where_living',
    'label' => 'I feel comfortable where I am living',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_communicate_friends'.
  $field_instances['node-skills_assess_adult-field_communicate_friends'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Communicate with friends',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_communicate_friends',
    'label' => 'I communicate with friends/acquaintances at least once a week ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_communicate_with_classmate'.
  $field_instances['node-skills_assess_adult-field_communicate_with_classmate'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_communicate_with_classmate',
    'label' => 'I communicate with my classmates regularly by email or in person',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_communicate_with_professor'.
  $field_instances['node-skills_assess_adult-field_communicate_with_professor'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_communicate_with_professor',
    'label' => 'I communicate with my professors regularly by email or in person ',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_confident_handling_work'.
  $field_instances['node-skills_assess_adult-field_confident_handling_work'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_confident_handling_work',
    'label' => 'I feel confident in handling my workload',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_confident_have_credentials'.
  $field_instances['node-skills_assess_adult-field_confident_have_credentials'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Confident have credentials',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_confident_have_credentials',
    'label' => 'I am confident that I have the necessary educational background and credentials required for my desired employment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_confident_have_skills'.
  $field_instances['node-skills_assess_adult-field_confident_have_skills'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Confident have skills',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_confident_have_skills',
    'label' => 'I am confident that I have the skills required for my desired employment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_contact_residence_adviser'.
  $field_instances['node-skills_assess_adult-field_contact_residence_adviser'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_contact_residence_adviser',
    'label' => 'I feel comfortable contacting my resident advisor or resident director when I am having a problem',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_conversation_in_person'.
  $field_instances['node-skills_assess_adult-field_conversation_in_person'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Conversation in person',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_conversation_in_person',
    'label' => 'I enjoy having conversations in person',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_date_assessment'.
  $field_instances['node-skills_assess_adult-field_date_assessment'] = array(
    'bundle' => 'skills_assess_adult',
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
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_date_assessment',
    'label' => 'Assessment Date',
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
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => '',
        ),
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_difficulty_meeting_duedate'.
  $field_instances['node-skills_assess_adult-field_difficulty_meeting_duedate'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_difficulty_meeting_duedate',
    'label' => 'I have difficulty meeting due dates for assignments',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_difficulty_working_group'.
  $field_instances['node-skills_assess_adult-field_difficulty_working_group'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_difficulty_working_group',
    'label' => 'I have difficulty working on group assignments',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_disagreements'.
  $field_instances['node-skills_assess_adult-field_disagreements'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Manage disagreement',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_disagreements',
    'label' => 'I know how to work out a disagreement with my family/friends/teachers/co-workers etc.',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_dress_for_weather'.
  $field_instances['node-skills_assess_adult-field_dress_for_weather'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Dress for weather',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_dress_for_weather',
    'label' => 'I dress appropriately for the weather',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_drive_public_transport'.
  $field_instances['node-skills_assess_adult-field_drive_public_transport'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Drive/Public Transport',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_drive_public_transport',
    'label' => 'I am able to drive/take public transportation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_email_use'.
  $field_instances['node-skills_assess_adult-field_email_use'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Email Use',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email_use',
    'label' => 'I use email to communicate',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_enjoy_attending_college'.
  $field_instances['node-skills_assess_adult-field_enjoy_attending_college'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_enjoy_attending_college',
    'label' => 'I enjoy attending college classes',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_enjoy_living_residence'.
  $field_instances['node-skills_assess_adult-field_enjoy_living_residence'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_enjoy_living_residence',
    'label' => 'I enjoy living in the residence hall',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_finish_boring_difficult'.
  $field_instances['node-skills_assess_adult-field_finish_boring_difficult'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Follow through on tasks',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_finish_boring_difficult',
    'label' => 'I follow through on tasks',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_food_shopping'.
  $field_instances['node-skills_assess_adult-field_food_shopping'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Food Shopping',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_food_shopping',
    'label' => 'I shop for groceries',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_get_along_roommate'.
  $field_instances['node-skills_assess_adult-field_get_along_roommate'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_get_along_roommate',
    'label' => 'I get along with my roommate(s)',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_get_up_on_own'.
  $field_instances['node-skills_assess_adult-field_get_up_on_own'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Get up on own',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_get_up_on_own',
    'label' => 'I get up on my own (use alarm etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_hang_out_friends'.
  $field_instances['node-skills_assess_adult-field_hang_out_friends'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Meet with friends',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_hang_out_friends',
    'label' => 'I meet with friends/acquaintances at least once a month',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_interact_comfortably_diver'.
  $field_instances['node-skills_assess_adult-field_interact_comfortably_diver'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_interact_comfortably_diver',
    'label' => 'I interact comfortably with people from diverse religious and racial backgrounds',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_involved_student_clubs'.
  $field_instances['node-skills_assess_adult-field_involved_student_clubs'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_involved_student_clubs',
    'label' => 'I am involved in student clubs or organizations',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_know_desired_job'.
  $field_instances['node-skills_assess_adult-field_know_desired_job'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Know desired job',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_know_desired_job',
    'label' => 'I know what type of employment I want',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_know_how_get_extra_help'.
  $field_instances['node-skills_assess_adult-field_know_how_get_extra_help'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_know_how_get_extra_help',
    'label' => 'I know how to get extra help when I need it',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_know_roomate_expects'.
  $field_instances['node-skills_assess_adult-field_know_roomate_expects'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_know_roomate_expects',
    'label' => 'I know what my roommate(s) expect(s) of me',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_know_skills_interests'.
  $field_instances['node-skills_assess_adult-field_know_skills_interests'] = array(
    'bundle' => 'skills_assess_adult',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Know Skills and Interests',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_know_skills_interests',
    'label' => 'I know what type of skills are required for my desired employment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_lend_borrow_money'.
  $field_instances['node-skills_assess_adult-field_lend_borrow_money'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Lend/borrow money',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_lend_borrow_money',
    'label' => 'I lend/borrow money',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_listen_and_understand'.
  $field_instances['node-skills_assess_adult-field_listen_and_understand'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Listen and Understand',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listen_and_understand',
    'label' => 'I am able to take others\' perspectives',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_live_within_income'.
  $field_instances['node-skills_assess_adult-field_live_within_income'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Live within income',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_live_within_income',
    'label' => 'I live within my income',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_long_term_assignment'.
  $field_instances['node-skills_assess_adult-field_long_term_assignment'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_long_term_assignment',
    'label' => 'I know how to plan long term assignments',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_meals'.
  $field_instances['node-skills_assess_adult-field_meals'] = array(
    'bundle' => 'skills_assess_adult',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Meals',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_meals',
    'label' => 'I prepare my own meals',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_notes'.
  $field_instances['node-skills_assess_adult-field_notes'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
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
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_on_time'.
  $field_instances['node-skills_assess_adult-field_on_time'] = array(
    'bundle' => 'skills_assess_adult',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'On time',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_on_time',
    'label' => 'I arrive at destination/appointments on time',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_on_time_assignment'.
  $field_instances['node-skills_assess_adult-field_on_time_assignment'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_on_time_assignment',
    'label' => 'I turn my assignments in on time',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_on_time_classes'.
  $field_instances['node-skills_assess_adult-field_on_time_classes'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_on_time_classes',
    'label' => 'I am on time for my classes',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_organize_papers'.
  $field_instances['node-skills_assess_adult-field_organize_papers'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Organize papers',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_organize_papers',
    'label' => 'I organize important papers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_participate_class_discuss'.
  $field_instances['node-skills_assess_adult-field_participate_class_discuss'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_participate_class_discuss',
    'label' => 'I participate in class discussions and/or activities',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_pay_bills'.
  $field_instances['node-skills_assess_adult-field_pay_bills'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Pay bills',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_pay_bills',
    'label' => 'I pay my bills on time',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_phone_use'.
  $field_instances['node-skills_assess_adult-field_phone_use'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Phone use',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone_use',
    'label' => 'I use a phone to communicate',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_plan_time'.
  $field_instances['node-skills_assess_adult-field_plan_time'] = array(
    'bundle' => 'skills_assess_adult',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Plan time',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_plan_time',
    'label' => 'I effectively plan my time each day',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_pressure_attend_college'.
  $field_instances['node-skills_assess_adult-field_pressure_attend_college'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_pressure_attend_college',
    'label' => 'I feel pressure to attend college, but I don\'t want to go',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_ref_client'.
  $field_instances['node-skills_assess_adult-field_ref_client'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ref_client',
    'label' => 'Client',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
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
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_regular_exercise'.
  $field_instances['node-skills_assess_adult-field_regular_exercise'] = array(
    'bundle' => 'skills_assess_adult',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Regular Exercise',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_regular_exercise',
    'label' => 'I exercise at least 2 times per week (walk, run, swim, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_regular_meals'.
  $field_instances['node-skills_assess_adult-field_regular_meals'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Regular meals',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_regular_meals',
    'label' => 'I eat regular meals',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_regular_sleep_schedule'.
  $field_instances['node-skills_assess_adult-field_regular_sleep_schedule'] = array(
    'bundle' => 'skills_assess_adult',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Regular sleep schedule',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_regular_sleep_schedule',
    'label' => 'I maintain a regular AM/PM schedule (sleep at night/awake during day)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_shower_regularly'.
  $field_instances['node-skills_assess_adult-field_shower_regularly'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Shower regularly',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_shower_regularly',
    'label' => 'I shower/bathe at least every 2 days',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_sleep_enough'.
  $field_instances['node-skills_assess_adult-field_sleep_enough'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Sleep enough',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_sleep_enough',
    'label' => 'I sleep 7-8 hours per night',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_social_events'.
  $field_instances['node-skills_assess_adult-field_social_events'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Social Events',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_social_events',
    'label' => 'I attend social events at least once per month (movies, sports event, party, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_start_boring_difficult'.
  $field_instances['node-skills_assess_adult-field_start_boring_difficult'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Initiate tasks',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_start_boring_difficult',
    'label' => 'I am able to initiate tasks',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_store_belongings'.
  $field_instances['node-skills_assess_adult-field_store_belongings'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Store belongings',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_store_belongings',
    'label' => 'I store my belongings in cabinets/closets etc.',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_studying_something_passion'.
  $field_instances['node-skills_assess_adult-field_studying_something_passion'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_studying_something_passion',
    'label' => 'I am studying something I have a passion for',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_support_groups_clubs'.
  $field_instances['node-skills_assess_adult-field_support_groups_clubs'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Support Groups Clubs',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_support_groups_clubs',
    'label' => 'I attend social/support groups at least once per month',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_sure_major_right'.
  $field_instances['node-skills_assess_adult-field_sure_major_right'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_sure_major_right',
    'label' => 'I am sure that my major is right for me',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_take_medications'.
  $field_instances['node-skills_assess_adult-field_take_medications'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Take medications',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_take_medications',
    'label' => 'I take medications according to directions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_tell_professors_aspergers'.
  $field_instances['node-skills_assess_adult-field_tell_professors_aspergers'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tell_professors_aspergers',
    'label' => 'I know how and when to tell my professors that I have Asperger’s Syndrome',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_trash'.
  $field_instances['node-skills_assess_adult-field_trash'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Throw out trash',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_trash',
    'label' => 'I throw out trash',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_understand_as'.
  $field_instances['node-skills_assess_adult-field_understand_as'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Understand AS',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_understand_as',
    'label' => 'I understand the components of AS',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_understand_being_presented'.
  $field_instances['node-skills_assess_adult-field_understand_being_presented'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_understand_being_presented',
    'label' => 'I understand what is being presented or discussed in class',
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
            'disable_prepop' => 0,
            'help_attr' => '',
            'input_attr' => '',
            'label_attr' => '',
            'prepop' => 0,
          ),
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'states' => array(
            'conditions' => '',
            'remote_field' => '',
            'state' => '',
          ),
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_understand_challenges'.
  $field_instances['node-skills_assess_adult-field_understand_challenges'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Understand Challenges',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_understand_challenges',
    'label' => 'I understand the challenges I would bring to my desired employment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_understand_strengths'.
  $field_instances['node-skills_assess_adult-field_understand_strengths'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Understand strengths',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_understand_strengths',
    'label' => 'I understand the strengths that I would bring to my desired employment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_use_credit_cards'.
  $field_instances['node-skills_assess_adult-field_use_credit_cards'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Use credit cards',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_use_credit_cards',
    'label' => 'Limit my credit card use',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_wash_dishes_pots_and_pans'.
  $field_instances['node-skills_assess_adult-field_wash_dishes_pots_and_pans'] = array(
    'bundle' => 'skills_assess_adult',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Wash dishes/pots and pans',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wash_dishes_pots_and_pans',
    'label' => 'I wash dishes / pots and pans',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_wear_clean_clothes'.
  $field_instances['node-skills_assess_adult-field_wear_clean_clothes'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Wear clean clothes',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wear_clean_clothes',
    'label' => 'I wear clean clothes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_what_to_keep_discard'.
  $field_instances['node-skills_assess_adult-field_what_to_keep_discard'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'What to keep discard',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_what_to_keep_discard',
    'label' => 'I know what to keep and what to throw out',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-skills_assess_adult-field_work_customs'.
  $field_instances['node-skills_assess_adult-field_work_customs'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Work Customs',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_work_customs',
    'label' => 'I understand that there are different types of work customs at different work sites',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_adult-field_work_on_difficulties'.
  $field_instances['node-skills_assess_adult-field_work_on_difficulties'] = array(
    'bundle' => 'skills_assess_adult',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Work on Difficulties',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_work_on_difficulties',
    'label' => 'I am willing to work on areas of difficulty',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_appropriate_greetings'.
  $field_instances['node-skills_assess_teen-field_appropriate_greetings'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Appropriate greetings',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_appropriate_greetings',
    'label' => 'I use appropriate greetings',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_ask_accept_support'.
  $field_instances['node-skills_assess_teen-field_ask_accept_support'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Ask Accept Support',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ask_accept_support',
    'label' => 'I am able to ask for and accept accommodations or support',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_ask_for_references'.
  $field_instances['node-skills_assess_teen-field_ask_for_references'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Ask for references',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ask_for_references',
    'label' => 'I am able to ask teachers, coaches, or other adults who know me well, for references',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_atm_use'.
  $field_instances['node-skills_assess_teen-field_atm_use'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'ATM use',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_atm_use',
    'label' => 'I can use an ATM card',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_bank_balance'.
  $field_instances['node-skills_assess_teen-field_bank_balance'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Bank balance',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_bank_balance',
    'label' => 'I can check my bank balance',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_basic_nutrition'.
  $field_instances['node-skills_assess_teen-field_basic_nutrition'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Basic nutrition',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_basic_nutrition',
    'label' => 'I know basic nutrition facts & apply them when I eat',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_best_environments'.
  $field_instances['node-skills_assess_teen-field_best_environments'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Best environments',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_best_environments',
    'label' => 'I know which work environments I perform best in',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_broken_glass'.
  $field_instances['node-skills_assess_teen-field_broken_glass'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Broken glass',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_broken_glass',
    'label' => 'I can clean up broken glass',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_challenges_strengths'.
  $field_instances['node-skills_assess_teen-field_challenges_strengths'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Challenges-Strengths',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_challenges_strengths',
    'label' => 'I understand how my mixture of challenges and strengths affect me',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_change_sheets'.
  $field_instances['node-skills_assess_teen-field_change_sheets'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Change sheets',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_change_sheets',
    'label' => 'I can change the sheets and make a bed',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_clean_out_fridge'.
  $field_instances['node-skills_assess_teen-field_clean_out_fridge'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Clean out fridge',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_clean_out_fridge',
    'label' => 'I clean out the fridge',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_clean_room'.
  $field_instances['node-skills_assess_teen-field_clean_room'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Clean room',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_clean_room',
    'label' => 'I clean my room',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_clean_up'.
  $field_instances['node-skills_assess_teen-field_clean_up'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Clean up',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_clean_up',
    'label' => 'I put food away after a meal, wash dishes and wipe off counter/tables',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_clothes_for_activity'.
  $field_instances['node-skills_assess_teen-field_clothes_for_activity'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Clothes for activity',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_clothes_for_activity',
    'label' => 'I am able to choose clothes that fit the activity and setting',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_clothes_for_budget'.
  $field_instances['node-skills_assess_teen-field_clothes_for_budget'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Clothes for budget',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_clothes_for_budget',
    'label' => 'I am able to choose clothes that fit my budget',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_clothes_that_fit'.
  $field_instances['node-skills_assess_teen-field_clothes_that_fit'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Clothes that fit',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_clothes_that_fit',
    'label' => 'I am able to choose clothes that fit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_comfortable_driving'.
  $field_instances['node-skills_assess_teen-field_comfortable_driving'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please skip this question if you do not have a driver\'s license.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Comfortable driving',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_comfortable_driving',
    'label' => 'I feel comfortable driving',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_communicate_friends'.
  $field_instances['node-skills_assess_teen-field_communicate_friends'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Communicate with friends',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_communicate_friends',
    'label' => 'I communicate with friends/acquaintances at least once a week (outside of school)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_constructive_expression'.
  $field_instances['node-skills_assess_teen-field_constructive_expression'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Constructive Expression',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_constructive_expression',
    'label' => 'I am able to express my viewpoint/opinion in a constructive manner',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_contact_health_insurance'.
  $field_instances['node-skills_assess_teen-field_contact_health_insurance'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Contact health insurance',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_contact_health_insurance',
    'label' => 'I know when and how to contact my health insurance company',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_converse_strangers'.
  $field_instances['node-skills_assess_teen-field_converse_strangers'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Converse with strangers',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_converse_strangers',
    'label' => 'I am willing to have conversations with people I don\'t know well',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_date_assessment'.
  $field_instances['node-skills_assess_teen-field_date_assessment'] = array(
    'bundle' => 'skills_assess_teen',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_date_assessment',
    'label' => 'Assessment Date',
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
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => '',
        ),
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_de_stress'.
  $field_instances['node-skills_assess_teen-field_de_stress'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'De-stress',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_de_stress',
    'label' => 'I have more than one way to handle the stress or anxiety I feel with homework and studying and I know when and how to de-stress',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_disagreements'.
  $field_instances['node-skills_assess_teen-field_disagreements'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Manage disagreement',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_disagreements',
    'label' => 'I know how to work out a disagreement with my family/friends/teachers/co-workers etc.',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_dishwasher'.
  $field_instances['node-skills_assess_teen-field_dishwasher'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Dishwasher',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_dishwasher',
    'label' => 'I can use the dishwasher',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_dress_for_weather'.
  $field_instances['node-skills_assess_teen-field_dress_for_weather'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Dress for weather',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_dress_for_weather',
    'label' => 'I dress appropriately for the weather',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_drive_public_transport'.
  $field_instances['node-skills_assess_teen-field_drive_public_transport'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Drive/Public Transport',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_drive_public_transport',
    'label' => 'I am able to drive/take public transportation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_drive_weekly'.
  $field_instances['node-skills_assess_teen-field_drive_weekly'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please skip this question if you do not have a driver\'s license.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Drive weekly',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_drive_weekly',
    'label' => 'I drive at least once a week',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_email_use'.
  $field_instances['node-skills_assess_teen-field_email_use'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Email Use',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email_use',
    'label' => 'I use email to communicate',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_financial_scams'.
  $field_instances['node-skills_assess_teen-field_financial_scams'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Financial scams',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_financial_scams',
    'label' => 'I understand financial scams and know how to respond to requests',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_finish_boring_difficult'.
  $field_instances['node-skills_assess_teen-field_finish_boring_difficult'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Finish Boring Difficult',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_finish_boring_difficult',
    'label' => 'I am able to finish tasks, even when they are boring or difficult',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_food_safety'.
  $field_instances['node-skills_assess_teen-field_food_safety'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Food safety',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_food_safety',
    'label' => 'I can tell when food has gone bad',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_food_shopping'.
  $field_instances['node-skills_assess_teen-field_food_shopping'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Food Shopping',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_food_shopping',
    'label' => 'I make shopping lists and purchase items for meals',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_get_up_on_own'.
  $field_instances['node-skills_assess_teen-field_get_up_on_own'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Get up on own',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_get_up_on_own',
    'label' => 'I get up on my own (use alarm etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_group_work'.
  $field_instances['node-skills_assess_teen-field_group_work'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Group work',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_group_work',
    'label' => 'For group assignments, I can find a group to work with and communicate with the group to accomplish the project',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_handle_emergency'.
  $field_instances['node-skills_assess_teen-field_handle_emergency'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Handle Emergency',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_handle_emergency',
    'label' => 'I know who to call if there is an emergency',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_hang_out_friends'.
  $field_instances['node-skills_assess_teen-field_hang_out_friends'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Hang out with friends',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_hang_out_friends',
    'label' => 'I hang out with friends/acquaintances at least once a week (outside of school)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_internet_privacy'.
  $field_instances['node-skills_assess_teen-field_internet_privacy'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Internet privacy',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_internet_privacy',
    'label' => 'I know what information to share and what to keep private on the internet',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_internet_safety'.
  $field_instances['node-skills_assess_teen-field_internet_safety'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Internet safety',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_internet_safety',
    'label' => 'I know which internet sites are safe and which ones to avoid',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_interview_skills'.
  $field_instances['node-skills_assess_teen-field_interview_skills'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Interview Skills',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_interview_skills',
    'label' => 'I know and can use necessary interview skills to apply for a job or internship',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_job_application'.
  $field_instances['node-skills_assess_teen-field_job_application'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Job Application',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_job_application',
    'label' => 'I can fill out a job application',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_keep_up_with_school_work'.
  $field_instances['node-skills_assess_teen-field_keep_up_with_school_work'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Keep up with school work',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_keep_up_with_school_work',
    'label' => 'I am prepared for school by keeping up with assignments, turning work in on time, studying and managing group projects',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_knives'.
  $field_instances['node-skills_assess_teen-field_knives'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Knives',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_knives',
    'label' => 'I can use knives safely',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_know_first_aid'.
  $field_instances['node-skills_assess_teen-field_know_first_aid'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Know first aid',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_know_first_aid',
    'label' => 'I know and can use basic first aid',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_know_skills_interests'.
  $field_instances['node-skills_assess_teen-field_know_skills_interests'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Know Skills and Interests',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_know_skills_interests',
    'label' => 'I know the different types of jobs that might suit my interests and skills',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_lend_borrow_money'.
  $field_instances['node-skills_assess_teen-field_lend_borrow_money'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Lend/borrow money',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_lend_borrow_money',
    'label' => 'I lend/borrow money',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_listen_and_understand'.
  $field_instances['node-skills_assess_teen-field_listen_and_understand'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Listen and Understand',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listen_and_understand',
    'label' => 'I listen and try to understand someone else\'s point of view',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_manage_schedule'.
  $field_instances['node-skills_assess_teen-field_manage_schedule'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Manage schedule',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_manage_schedule',
    'label' => 'I know and manage schedule my schedule',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_manage_time'.
  $field_instances['node-skills_assess_teen-field_manage_time'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Manage time',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_manage_time',
    'label' => 'I am able to effectively manage my time so that I get my work/studying done',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_meals'.
  $field_instances['node-skills_assess_teen-field_meals'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Meals',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_meals',
    'label' => 'I can make different breakfast, lunch and dinner meals without assistance',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_microwave'.
  $field_instances['node-skills_assess_teen-field_microwave'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Microwave',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_microwave',
    'label' => 'I can use the microwave safely',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_navigate_to_new_places'.
  $field_instances['node-skills_assess_teen-field_navigate_to_new_places'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Navigate to new places',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_navigate_to_new_places',
    'label' => 'I am able to find out how to get to places I haven\'t been before and problem solve if I get lost',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_negotiate_compromise'.
  $field_instances['node-skills_assess_teen-field_negotiate_compromise'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Negotiate Compromise',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_negotiate_compromise',
    'label' => 'I am able to negotiate and compromise with classmates/roommates',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_notes'.
  $field_instances['node-skills_assess_teen-field_notes'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_on_time'.
  $field_instances['node-skills_assess_teen-field_on_time'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'On time',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_on_time',
    'label' => 'I arrive at destination/appointments on time',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_open_bank_account'.
  $field_instances['node-skills_assess_teen-field_open_bank_account'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Open Bank Account',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_open_bank_account',
    'label' => 'I can open a bank account and ask questions to a bank teller',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_organize_papers'.
  $field_instances['node-skills_assess_teen-field_organize_papers'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Organize papers',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_organize_papers',
    'label' => 'I organize important papers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_organize_school_work'.
  $field_instances['node-skills_assess_teen-field_organize_school_work'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Organize school work',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_organize_school_work',
    'label' => 'I can organize my school work and find the books, papers and files I need',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_pay_bills'.
  $field_instances['node-skills_assess_teen-field_pay_bills'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Pay bills',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_pay_bills',
    'label' => 'I pay bills online or through the mail (overdue library books, loans from parents) on time',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_phone_use'.
  $field_instances['node-skills_assess_teen-field_phone_use'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Phone use',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone_use',
    'label' => 'I use a phone to communicate',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_plan_time'.
  $field_instances['node-skills_assess_teen-field_plan_time'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Plan time',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_plan_time',
    'label' => 'I effectively plan my time each day',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_practical_strategies'.
  $field_instances['node-skills_assess_teen-field_practical_strategies'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Practical Strategies',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_practical_strategies',
    'label' => 'I am willing to try practical strategies that could help me at school, home and work',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_recognize_need_for_help'.
  $field_instances['node-skills_assess_teen-field_recognize_need_for_help'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Recognize need for help',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_recognize_need_for_help',
    'label' => 'I recognize need for help when I need help or clarification with an assignment and meet with my teachers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_ref_client'.
  $field_instances['node-skills_assess_teen-field_ref_client'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ref_client',
    'label' => 'Client',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
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
          'enabled' => 0,
          'group_classes' => '',
          'help_classes' => '',
          'input_classes' => '',
          'label_classes' => '',
          'move_help' => 0,
          'prompt' => '',
          'wrapper_classes' => '',
        ),
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_refill_medication'.
  $field_instances['node-skills_assess_teen-field_refill_medication'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Refill medication',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_refill_medication',
    'label' => 'I know when and how to refill medication',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_regular_exercise'.
  $field_instances['node-skills_assess_teen-field_regular_exercise'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Regular Exercise',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_regular_exercise',
    'label' => 'I exercise at least 3 times per week (walk, run, swim, weights etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_regular_laundry'.
  $field_instances['node-skills_assess_teen-field_regular_laundry'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Regular laundry',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_regular_laundry',
    'label' => 'I know how to and regularly do my laundry',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_regular_sleep_schedule'.
  $field_instances['node-skills_assess_teen-field_regular_sleep_schedule'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Regular sleep schedule',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_regular_sleep_schedule',
    'label' => 'I maintain a regular AM/PM schedule (sleep at night/awake during day)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_save_money'.
  $field_instances['node-skills_assess_teen-field_save_money'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Save money',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_save_money',
    'label' => 'I save money to buy things I want or need in the future',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_schedule_doctor_dentist'.
  $field_instances['node-skills_assess_teen-field_schedule_doctor_dentist'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Schedule doctor/dentist',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_schedule_doctor_dentist',
    'label' => 'I know how and can schedule doctor and dentist appointments',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_shower_regularly'.
  $field_instances['node-skills_assess_teen-field_shower_regularly'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Shower regularly',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_shower_regularly',
    'label' => 'I shower/bathe at least every 2 days',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_sleep_enough'.
  $field_instances['node-skills_assess_teen-field_sleep_enough'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Sleep enough',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_sleep_enough',
    'label' => 'I sleep 7-8 hours per night',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_social_events'.
  $field_instances['node-skills_assess_teen-field_social_events'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Social Events',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_social_events',
    'label' => 'I attend school social events (parties, sports events, trips, etc.)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_start_boring_difficult'.
  $field_instances['node-skills_assess_teen-field_start_boring_difficult'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Start Boring Difficult',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_start_boring_difficult',
    'label' => 'I am able to start tasks that I find boring or difficult',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_stove'.
  $field_instances['node-skills_assess_teen-field_stove'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Stove',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_stove',
    'label' => 'I can use the stove and stovetop safely',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_support_groups_clubs'.
  $field_instances['node-skills_assess_teen-field_support_groups_clubs'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Support Groups Clubs',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_support_groups_clubs',
    'label' => 'I attend school clubs weekly',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_supports_and_strategies'.
  $field_instances['node-skills_assess_teen-field_supports_and_strategies'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Supports and Strategies',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_supports_and_strategies',
    'label' => 'I recognize what supports or strategies help me to be successful in school and will need in college',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_take_medications'.
  $field_instances['node-skills_assess_teen-field_take_medications'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Take medications',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_take_medications',
    'label' => 'I take medications according to directions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_texting_use'.
  $field_instances['node-skills_assess_teen-field_texting_use'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Texting use',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_texting_use',
    'label' => 'I use texting to communicate',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_time_for_interests'.
  $field_instances['node-skills_assess_teen-field_time_for_interests'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Time for interests',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_time_for_interests',
    'label' => 'I am able to fit in time for interests and activities I like',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_toaster'.
  $field_instances['node-skills_assess_teen-field_toaster'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Toaster',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_toaster',
    'label' => 'I can use the toaster oven safely',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_trash'.
  $field_instances['node-skills_assess_teen-field_trash'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Throw out trash',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_trash',
    'label' => 'I throw out trash',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 35,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_try_new_strategies'.
  $field_instances['node-skills_assess_teen-field_try_new_strategies'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Try new strategies',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_try_new_strategies',
    'label' => 'I am able to try new study or homework strategies that teachers or tutors suggest',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_understand_challenges'.
  $field_instances['node-skills_assess_teen-field_understand_challenges'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Understand Challenges',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_understand_challenges',
    'label' => 'I understand the challenges I would bring to my job',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_understand_strengths'.
  $field_instances['node-skills_assess_teen-field_understand_strengths'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Understand strengths',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_understand_strengths',
    'label' => 'I understand the strengths that I would bring to my job',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_use_calendar'.
  $field_instances['node-skills_assess_teen-field_use_calendar'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Use calendar',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_use_calendar',
    'label' => 'I use a calendar (paper/electronic)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_use_credit_cards'.
  $field_instances['node-skills_assess_teen-field_use_credit_cards'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Use credit cards',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_use_credit_cards',
    'label' => 'I understand how credit cards work and when to use them and pay them off',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_use_public_transportation'.
  $field_instances['node-skills_assess_teen-field_use_public_transportation'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Use public transportation ',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_use_public_transportation',
    'label' => 'I am able to use public transportation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_visit_doctor'.
  $field_instances['node-skills_assess_teen-field_visit_doctor'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Visit doctor',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_visit_doctor',
    'label' => 'I know when I need to go to the doctor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_wear_clean_clothes'.
  $field_instances['node-skills_assess_teen-field_wear_clean_clothes'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Wear clean clothes',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wear_clean_clothes',
    'label' => 'I wear clean clothes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-skills_assess_teen-field_work_customs'.
  $field_instances['node-skills_assess_teen-field_work_customs'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Work Customs',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_work_customs',
    'label' => 'I understand that there are different types of work customs at different work sites',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_work_on_difficulties'.
  $field_instances['node-skills_assess_teen-field_work_on_difficulties'] = array(
    'bundle' => 'skills_assess_teen',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Work on Difficulties',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_work_on_difficulties',
    'label' => 'I am willing to work on areas of difficulty',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-skills_assess_teen-field_working_on_drivers_license'.
  $field_instances['node-skills_assess_teen-field_working_on_drivers_license'] = array(
    'bundle' => 'skills_assess_teen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => 'Working on driver\'s license',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_working_on_drivers_license',
    'label' => 'I am working on getting my driver\'s license',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Active');
  t('Appt. Length');
  t('Assessment Date');
  t('Client');
  t('Clinical Notes');
  t('Coach');
  t('Date & Time');
  t('Date Started');
  t('Details');
  t('Disable Email');
  t('Enter any details or notes about your goal.');
  t('Expense/Other Notes');
  t('Expenses');
  t('For coach\'s information only - can\'t be changed here.');
  t('For group assignments, I can find a group to work with and communicate with the group to accomplish the project');
  t('Funding Program');
  t('Goal');
  t('Goal Status');
  t('Hours Since Report');
  t('I am able to ask for and accept accommodations or support');
  t('I am able to ask for/accept support');
  t('I am able to ask teachers, coaches, or other adults who know me well, for references');
  t('I am able to choose clothes that fit');
  t('I am able to choose clothes that fit my budget');
  t('I am able to choose clothes that fit the activity and setting');
  t('I am able to drive/take public transportation');
  t('I am able to effectively manage my time so that I get my work/studying done');
  t('I am able to express my viewpoint/opinion in a constructive manner');
  t('I am able to find out how to get to places I haven\'t been before and problem solve if I get lost');
  t('I am able to finish tasks, even when they are boring or difficult');
  t('I am able to fit in time for interests and activities I like');
  t('I am able to initiate tasks');
  t('I am able to negotiate and compromise with classmates/roommates');
  t('I am able to start tasks that I find boring or difficult');
  t('I am able to take others\' perspectives');
  t('I am able to try new study or homework strategies that teachers or tutors suggest');
  t('I am able to use public transportation');
  t('I am confident that I have the necessary educational background and credentials required for my desired employment');
  t('I am confident that I have the skills required for my desired employment');
  t('I am involved in student clubs or organizations');
  t('I am on time for my classes');
  t('I am prepared for school by keeping up with assignments, turning work in on time, studying and managing group projects');
  t('I am studying something I have a passion for');
  t('I am sure that my major is right for me');
  t('I am willing to have conversations with people I don\'t know well');
  t('I am willing to try practical strategies that could help me at school, home and work');
  t('I am willing to work on areas of difficulty');
  t('I am working on getting my driver\'s license');
  t('I arrive at destination/appointments on time');
  t('I attend school clubs weekly');
  t('I attend school social events (parties, sports events, trips, etc.)');
  t('I attend social events at least once per month (movies, sports event, party, etc.)');
  t('I attend social/support groups at least once per month');
  t('I can change the sheets and make a bed');
  t('I can check my bank balance');
  t('I can clean up broken glass');
  t('I can fill out a job application');
  t('I can make different breakfast, lunch and dinner meals without assistance');
  t('I can open a bank account and ask questions to a bank teller');
  t('I can organize my school work and find the books, papers and files I need');
  t('I can tell when food has gone bad');
  t('I can use an ATM card');
  t('I can use knives safely');
  t('I can use the dishwasher');
  t('I can use the microwave safely');
  t('I can use the stove and stovetop safely');
  t('I can use the toaster oven safely');
  t('I clean my room');
  t('I clean my room/apartment');
  t('I clean out the fridge');
  t('I clean up after meals');
  t('I communicate with friends/acquaintances at least once a week ');
  t('I communicate with friends/acquaintances at least once a week (outside of school)');
  t('I communicate with my classmates regularly by email or in person');
  t('I communicate with my professors regularly by email or in person ');
  t('I dress appropriately for the weather');
  t('I drive at least once a week');
  t('I eat regular meals');
  t('I effectively plan my time each day');
  t('I enjoy attending college classes');
  t('I enjoy having conversations in person');
  t('I enjoy living in the residence hall');
  t('I exercise at least 2 times per week (walk, run, swim, etc.)');
  t('I exercise at least 3 times per week (walk, run, swim, weights etc.)');
  t('I feel comfortable contacting my resident advisor or resident director when I am having a problem');
  t('I feel comfortable driving');
  t('I feel comfortable where I am living');
  t('I feel confident in handling my workload');
  t('I feel pressure to attend college, but I don\'t want to go');
  t('I follow through on tasks');
  t('I get along with my roommate(s)');
  t('I get up on my own (use alarm etc.)');
  t('I hang out with friends/acquaintances at least once a week (outside of school)');
  t('I have difficulty meeting due dates for assignments');
  t('I have difficulty working on group assignments');
  t('I have more than one way to handle the stress or anxiety I feel with homework and studying and I know when and how to de-stress');
  t('I interact comfortably with people from diverse religious and racial backgrounds');
  t('I know and can use basic first aid');
  t('I know and can use necessary interview skills to apply for a job or internship');
  t('I know and manage schedule my schedule');
  t('I know basic nutrition facts');
  t('I know basic nutrition facts & apply them when I eat');
  t('I know how and can schedule doctor and dentist appointments');
  t('I know how and when to tell my professors that I have Asperger’s Syndrome');
  t('I know how to and regularly do my laundry');
  t('I know how to get extra help when I need it');
  t('I know how to plan long term assignments');
  t('I know how to work out a disagreement with my family/friends/teachers/co-workers etc.');
  t('I know the different types of jobs that might suit my interests and skills');
  t('I know what information to share and what to keep private on the internet');
  t('I know what my roommate(s) expect(s) of me');
  t('I know what to keep and what to throw out');
  t('I know what type of employment I want');
  t('I know what type of skills are required for my desired employment');
  t('I know when I need to go to the doctor');
  t('I know when and how to contact my health insurance company');
  t('I know when and how to refill medication');
  t('I know which internet sites are safe and which ones to avoid');
  t('I know which work environments I perform best in');
  t('I know who to call if there is an emergency');
  t('I lend/borrow money');
  t('I listen and try to understand someone else\'s point of view');
  t('I live within my income');
  t('I maintain a regular AM/PM schedule (sleep at night/awake during day)');
  t('I make shopping lists and purchase items for meals');
  t('I meet with friends/acquaintances at least once a month');
  t('I organize important papers');
  t('I participate in class discussions and/or activities');
  t('I pay bills online or through the mail (overdue library books, loans from parents) on time');
  t('I pay my bills on time');
  t('I prepare my own meals');
  t('I put food away after a meal, wash dishes and wipe off counter/tables');
  t('I recognize need for help when I need help or clarification with an assignment and meet with my teachers');
  t('I recognize what supports or strategies help me to be successful in school and will need in college');
  t('I save money to buy things I want or need in the future');
  t('I shop for groceries');
  t('I shower/bathe at least every 2 days');
  t('I sleep 7-8 hours per night');
  t('I store my belongings in cabinets/closets etc.');
  t('I take medications according to directions');
  t('I throw out trash');
  t('I turn my assignments in on time');
  t('I understand financial scams and know how to respond to requests');
  t('I understand how credit cards work and when to use them and pay them off');
  t('I understand how my mixture of challenges and strengths affect me');
  t('I understand that there are different types of work customs at different work sites');
  t('I understand the benefits of exercise');
  t('I understand the challenges I would bring to my desired employment');
  t('I understand the challenges I would bring to my job');
  t('I understand the components of AS');
  t('I understand the strengths that I would bring to my desired employment');
  t('I understand the strengths that I would bring to my job');
  t('I understand what is being presented or discussed in class');
  t('I use a calendar (paper/electronic)');
  t('I use a phone to communicate');
  t('I use appropriate greetings');
  t('I use email to communicate');
  t('I use texting to communicate');
  t('I want my college experience to be a time of social and sexual exploration');
  t('I want my college experience to be about academics only');
  t('I wash dishes / pots and pans');
  t('I wear clean clothes');
  t('If active, level of progress?');
  t('If inactive, why?');
  t('Limit my credit card use');
  t('Maintain my checkbook');
  t('Mileage');
  t('Notes');
  t('Notes regarding reimbursement or payment for this appointment, if any.  Do not use this field for clinical observations.');
  t('Number of hours. Use decimals for partial hours, i.e. .25 for 15 minutes; .5 for 30 minutes; .75 for 45 minutes.');
  t('Number of miles.');
  t('Omit dollar sign ($).');
  t('Payment Status');
  t('Please enter as a time:  e.g. 10:30 am');
  t('Please skip this question if you do not have a driver\'s license.');
  t('Private Payment (in whole or in part)');
  t('This field will automatically calculate the number of assessment hours that have been logged between a coach and a client since the coach last created a report for that client.');
  t('Time Entry Type');
  t('When did the appointment end?');
  t('Where did the appointment take place?');

  return $field_instances;
}
