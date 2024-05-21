<?php
/**
 * @file
 * adult_application.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function adult_application_default_entityform_type() {
  $items = array();
  $items['appl_adult'] = entity_import('entityform_type', '{
    "type" : "appl_adult",
    "label" : "Application - Adult",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "html_full" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "html_full" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "7" : "7",
        "6" : "6",
        "5" : "5",
        "4" : "4",
        "3" : "3"
      },
      "resubmit_action" : "new",
      "redirect_path" : "\\u003Cfront\\u003E",
      "instruction_pre" : { "value" : "", "format" : "html_full" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
