AANE Custom Code
================

This module contains a relatively random mixture of functionality for the LifeMAP website.

aane.install:  makes sure that when the module is installed, it is loaded with a higher "weight"
than other modules, so that its hooks run last.

aane.dev.inc: contains data import and migration routines written during the development process.
These functions are invoked through the hook_menu() implementation in aane.module.  Both can be safely
ignored.

aane.module: holds a grab-bag of functionality, in the following categories

hook_variable_info:  Stores the start of the billing period.

hook_views_api: See the discussion of the views functions below

hook_node_export_alter: Make it possible to do decent exports of skills assessments.

hook_preprocess_block: implement a couple of shortcodes in custom blocks, mainly getting the profile id from the user id

FORM Alterations, generally:
hook_form_alter: mainly hides group_admin from non-privileged users.  Some other tweaks.
hook_form_profile2_form_alter: Same

Custom Access Rules, generally:
hook_node_access: prevents coaches from seeing information about clients they are not coaching
NOTE: this will need to be edited when related parties are added to the mix.
hook_profile2_access: ditto
hook_entityform_access_alter: ditto

Plus a bunch of utility functions to support the foregoing.

Appointment/Timesheet Workflow functions:
appointment and time entry alterations: add date validation to appointments and timesheets

Application/Intake workflow functions:
hook_form_user_register_form_alter: hooks into the user registration form
when triggered by a button on the intake process.  Gathers up application information
and pre-fills user and profile data from the application. Sets up the application
to be owned by the new user.

hook_form_entityform_edit_form_alter: Permits applications to be generated for or owned by existing users.
AND, on save of application, update the profile data accordingly.

hook_entity_update:  Fixes ownership of applications

Funding Status block
hook_block_info and related: Creates a custom block to show the client's funding status.