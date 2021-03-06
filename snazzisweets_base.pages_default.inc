<?php
/**
 * @file
 * snazzisweets_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function snazzisweets_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_page';
  $page->task = 'page';
  $page->admin_title = 'About Page';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'user-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'about_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'About Panel',
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About SnazziSweets';
  $display->uuid = '8e54b8fe-9aa5-4f6d-8f98-afc33f008496';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_about_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6af8399b-d2b4-4011-b217-9bd764fed57d';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '101',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6af8399b-d2b4-4011-b217-9bd764fed57d';
  $display->content['new-6af8399b-d2b4-4011-b217-9bd764fed57d'] = $pane;
  $display->panels['center'][0] = 'new-6af8399b-d2b4-4011-b217-9bd764fed57d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6af8399b-d2b4-4011-b217-9bd764fed57d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cakes';
  $page->task = 'page';
  $page->admin_title = 'Cakes';
  $page->admin_description = '';
  $page->path = 'cakes';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Cakes',
    'name' => 'main-menu',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cakes__panel';
  $handler->task = 'page';
  $handler->subtask = 'cakes';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Piece of Cake';
  $display->uuid = '4778c6f5-92f0-4094-bb3e-50bbf60f0e2c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_cakes__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-16349d92-3779-454e-801c-d5cadb988b3d';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'snazzi_cake_carousel';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '16349d92-3779-454e-801c-d5cadb988b3d';
  $display->content['new-16349d92-3779-454e-801c-d5cadb988b3d'] = $pane;
  $display->panels['center'][0] = 'new-16349d92-3779-454e-801c-d5cadb988b3d';
  $pane = new stdClass();
  $pane->pid = 'new-bbf4bf35-b1d1-423e-92d7-57539bbe209d';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '106',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bbf4bf35-b1d1-423e-92d7-57539bbe209d';
  $display->content['new-bbf4bf35-b1d1-423e-92d7-57539bbe209d'] = $pane;
  $display->panels['center'][1] = 'new-bbf4bf35-b1d1-423e-92d7-57539bbe209d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cakes'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cookie_menu';
  $page->task = 'page';
  $page->admin_title = 'Cookie Menu';
  $page->admin_description = '';
  $page->path = 'cookies';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Cookies',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cookie_menu__panel';
  $handler->task = 'page';
  $handler->subtask = 'cookie_menu';
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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'description' => array(
        'corner_location' => 'pane',
      ),
      'desc' => NULL,
      'center' => NULL,
      'prices' => NULL,
    ),
    'description' => array(
      'style' => 'rounded_corners',
    ),
    'prices' => array(
      'style' => '-1',
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'The Cookie Jar';
  $display->uuid = '64275bfc-e2e2-4d73-b05e-bf944780f36d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_cookie_menu__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fc2fb63f-71ea-453e-b41d-9c5889b6c785';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'cookie_jar_2_0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'cookie_jar',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fc2fb63f-71ea-453e-b41d-9c5889b6c785';
  $display->content['new-fc2fb63f-71ea-453e-b41d-9c5889b6c785'] = $pane;
  $display->panels['center'][0] = 'new-fc2fb63f-71ea-453e-b41d-9c5889b6c785';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cookie_menu'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'snazzi_big_comfy_cupcake';
  $page->task = 'page';
  $page->admin_title = 'Big Comfy Cupcake';
  $page->admin_description = '';
  $page->path = 'cupcakes';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Cupcakes',
    'name' => 'main-menu',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_snazzi_big_comfy_cupcake__panel_context_cc52e8e7-b288-4e3e-81fc-e7cbeeac4352';
  $handler->task = 'page';
  $handler->subtask = 'snazzi_big_comfy_cupcake';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'description' => array(
        'corner_location' => 'pane',
      ),
      'desc' => NULL,
      'center' => NULL,
      'prices' => NULL,
    ),
    'description' => array(
      'style' => 'rounded_corners',
    ),
    'prices' => array(
      'style' => '-1',
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Big Comfy Cupcake';
  $display->uuid = '64275bfc-e2e2-4d73-b05e-bf944780f36d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_snazzi_big_comfy_cupcake__panel_context_cc52e8e7-b288-4e3e-81fc-e7cbeeac4352';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f679dd0b-0a24-4c68-95b7-822e2cb1d412';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'comfy_cupcake_2_0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'comfy_cupcake',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f679dd0b-0a24-4c68-95b7-822e2cb1d412';
  $display->content['new-f679dd0b-0a24-4c68-95b7-822e2cb1d412'] = $pane;
  $display->panels['center'][0] = 'new-f679dd0b-0a24-4c68-95b7-822e2cb1d412';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['snazzi_big_comfy_cupcake'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'snazzi_homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = '#';
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
  $handler->name = 'page_snazzi_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'snazzi_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage Panel',
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Welcome to SnazziSweets';
  $display->uuid = 'ceebab02-bd7b-4ce3-9701-1dcb63b5f784';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_snazzi_homepage__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-06ba1bd1-8a92-47fd-b5fa-a4967b63dae6';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-homepage-snazzi_homepage';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '06ba1bd1-8a92-47fd-b5fa-a4967b63dae6';
  $display->content['new-06ba1bd1-8a92-47fd-b5fa-a4967b63dae6'] = $pane;
  $display->panels['center'][0] = 'new-06ba1bd1-8a92-47fd-b5fa-a4967b63dae6';
  $pane = new stdClass();
  $pane->pid = 'new-2cc114e6-6037-4dfe-8d76-43b023ccda8a';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '105',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2cc114e6-6037-4dfe-8d76-43b023ccda8a';
  $display->content['new-2cc114e6-6037-4dfe-8d76-43b023ccda8a'] = $pane;
  $display->panels['center'][1] = 'new-2cc114e6-6037-4dfe-8d76-43b023ccda8a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['snazzi_homepage'] = $page;

  return $pages;

}
