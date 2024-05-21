<?php
/**
 * @file
 * adult_appl_fieldgroups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adult_appl_fieldgroups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}