<?php
/**
 * @file
 * assessment_export.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function assessment_export_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'execute node_export_dsv_action'.
  $permissions['execute node_export_dsv_action'] = array(
    'name' => 'execute node_export_dsv_action',
    'roles' => array(
      'admin' => 'admin',
      'staff' => 'staff',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'admin' => 'admin',
      'staff' => 'staff',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'admin' => 'admin',
      'staff' => 'staff',
    ),
    'module' => 'node_export',
  );

  return $permissions;
}
