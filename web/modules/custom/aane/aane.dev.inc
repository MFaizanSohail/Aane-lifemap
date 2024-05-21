<?php
/**
 * @file aane.dev.inc
 * Contains miscellaneous dev and import functions not needed in the normal course
 */

function aane_test() {
  $form_id = 6;
  $uid = 120;
  $application = entityform_load($form_id);
  $application->uid = $uid;
  entityform_save($application);

  /** @var $wrapper EntityDrupalWrapper */
  $wrapper = entity_metadata_wrapper('entityform', $application);
  //  $wrapper->uid = $uid;
  //  $wrapper->save();
  return '<pre>' . print_r($application,true) . '</pre>';
}

/**
 * Quick function to move data from one field to another after changing type of field
 * @return array
 */
function aane_move_hhold_tasks() {
  $nids = db_query('SELECT nid FROM {node} n JOIN {field_data_field_household_tasks} t ON t.entity_id = n.nid WHERE type LIKE :intake', array(':intake'=>'intake%'))->fetchCol();
  $output = array();
  foreach ( $nids as $nid ) {
    $node = node_load($nid);
    $wrap = entity_metadata_wrapper('node',$node);
    $old_text = $wrap->field_household_tasks->value();
    $new_text = $wrap->field_hhold_tasks->value();

    if ( empty($new_text) && !empty($old_text) ) {
      $wrap->field_hhold_tasks->set($old_text);
      $wrap->save();
      $output[] = sprintf("Moved household tasks for nid %d", $nid);
    } else {
      $output[] = sprintf('Did not move household tasks for nid %d', $nid);
    }
  }
  return array('#markup'=>implode("<br/>",$output));
}

/** IMPORT TOOLS **/
function aane_import_coach_profile($filename = NULL) {
  if ( !$filename ) return 'Specify filename please';
  $filename = urldecode($filename);
  if ( strpos($filename, '/') === FALSE ) $filename = $_SERVER['DOCUMENT_ROOT'] . '/../assets/' . $filename;
  if ( !file_exists($filename) ) return $filename . ' not found';
  $handle = fopen($filename, 'r');
  $results = $headers = array();
  $i = 0;
  while ( $line = fgetcsv($handle, 1000) ) {
    if ( !$i ) {
      $headers = $line;
      //      $results[$i] = $headers;
    }
    else {
      $linedata = array_combine($headers,$line);
      array_walk($linedata, 'trim');
      $profile = profile2_by_uid_load($linedata['UID'], 'coach');
      if ( $profile ) {
        //        $results[$i] = $profile; break;
        $coach = entity_metadata_wrapper('profile2', $profile);
        //        $results[$i] = $coach->getPropertyInfo(); break;
        $coach->field_person_name->given->set($linedata['First Name']);
        $coach->field_person_name->family->set($linedata['Last Name']);
        if ( !empty($linedata['Phone-home']) ) $coach->field_home_phone->set($linedata['Phone-home']);
        if ( !empty($linedata['Phone-work']) ) $coach->field_work_phone->set($linedata['Phone-work']);
        if ( !empty($linedata['Phone-cell']) ) $coach->field_cell_phone->set($linedata['Phone-cell']);
        if ( !empty($linedata['Email']) ) $coach->field_email1->set($linedata['Email']);
        if ( !empty($linedata['Email2']) ) $coach->field_email2->set($linedata['Email2']);
        if ( !empty($linedata['Area']) ) {
          $coach->field_region->set(tech_tamer_get_tid($linedata['Area'], 'region'));
        }
        $coach->field_coach_training->set(tech_tamer_get_tid($linedata['Training'], 'coach_training'));
        $coach->field_address->locality->set($linedata['Location']);
        $coach->field_address->administrative_area->set('MA');
        if ( $coach->save() ) {
          $results[$i] = $coach->field_person_name->value();
        };

      } else $results[$i] = $linedata;
    }
    $i++;
  }
  return '<pre>' . print_r($results, true) . '</pre>';
}

function aane_fsa_rules_form($form, &$form_state){
  $vocab = taxonomy_vocabulary_machine_name_load('goals');
  $tree = taxonomy_get_tree($vocab->vid, 0, 1);

  $values = variable_get('aane_fsa_rules', '');

  $form['name'] = array(
    '#type' => 'markup',
    '#markup' => t('Select all of the FSA fieldgroups that should be visible for each goal')
  );
  foreach($tree as $term){
    $form['goal_'.$term->tid] = array(
      '#type' => 'fieldset',
      '#title' => t($term->name),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
    $form['goal_'.$term->tid][$term->tid . '_group-social'] = array(
      '#type' => 'checkbox',
      '#title' => t('Social'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-social')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-ex-functioning-hhold'] = array(
      '#type' => 'checkbox',
      '#title' => t('Executive Functioning - Household'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-ex-functioning-hhold')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-ex-functioning-daily'] = array(
      '#type' => 'checkbox',
      '#title' => t('Executive Functioning - Daily Living'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-ex-functioning-daily')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-ex-functioning-transport'] = array(
      '#type' => 'checkbox',
      '#title' => t('Executive Functioning - Transport'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-ex-functioning-transport')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-ex-functioning-transport'] = array(
      '#type' => 'checkbox',
      '#title' => t('Executive Functioning - Transport'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-ex-functioning-transport')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-ex-functioning-food'] = array(
      '#type' => 'checkbox',
      '#title' => t('Executive Functioning - Food'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-ex-functioning-food')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-ex-functioning-clothes'] = array(
      '#type' => 'checkbox',
      '#title' => t('Executive Functioning - Clothing'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-ex-functioning-clothes')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-ex-functioning-health'] = array(
      '#type' => 'checkbox',
      '#title' => t('Executive Functioning - Health'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-ex-functioning-health')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-ex-functioning-money'] = array(
      '#type' => 'checkbox',
      '#title' => t('Executive Functioning - Money'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-ex-functioning-money')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-drivers-license'] = array(
      '#type' => 'checkbox',
      '#title' => t('Driver\'s License'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-drivers-license')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-college-readiness'] = array(
      '#type' => 'checkbox',
      '#title' => t('College Readiness'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-college-readiness')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-employment-readiness'] = array(
      '#type' => 'checkbox',
      '#title' => t('Employment Readiness'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-employment-readiness')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-awareness-advocacy'] = array(
      '#type' => 'checkbox',
      '#title' => t('Self Awareness and Self Advocacy'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-awareness-advocacy')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-employment'] = array(
      '#type' => 'checkbox',
      '#title' => t('Employment'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-employment')
    );
    $form['goal_'.$term->tid][$term->tid . '_group-college'] = array(
      '#type' => 'checkbox',
      '#title' => t('College'),
      '#default_value' => aane_default_value($values, $term->tid, 'group-college')
    );
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit',
  );
  return $form;
}

function aane_fsa_rules_form_submit($form, &$form_state){
  $save = array();
  foreach($form_state['values'] as $key => $value){
    if(strpos($key,'_') > -1){
      $parts = explode('_', $key);
      if(!isset($save[$parts[0]])) $save[$parts[0]] = array();
      $save[$parts[0]][$parts[1]] = $value;
    }
  }
  variable_set('aane_fsa_rules', $save);
  drupal_set_message('FSA rules saved');
}

function aane_default_value($values, $term, $value){
  if(isset($values[$term])){
    if(isset($values[$term][$value])){
      return $values[$term][$value];
    }
  }
  return 0;
}