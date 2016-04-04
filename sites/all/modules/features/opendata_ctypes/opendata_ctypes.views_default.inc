<?php
/**
 * @file
 * opendata_ctypes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opendata_ctypes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tools';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_tool_license' => 'field_tool_license',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tool_license' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Tool';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenuto: License */
  $handler->display->display_options['fields']['field_tool_license']['id'] = 'field_tool_license';
  $handler->display->display_options['fields']['field_tool_license']['table'] = 'field_data_field_tool_license';
  $handler->display->display_options['fields']['field_tool_license']['field'] = 'field_tool_license';
  $handler->display->display_options['fields']['field_tool_license']['label'] = 'Licenza';
  $handler->display->display_options['fields']['field_tool_license']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Type */
  $handler->display->display_options['fields']['field_tool_type']['id'] = 'field_tool_type';
  $handler->display->display_options['fields']['field_tool_type']['table'] = 'field_data_field_tool_type';
  $handler->display->display_options['fields']['field_tool_type']['field'] = 'field_tool_type';
  $handler->display->display_options['fields']['field_tool_type']['label'] = 'Tipo';
  $handler->display->display_options['fields']['field_tool_type']['element_label_colon'] = FALSE;
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'strumento' => 'strumento',
  );
  /* Criterio del filtro: Contenuto: License (field_tool_license) */
  $handler->display->display_options['filters']['field_tool_license_value']['id'] = 'field_tool_license_value';
  $handler->display->display_options['filters']['field_tool_license_value']['table'] = 'field_data_field_tool_license';
  $handler->display->display_options['filters']['field_tool_license_value']['field'] = 'field_tool_license_value';
  $handler->display->display_options['filters']['field_tool_license_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tool_license_value']['expose']['operator_id'] = 'field_tool_license_value_op';
  $handler->display->display_options['filters']['field_tool_license_value']['expose']['label'] = 'Licenza';
  $handler->display->display_options['filters']['field_tool_license_value']['expose']['operator'] = 'field_tool_license_value_op';
  $handler->display->display_options['filters']['field_tool_license_value']['expose']['identifier'] = 'field_tool_license_value';
  $handler->display->display_options['filters']['field_tool_license_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tool_license_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterio del filtro: Contenuto: Target (field_tool_target) */
  $handler->display->display_options['filters']['field_tool_target_value']['id'] = 'field_tool_target_value';
  $handler->display->display_options['filters']['field_tool_target_value']['table'] = 'field_data_field_tool_target';
  $handler->display->display_options['filters']['field_tool_target_value']['field'] = 'field_tool_target_value';
  $handler->display->display_options['filters']['field_tool_target_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tool_target_value']['expose']['operator_id'] = 'field_tool_target_value_op';
  $handler->display->display_options['filters']['field_tool_target_value']['expose']['label'] = 'Target';
  $handler->display->display_options['filters']['field_tool_target_value']['expose']['operator'] = 'field_tool_target_value_op';
  $handler->display->display_options['filters']['field_tool_target_value']['expose']['identifier'] = 'field_tool_target_value';
  $handler->display->display_options['filters']['field_tool_target_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tool_target_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Criterio del filtro: Contenuto: Type (field_tool_type) */
  $handler->display->display_options['filters']['field_tool_type_value']['id'] = 'field_tool_type_value';
  $handler->display->display_options['filters']['field_tool_type_value']['table'] = 'field_data_field_tool_type';
  $handler->display->display_options['filters']['field_tool_type_value']['field'] = 'field_tool_type_value';
  $handler->display->display_options['filters']['field_tool_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tool_type_value']['expose']['operator_id'] = 'field_tool_type_value_op';
  $handler->display->display_options['filters']['field_tool_type_value']['expose']['label'] = 'Tipo';
  $handler->display->display_options['filters']['field_tool_type_value']['expose']['operator'] = 'field_tool_type_value_op';
  $handler->display->display_options['filters']['field_tool_type_value']['expose']['identifier'] = 'field_tool_type_value';
  $handler->display->display_options['filters']['field_tool_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tool_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tool_type_value']['group_info']['label'] = 'Type (field_tool_type)';
  $handler->display->display_options['filters']['field_tool_type_value']['group_info']['identifier'] = 'field_tool_type_value';
  $handler->display->display_options['filters']['field_tool_type_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_tool_type_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'tools';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tools';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'tools/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $translatables['tools'] = array(
    t('Master'),
    t('Tools'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('Tool'),
    t('Licenza'),
    t('Tipo'),
    t('Target'),
    t('Type (field_tool_type)'),
    t('Page'),
    t('Feed'),
  );
  $export['tools'] = $view;

  return $export;
}
