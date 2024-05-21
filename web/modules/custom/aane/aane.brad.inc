<?php
  
/**
 * A general function for debugging relationships
 * @return string
 */
function aane_dev(){
  //$assignments = getCoachingAssignments();
  drupal_set_message('<pre>'.print_r(node_load(12165)).'</pre>');
  return 'Brads Debug Page';
}

/**
 * Get all of the coaching assignments on the site
 * @return array nodes
 */
function getCoachingAssignments(){
  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'coaching_relationship')
  ->addMetaData('account', user_load(1)); // Run the query as user 1.

  $result = $query->execute();

  if (isset($result['node'])) {
    $nids = array_keys($result['node']);
    $nodes = node_load_multiple($nids);
  }
  foreach($nodes as $node){
    drupal_set_message($node->title);
  }
  return $nodes;
}