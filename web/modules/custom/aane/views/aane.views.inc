<?php
/**
 * @file aane.views.inc
 *
 * Sets up views plugins for AANE custom coding
 */

function aane_views_plugins() {
  return array(
    'argument validator' => array(
      'client' => array(
        'title' => t('Client'),
        'handler' => 'aane_plugin_argument_validate_client',
        'path' => drupal_get_path('module', 'aane') . '/views',
      ),
    ),
  );
}