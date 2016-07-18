<?php
/**
 * @file
 * landing_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function landing_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'landing_page';
  $page->task = 'page';
  $page->admin_title = 'landing page';
  $page->admin_description = '';
  $page->path = 'landing-page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '37bf230f-8620-46c5-a03d-72da0fd83f31';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f7a1073d-5674-4173-9a71-18e15deadda9';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_location_value' => 'left',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f7a1073d-5674-4173-9a71-18e15deadda9';
    $display->content['new-f7a1073d-5674-4173-9a71-18e15deadda9'] = $pane;
    $display->panels['left'][0] = 'new-f7a1073d-5674-4173-9a71-18e15deadda9';
    $pane = new stdClass();
    $pane->pid = 'new-6e935605-0e02-426d-9f55-cb61ac967222';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_location_value' => 'right',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6e935605-0e02-426d-9f55-cb61ac967222';
    $display->content['new-6e935605-0e02-426d-9f55-cb61ac967222'] = $pane;
    $display->panels['right'][0] = 'new-6e935605-0e02-426d-9f55-cb61ac967222';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f7a1073d-5674-4173-9a71-18e15deadda9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['landing_page'] = $page;

  return $pages;

}
