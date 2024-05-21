<?php

/**
 * @file
 * Definition of tech_tamer_handler_filter_user_current_or_role.
 */

/**
 * Filter handler for the current user.
 *
 * @ingroup views_filter_handlers
 */
class tech_tamer_handler_filter_user_current_or_role extends views_handler_filter_in_operator {

  function construct() {
    parent::construct();
  }

  /**
   * Provide possible user roles as option, less authenticated user
   * Copied from views_handler_filter_user_roles.inc
   * @return array|mixed|void
   */
  function get_value_options() {
    $this->value_options = user_roles(TRUE);
    unset($this->value_options[DRUPAL_AUTHENTICATED_RID]);
  }

  /**
   * Remove empty and not empty operators
   * If not removed, should be renamed, and must provide an op_empty method.
   */
  function operators() {
    $operators = parent::operators();
    unset($operators['empty']);
    unset($operators['not empty']);
//    $operators['empty']['title'] = t("Only has the 'authenticated user' role");
//    $operators['not empty']['title'] = t("Has roles in addition to 'authenticated user'");
    return $operators;
  }

  /**
   * Override default - makes no sense to expose this filter
   */
  function can_expose() { return FALSE; }

  /**
   * Make 'OR' the default option for picking roles
   * Modified from views_handler_filter_many_to_one.inc
   * @return array
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['operator']['default'] = 'in'; // will normally want to permit viewing by admin or staff or ...
    $options['value']['default'] = array();

    return $options;
  }

  /**
   * Modify the query UNLESS current user has one of the selected roles
   * Everything after the role test copied from views_handler_filter_user_current.inc
   */
  function query() {
    $info = $this->operators();
    if (!empty($info[$this->operator]['method'])) {
      if ( $this->{$info[$this->operator]['method']}() ) return;
    }

    $this->ensure_my_table();

    $field = $this->table_alias . '.' . $this->real_field . ' ';
    $or = db_or();

    if (empty($this->value)) {
      $or->condition($field, '***CURRENT_USER***', '<>');
      if ($this->accept_null) {
        $or->isNull($field);
      }
    }
    else {
      $or->condition($field, '***CURRENT_USER***', '=');
    }
    $this->query->add_where($this->options['group'], $or);
  }

  function op_simple() {
    if ( empty($this->value) ) {
      return FALSE;
    }
    global $user;

    $selected_roles = is_array($this->value) ? $this->value : array($this->value); //get values from form
    // the following logic could be simplified a lot, but this is more readable
    $has_role = count(array_intersect_key($user->roles, $selected_roles));
    if ( 'in' == $this->operator && $has_role ) {
      return TRUE;
    }
    if ( 'not in' == $this->operator && !$has_role ) {
      return TRUE;
    }
    return FALSE;
//    $this->ensure_my_table();

//    $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", array_values($this->value), $this->operator);
  }

}
