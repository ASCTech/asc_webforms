<?php
/**
 * @file
 * asc_webforms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_webforms_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_breadcrumbs_config_features_default_settings().
 */
function asc_webforms_breadcrumbs_config_features_default_setting() {
  $custom_breadcrumbs_configs = array();

  $custom_breadcrumbs_configs[] = array(
    'asc_webforms-1689872192' => array(
      'name' => 'Webform',
      'machine_name' => 'asc_webform-1689872192',
      'titles' => '[node:title]',
      'paths' => '[node:url:path]',
      'visibility_php' => '',
      'node_type' => 'webform',
      'language' => '',
    ),
  );
  return $custom_breadcrumbs_configs;

/**
 * Implements hook_node_info().
 */
function asc_webforms_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
