<?php
/**
 * @file
 * landing_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landing_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'home page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Page ID (field_page_id) */
  $handler->display->display_options['arguments']['field_page_id_value']['id'] = 'field_page_id_value';
  $handler->display->display_options['arguments']['field_page_id_value']['table'] = 'field_data_field_page_id';
  $handler->display->display_options['arguments']['field_page_id_value']['field'] = 'field_page_id_value';
  $handler->display->display_options['arguments']['field_page_id_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_id_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_page_id_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_page_id_value']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_page_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_page_id_value']['limit'] = '0';
  /* Contextual filter: Content: Location (field_location) */
  $handler->display->display_options['arguments']['field_location_value']['id'] = 'field_location_value';
  $handler->display->display_options['arguments']['field_location_value']['table'] = 'field_data_field_location';
  $handler->display->display_options['arguments']['field_location_value']['field'] = 'field_location_value';
  $handler->display->display_options['arguments']['field_location_value']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_location_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_location_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_location_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_location_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page_element' => 'page_element',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_location_value' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Location (field_location)',
    ),
    'field_page_id_value' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Page ID (field_page_id)',
    ),
  );
  $export['home_page'] = $view;

  return $export;
}
