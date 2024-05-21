<?php

/**
 * @file
 * Definition of views_plugin_argument_validate_client.
 * Based on views_plugin_argument_validate_user.inc
 */

/**
 * Validate whether an argument is a valid client and whether current user is permitted access.
 *
 * This supports only numeric arguments (UID).  This validator also sets the
 * argument's title to the username.
 */
class aane_plugin_argument_validate_client extends views_plugin_argument_validate {
  function option_definition() {
    $options = parent::option_definition();
    $options['type'] = array('default' => 'uid');

    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['type'] = array(
      '#type' => 'radios',
      '#title' => t('Type of user filter value to allow'),
      '#options' => array(
        'uid' => t('Only allow numeric UIDs'),
        'name' => t('Only allow string usernames'),
        'either' => t('Allow both numeric UIDs and string usernames'),
      ),
      '#default_value' => $this->options['type'],
    );
  }

  function convert_options(&$options) {
    if (!isset($options['type']) && isset($this->argument->options['validate_user_argument_type'])) {
      $options['type'] = $this->argument->options['validate_user_argument_type'];
    }
  }

  function validate_argument($argument) {
    $type = $this->options['type'];
    if ( !is_numeric($argument) ) {
      $argument = $GLOBALS['user']->uid;
    }
    // is_numeric() can return false positives, so we ensure it's an integer.
    // However, is_integer() will always fail, since $argument is a string.
    if (is_numeric($argument) && $argument == (int)$argument) {
      if ($type == 'uid' || $type == 'either') {
        if ($argument == $GLOBALS['user']->uid) {
          // If you assign an object to a variable in PHP, the variable
          // automatically acts as a reference, not a copy, so we use
          // clone to ensure that we don't actually mess with the
          // real global $user object.
          $account = clone $GLOBALS['user'];
        }
        $where = 'uid = :argument';
      }
    }
    else {
      if ($type == 'name' || $type == 'either') {
        $name = !empty($GLOBALS['user']->name) ? $GLOBALS['user']->name : variable_get('anonymous', t('Anonymous'));
        if ($argument == $name) {
          $account = clone $GLOBALS['user'];
        }
        $where = "name = :argument";
      }
    }

    // If we don't have a WHERE clause, the argument is invalid.
    if (empty($where)) {
      return FALSE;
    }

    if (!isset($account)) {
      $query = "SELECT uid, name FROM {users} WHERE $where";
      $account = db_query($query, array(':argument' => $argument))->fetchObject();
    }
    if (empty($account)) {
      // User not found
      return FALSE;
    }

    // check that specified account is a client
    $result = db_query('SELECT COUNT(r.name) FROM {users_roles} ur JOIN {role} r ON r.rid = ur.rid AND r.name = :client WHERE ur.uid = :uid', array(':uid' => $account->uid, ':client'=>'client'))->fetchColumn();
    if ( !$result ) return FALSE;

    // check that current user may see this client
    if ( !aane_may_see_client($account->uid) ) return FALSE;

    $this->argument->argument = $account->uid;
    $this->argument->validated_title = check_plain(format_username($account));
    return TRUE;
  }

  function process_summary_arguments(&$args) {
    // If the validation says the input is an username, we should reverse the
    // argument so it works for example for generation summary urls.
    $uids_arg_keys = array_flip($args);
    if ($this->options['type'] == 'name') {
      $users = user_load_multiple($args);
      foreach ($users as $uid => $account) {
        $args[$uids_arg_keys[$uid]] = $account->name;
      }
    }
  }
}
