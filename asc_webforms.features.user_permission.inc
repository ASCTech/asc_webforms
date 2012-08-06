<?php
/**
 * @file
 * asc_webforms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_webforms_user_default_permissions() {
  $permissions = array();

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
      2 => 'Webform Viewer',
    ),
    'module' => 'webform',
  );

  // Exported permission: access own webform results.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
      2 => 'Webform Viewer',
    ),
    'module' => 'webform',
  );

  // Exported permission: access own webform submissions.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
    ),
    'module' => 'webform',
  );

  // Exported permission: create asc_webform content.
  $permissions['create asc_webform content'] = array(
    'name' => 'create asc_webform content',
    'roles' => array(
      0 => 'Webform Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete all webform submissions.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete any asc_webform content.
  $permissions['delete any asc_webform content'] = array(
    'name' => 'delete any asc_webform content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own asc_webform content.
  $permissions['delete own asc_webform content'] = array(
    'name' => 'delete own asc_webform content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit all webform submissions.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit any asc_webform content.
  $permissions['edit any asc_webform content'] = array(
    'name' => 'edit any asc_webform content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own asc_webform content.
  $permissions['edit own asc_webform content'] = array(
    'name' => 'edit own asc_webform content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform submissions.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'Webform Manager',
    ),
    'module' => 'webform',
  );

  return $permissions;
}
