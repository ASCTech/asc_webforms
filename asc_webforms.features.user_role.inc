<?php
/**
 * @file
 * asc_webforms.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function asc_webforms_user_default_roles() {
  $roles = array();

  // Exported role: Webform Manager.
  $roles['Webform Manager'] = array(
    'name' => 'Webform Manager',
    'weight' => '5',
  );

  // Exported role: Webform Viewer.
  $roles['Webform Viewer'] = array(
    'name' => 'Webform Viewer',
    'weight' => '6',
  );

  return $roles;
}
