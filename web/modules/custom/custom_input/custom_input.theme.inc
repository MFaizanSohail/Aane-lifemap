<?php
/**
 * @file custom_input.theme.inc
 * Contains custom theme functions that replace Drupal defaults.
 * @author Tech-Tamer
 */

/**
 * Returns HTML for a form element that can display the description BEFORE the label.
 *
 * @param $variables
 *   An associative array containing:
 *   - element: An associative array containing the properties of the element.
 *     Properties used: #title, #title_display, #description, #id, #required,
 *     #children, #type, #name.
 *
 * @ingroup themeable
 */
function theme_custom_input_element($variables) {

  $element = &$variables['element'];
//  if ( !empty($element['#field_name']) && 'field_test_text' == $element['#field_name'] )
//    kpr($element);

  // CUSTOM_INPUT CODE
  // get the custom input settings for this field
  // we could use hook_widget_form_alter(), but this is easier, and works for any field that uses this theming function, even
  // if the widget itself was not recognized by custom_input_widget_form_alter()
  $settings = NULL;
  if ( !empty($element['#custom_input']) ) $settings =&  $element['#custom_input'];

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('cie','form-item');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  // for checkbox and radio, we want the input class here, on the wrapper, not on the input itself
  if ( !empty($element['#type']) && in_array($element['#type'], array('radio', 'checkbox')) ) {
    if ( !empty($settings['input_classes']) ) {
      custom_input_apply_classes($attributes, $settings['input_classes']);
    }
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  // CUSTOM INPUT SPECIFIC CODE: create the help element
  $help = $help_moved = '';
  if ( !empty($element['#description']) ) {
    $help_attr = array('class'=>array('description'));
    // bring in the custom attributes
    if ( !empty($settings['help_classes']) ) custom_input_apply_classes($help_attr, $settings['help_classes']);
    if ( !empty($settings['advanced']['help_attr']) ) custom_input_apply_attr($help_attr, $settings['advanced']['help_attr']);
    //construct the element
    $help_element = '<div' . drupal_attributes($help_attr) . '>' . $element['#description']. "</div>\n";
    //assign the element to a variable depending on field settings -- either after the label, or (as in default) after the other elements.
    if ( !empty($settings['move_help']) ) {
      $help_moved = $help_element;
    } else {
      $help = $help_element;
    }
  }

  // REVISED BY CUSTOM INPUT TO ADD THE $help_moved text and to use the custom label function
  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('custom_input_element_label', $variables) . $help_moved;
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('custom_input_element_label', $variables) . "\n" . $help_moved;
      break;

    case 'none':
    case 'attribute':
      $output .= $help_moved;
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  // REVISED BY CUSTOM INPUT TO USE THE $help element constructed above.
  $output .= $help;

  $output .= "</div>\n";

  return $output;
}

/**
 * Returns HTML for an individual form element with multiple values.
 *
 * Basically a copy of modules/field/field.form.inc/theme_field_multiple_value_form()
 * But can change and style the label, and style and move the help text
 *
 * @param $variables
 *   An associative array containing:
 *   - element: A render element representing the form element.
 *
 * @ingroup themeable
 */
function theme_custom_input_multiple_element($variables) {

  $element = $variables['element'];
//  kpr($element);
  $output = '';

  if ($element['#cardinality'] > 1 || $element['#cardinality'] == FIELD_CARDINALITY_UNLIMITED) {
    $table_id = drupal_html_id($element['#field_name'] . '_values');
    $order_class = $element['#field_name'] . '-delta-order';
    $required = !empty($element['#required']) ? theme('form_required_marker', $variables) : '';

    // CUSTOM_INPUT CODE
    // get the custom input settings for this field
    $settings = NULL;
    if ( !empty($element['#custom_input']) ) $settings =&  $element['#custom_input'];
    //take care of the prompt
    if ( !empty($settings['prompt']) ) $element['#title'] = $settings['prompt'];

    $title = t('!title !required', array('!title' => $element['#title'], '!required' => $required));

    // revise the header, if applicable
    if ( !empty($settings['label_classes']) || !empty($settings['advanced']['label_attr']) ) {
      if ( !empty($settings['label_classes']) ) {
        // add the custom classes to the label element AND the th
        $hclasses = custom_input_sanitize_classes($settings['label_classes']);
        $hclass = array_merge(array('field-label'), $hclasses);
      } else {
        $hclasses = NULL;
        $hclass = array('field-label');
      }
      if ( $hclasses ) {
        $label_attr = array('class'=>$hclasses);
      } else {
        $label_attr = array();
      }
      // add custom attributes to the label only
      if ( !empty($settings['advanced']['label_attr']) ) {
        custom_input_apply_attr($label_attr, $settings['advanced']['label_attr']);
      }
      $hdata = '<label' . drupal_attributes($label_attr) . '>' . $title . '</label>';

    } else {
      $hdata = '<label>' . $title . "</label>";
      $hclass = array('field-label');
    }

    // figure out the help
    $help = $help_moved = '';
    if ( !empty($element['#description']) ) {
      $help_attr = array('class'=>array('description'));
      // bring in the custom attributes
      if ( !empty($settings['help_classes']) ) custom_input_apply_classes($help_attr, $settings['help_classes']);
      if ( !empty($settings['advanced']['help_attr']) ) custom_input_apply_attr($help_attr, $settings['advanced']['help_attr']);
      //construct the element
      $help_element = '<div' . drupal_attributes($help_attr) . '>' . $element['#description']. "</div>\n";
      //assign the element to a variable depending on field settings -- either after the label, or (as in default) after the other elements.
      if ( !empty($settings['move_help']) ) {
        $help_moved = "\n" . $help_element;
      } else {
        $help = $help_element . "\n";
      }
    }

    $header = array(
      array(
        'data' => $hdata . $help_moved,
        'colspan' => 2,
        'class' => $hclass,
      ),
      t('Order'),
    );

    $rows = array();

    // Sort items according to '_weight' (needed when the form comes back after
    // preview or failed validation)
    $items = array();
    foreach (element_children($element) as $key) {
      if ($key === 'add_more') {
        $add_more_button = &$element[$key];
      }
      else {
        $items[] = &$element[$key];
      }
    }
    usort($items, '_field_sort_items_value_helper');

    // Add the items as table rows.
    foreach ($items as $key => $item) {
      $item['_weight']['#attributes']['class'] = array($order_class);
      $delta_element = drupal_render($item['_weight']);
      $cells = array(
        array('data' => '', 'class' => array('field-multiple-drag')),
        drupal_render($item),
        array('data' => $delta_element, 'class' => array('delta-order')),
      );
      $rows[] = array(
        'data' => $cells,
        'class' => array('draggable'),
      );
    }

    $output = '<div class="form-item">';
    $output .= theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => $table_id, 'class' => array('field-multiple-table'))));
    $output .= $help; //if help is not moved
    $output .= '<div class="clearfix">' . drupal_render($add_more_button) . '</div>';
    $output .= '</div>';

    drupal_add_tabledrag($table_id, 'order', 'sibling', $order_class);
  }
  else {
    foreach (element_children($element) as $key) {
      $output .= drupal_render($element[$key]);
    }
  }

  return $output;
}

/**
 * Returns HTML for a form element label and required marker.
 * Overrides the default theme_form_element_label in includes/form.inc so that attributes can be added to the label
 * Is essentially a copy of the default theme function, with 2 extra lines of code.
 */
function theme_custom_input_element_label($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = array('option');
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = array('element-invisible');
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

  // ADDITIONAL CODE TO BRING IN THE CUSTOM ATTRIBUTES
  if ( !empty($element['#custom_input']['label_classes']) ) custom_input_apply_classes($attributes, $element['#custom_input']['label_classes']);
  if ( !empty($element['#custom_input']['advanced']['label_attr']) ) custom_input_apply_attr($attributes, $element['#custom_input']['advanced']['label_attr']);

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
}

/**
 * Returns HTML for a textfield form element.
 * Overrides the default theme_textfield in includes/form.inc so that type attribute can be customized
 * Otherwise a straight copy.
 *
 * @param $variables
 *   An associative array containing:
 *   - element: An associative array containing the properties of the element.
 *     Properties used: #title, #value, #description, #size, #maxlength,
 *     #required, #attributes, #autocomplete_path.
 */
function theme_custom_input_textfield($variables) {
  $element = $variables['element'];
  // custom input specific code - only set type as "text" if not already set.  Permits use of HTML5 input types.
  if ( empty($element['#attributes']['type']) ) $element['#attributes']['type'] = 'text';
  element_set_attributes($element, array('id', 'name', 'value', 'size', 'maxlength'));
  _form_set_class($element, array('form-text'));

  $extra = '';
  if ($element['#autocomplete_path'] && drupal_valid_path($element['#autocomplete_path'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';

    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#attributes']['id'] . '-autocomplete';
    $attributes['value'] = url($element['#autocomplete_path'], array('absolute' => TRUE));
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    $extra = '<input' . drupal_attributes($attributes) . ' />';
  }

  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';

  return $output . $extra;
}
