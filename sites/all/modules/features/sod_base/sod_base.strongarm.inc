<?php
/**
 * @file
 * sod_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sod_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'corolla_mediaqueries_css';
  $strongarm->value = 'corolla.responsive.layout.css';
  $export['corolla_mediaqueries_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'corolla_mediaqueries_path';
  $strongarm->value = 'public://at_css';
  $export['corolla_mediaqueries_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_ids';
  $strongarm->value = array();
  $export['menu_block_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_menu_order';
  $strongarm->value = array(
    'main-menu' => '',
    'user-menu' => '',
  );
  $export['menu_block_menu_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_case';
  $strongarm->value = '1';
  $export['pathauto_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ignore_words';
  $strongarm->value = 'a, an, as, at, before, but, by, for, from, is, in, into, like, of, off, on, onto, per, since, than, the, this, that, to, up, via, with';
  $export['pathauto_ignore_words'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_component_length';
  $strongarm->value = '100';
  $export['pathauto_max_component_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_length';
  $strongarm->value = '200';
  $export['pathauto_max_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = 'blog/[node:author]/[node:created:custom:Y]/[node:created:custom:m]/[node:created:custom:d]/[node:title]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_data_pattern';
  $strongarm->value = 'dataset/[node:title]';
  $export['pathauto_node_data_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:menu-link:parents:first]/[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_panel_pattern';
  $strongarm->value = '';
  $export['pathauto_node_panel_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_ampersand';
  $strongarm->value = '0';
  $export['pathauto_punctuation_ampersand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_asterisk';
  $strongarm->value = '0';
  $export['pathauto_punctuation_asterisk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_at';
  $strongarm->value = '0';
  $export['pathauto_punctuation_at'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_backtick';
  $strongarm->value = '0';
  $export['pathauto_punctuation_backtick'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_back_slash';
  $strongarm->value = '0';
  $export['pathauto_punctuation_back_slash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_caret';
  $strongarm->value = '0';
  $export['pathauto_punctuation_caret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_colon';
  $strongarm->value = '0';
  $export['pathauto_punctuation_colon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_comma';
  $strongarm->value = '0';
  $export['pathauto_punctuation_comma'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_dollar';
  $strongarm->value = '0';
  $export['pathauto_punctuation_dollar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_double_quotes';
  $strongarm->value = '0';
  $export['pathauto_punctuation_double_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_equal';
  $strongarm->value = '0';
  $export['pathauto_punctuation_equal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_exclamation';
  $strongarm->value = '0';
  $export['pathauto_punctuation_exclamation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_greater_than';
  $strongarm->value = '0';
  $export['pathauto_punctuation_greater_than'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hash';
  $strongarm->value = '0';
  $export['pathauto_punctuation_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = '1';
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_curly';
  $strongarm->value = '0';
  $export['pathauto_punctuation_left_curly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_parenthesis';
  $strongarm->value = '0';
  $export['pathauto_punctuation_left_parenthesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_square';
  $strongarm->value = '0';
  $export['pathauto_punctuation_left_square'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_less_than';
  $strongarm->value = '0';
  $export['pathauto_punctuation_less_than'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_percent';
  $strongarm->value = '0';
  $export['pathauto_punctuation_percent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_period';
  $strongarm->value = '0';
  $export['pathauto_punctuation_period'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_pipe';
  $strongarm->value = '0';
  $export['pathauto_punctuation_pipe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_plus';
  $strongarm->value = '0';
  $export['pathauto_punctuation_plus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_question_mark';
  $strongarm->value = '0';
  $export['pathauto_punctuation_question_mark'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_quotes';
  $strongarm->value = '0';
  $export['pathauto_punctuation_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_curly';
  $strongarm->value = '0';
  $export['pathauto_punctuation_right_curly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_parenthesis';
  $strongarm->value = '0';
  $export['pathauto_punctuation_right_parenthesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_square';
  $strongarm->value = '0';
  $export['pathauto_punctuation_right_square'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_semicolon';
  $strongarm->value = '0';
  $export['pathauto_punctuation_semicolon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_slash';
  $strongarm->value = '0';
  $export['pathauto_punctuation_slash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_tilde';
  $strongarm->value = '0';
  $export['pathauto_punctuation_tilde'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_underscore';
  $strongarm->value = '0';
  $export['pathauto_punctuation_underscore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_reduce_ascii';
  $strongarm->value = 1;
  $export['pathauto_reduce_ascii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_separator';
  $strongarm->value = '-';
  $export['pathauto_separator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_data_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_data_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_license_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_license_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = 'term/[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_thematic_area_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_thematic_area_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = FALSE;
  $export['pathauto_transliterate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_update_action';
  $strongarm->value = '1';
  $export['pathauto_update_action'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_verbose';
  $strongarm->value = 0;
  $export['pathauto_verbose'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'r4032login';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = '';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Spaghetti Opendata v2';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_corolla_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bigscreen_layout' => 'three-col-grail',
    'bigscreen_sidebar_unit' => '%',
    'bigscreen_sidebar_first' => '20',
    'bigscreen_sidebar_second' => '25',
    'bigscreen_page_unit' => '%',
    'bigscreen_page_width' => '100',
    'bigscreen_set_max_width' => 1,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => '1260',
    'bigscreen_media_query' => 'only screen and (min-width:1025px)',
    'tablet_landscape_layout' => 'three-col-grail',
    'tablet_landscape_sidebar_unit' => '%',
    'tablet_landscape_sidebar_first' => '20',
    'tablet_landscape_sidebar_second' => '20',
    'tablet_landscape_page_unit' => '%',
    'tablet_landscape_page_width' => '100',
    'tablet_landscape_set_max_width' => 0,
    'tablet_landscape_max_width_unit' => 'px',
    'tablet_landscape_max_width' => '960',
    'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
    'tablet_portrait_layout' => 'one-col-vert',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => '50',
    'tablet_portrait_sidebar_second' => '50',
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => '100',
    'tablet_portrait_set_max_width' => 0,
    'tablet_portrait_max_width_unit' => 'px',
    'tablet_portrait_max_width' => '780',
    'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
    'smartphone_landscape_layout' => 'one-col-stack',
    'smartphone_landscape_sidebar_unit' => '%',
    'smartphone_landscape_sidebar_first' => '50',
    'smartphone_landscape_sidebar_second' => '50',
    'smartphone_landscape_page_unit' => '%',
    'smartphone_landscape_page_width' => '100',
    'smartphone_landscape_set_max_width' => 0,
    'smartphone_landscape_max_width_unit' => 'px',
    'smartphone_landscape_max_width' => '520',
    'smartphone_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
    'smartphone_portrait_media_query' => 'only screen and (max-width:320px)',
    'breadcrumb_display' => 'yes',
    'breadcrumb_separator' => ' &#187; ',
    'breadcrumb_home' => 1,
    'search_snippet' => 1,
    'search_info_type' => 1,
    'search_info_user' => 1,
    'search_info_date' => 1,
    'search_info_comment' => 1,
    'search_info_upload' => 1,
    'search_info_separator' => ' - ',
    'horizontal_login_block' => 0,
    'comments_hide_title' => 0,
    'extra_page_classes' => 1,
    'extra_article_classes' => 1,
    'extra_comment_classes' => 1,
    'extra_block_classes' => 1,
    'extra_menu_classes' => 1,
    'extra_item_list_classes' => 1,
    'menu_item_span_elements' => 1,
    'base_font_type' => '',
    'base_font' => 'bf-l',
    'base_font_gwf' => 'Open Sans',
    'site_name_font_type' => '',
    'site_name_font' => 'snf-cc',
    'site_name_font_gwf' => 'Abel',
    'site_slogan_font_type' => '',
    'site_slogan_font' => 'ssf-cc',
    'site_slogan_font_gwf' => 'Abel',
    'page_title_font_type' => '',
    'page_title_font' => 'ptf-a',
    'page_title_font_gwf' => 'Abel',
    'node_title_font_type' => '',
    'node_title_font' => 'ntf-a',
    'node_title_font_gwf' => 'Abel',
    'comment_title_font_type' => '',
    'comment_title_font' => 'ctf-a',
    'comment_title_font_gwf' => 'Abel',
    'block_title_font_type' => '',
    'block_title_font' => 'btf-a',
    'block_title_font_gwf' => 'Abel',
    'font_size' => 'fs-large',
    'headings_styles_caps' => 0,
    'headings_styles_weight' => 0,
    'headings_styles_shadow' => 0,
    'content_corner_radius' => 'rc-6',
    'tabs_corner_radius' => 'rct-6',
    'box_shadows' => 'bs-n',
    'body_background' => 'bb-n',
    'image_alignment' => 'ia-r',
    'image_caption_teaser' => 0,
    'image_caption_full' => 0,
    'menu_bullets' => 'mb-dd',
    'at__active_tab' => 'edit-smartphone',
    'scheme' => 'default',
    'palette' => array(
      'base' => '#ffffff',
      'background' => '#f8f8f8',
      'text' => '#2e2e2e',
      'link' => '#086782',
      'linkhover' => '#e25401',
      'linkunderline' => '#cfdde5',
      'slogan' => '#e25400',
      'navigation' => '#2e2e2d',
      'navigationhover' => '#e25402',
      'tab' => '#f5f4f3',
      'blocktitle' => '#779125',
      'border' => '#e1e1e1',
      'borderstrong' => '#c4c4c4',
      'fieldset' => '#fbfbfb',
      'fieldsetborder' => '#e1e1e2',
    ),
    'theme' => 'corolla',
    'info' => array(
      'fields' => array(
        'base' => 'Base',
        'background' => 'Background',
        'text' => 'Testo',
        'link' => 'Link',
        'linkhover' => 'Hovered Link',
        'linkunderline' => 'Link underline',
        'slogan' => 'Slogan',
        'navigation' => 'Navigazione',
        'navigationhover' => 'Navigation hover',
        'tab' => 'Tab',
        'blocktitle' => 'Titolo del blocco',
        'border' => 'Border',
        'borderstrong' => 'Border strong',
        'fieldset' => 'Fieldset',
        'fieldsetborder' => 'Fieldset border',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Gray (Default)',
          'colors' => array(
            'base' => '#ffffff',
            'background' => '#f8f8f8',
            'text' => '#2e2e2e',
            'link' => '#086782',
            'linkhover' => '#e25401',
            'linkunderline' => '#cfdde5',
            'slogan' => '#e25400',
            'navigation' => '#2e2e2d',
            'navigationhover' => '#e25402',
            'tab' => '#f5f4f3',
            'blocktitle' => '#779125',
            'border' => '#e1e1e1',
            'borderstrong' => '#c4c4c4',
            'fieldset' => '#fbfbfb',
            'fieldsetborder' => '#e1e1e2',
          ),
        ),
        'green1' => array(
          'title' => 'Green 1',
          'colors' => array(
            'base' => '#ffffff',
            'background' => '#fbfbf6',
            'text' => '#3d3d3d',
            'link' => '#899833',
            'linkhover' => '#e14601',
            'linkunderline' => '#e3eac1',
            'slogan' => '#899833',
            'navigation' => '#8e9e35',
            'navigationhover' => '#626c25',
            'tab' => '#fbfbf6',
            'blocktitle' => '#738b25',
            'border' => '#e7e1ce',
            'borderstrong' => '#d2c8aa',
            'fieldset' => '#fdfdfb',
            'fieldsetborder' => '#dad6c9',
          ),
        ),
        'green2' => array(
          'title' => 'Green 2',
          'colors' => array(
            'base' => '#ffffff',
            'background' => '#fbfbf6',
            'text' => '#3d3d3d',
            'link' => '#157a9c',
            'linkhover' => '#e14601',
            'linkunderline' => '#cfdde5',
            'slogan' => '#e14601',
            'navigation' => '#8e9e35',
            'navigationhover' => '#626c25',
            'tab' => '#fbfbf6',
            'blocktitle' => '#779125',
            'border' => '#e7e1ce',
            'borderstrong' => '#d2c8aa',
            'fieldset' => '#fdfdfb',
            'fieldsetborder' => '#dad6c9',
          ),
        ),
        'purple' => array(
          'title' => 'Purple',
          'colors' => array(
            'base' => '#ffffff',
            'background' => '#fefafb',
            'text' => '#2e2e2e',
            'link' => '#6c0d28',
            'linkhover' => '#e25401',
            'linkunderline' => '#eac8d1',
            'slogan' => '#e25401',
            'navigation' => '#6c0d28',
            'navigationhover' => '#83a80e',
            'tab' => '#fbf3f6',
            'blocktitle' => '#e25401',
            'border' => '#f7d6e2',
            'borderstrong' => '#d9a3b7',
            'fieldset' => '#fefafb',
            'fieldsetborder' => '#f7d6e2',
          ),
        ),
        'red' => array(
          'title' => 'Red',
          'colors' => array(
            'base' => '#ffffff',
            'background' => '#fefbfa',
            'text' => '#2e2e2e',
            'link' => '#b9400e',
            'linkhover' => '#ef762f',
            'linkunderline' => '#faded3',
            'slogan' => '#ca592b',
            'navigation' => '#b9400e',
            'navigationhover' => '#7e2c0a',
            'tab' => '#fdf6f4',
            'blocktitle' => '#b9400e',
            'border' => '#e8dad5',
            'borderstrong' => '#e2bdae',
            'fieldset' => '#fefbfa',
            'fieldsetborder' => '#f7dad6',
          ),
        ),
        'yellow' => array(
          'title' => 'Yellow',
          'colors' => array(
            'base' => '#ffffff',
            'background' => '#f9faef',
            'text' => '#383838',
            'link' => '#8d8017',
            'linkhover' => '#de4c01',
            'linkunderline' => '#f4eebc',
            'slogan' => '#afa02f',
            'navigation' => '#a0a465',
            'navigationhover' => '#6c6f42',
            'tab' => '#f7f8ec',
            'blocktitle' => '#afa02f',
            'border' => '#e2e5c3',
            'borderstrong' => '#dcd093',
            'fieldset' => '#fbfbf8',
            'fieldsetborder' => '#ddd7b6',
          ),
        ),
        '' => array(
          'title' => 'Personalizzato',
          'colors' => array(),
        ),
      ),
      'css' => array(
        0 => 'color/colors.css',
      ),
      'copy' => array(
        0 => 'logo.png',
      ),
      'gradients' => array(
        0 => array(
          'dimension' => array(
            0 => 0,
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'direction' => 'vertical',
          'colors' => array(
            0 => 'link',
            1 => 'text',
          ),
        ),
      ),
      'fill' => array(),
      'slices' => array(),
      'blend_target' => '#ffffff',
      'preview_image' => 'color/preview.png',
      'preview_css' => 'color/preview.css',
      'base_image' => 'color/base.png',
    ),
  );
  $export['theme_corolla_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'sod';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_sod_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bigscreen_layout' => 'three-col-grail',
    'bigscreen_sidebar_unit' => '%',
    'bigscreen_sidebar_first' => '20',
    'bigscreen_sidebar_second' => '25',
    'bigscreen_page_unit' => '%',
    'bigscreen_page_width' => '100',
    'bigscreen_set_max_width' => 1,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => '1260',
    'bigscreen_media_query' => 'only screen and (min-width:1025px)',
    'tablet_landscape_layout' => 'three-col-grail',
    'tablet_landscape_sidebar_unit' => '%',
    'tablet_landscape_sidebar_first' => '20',
    'tablet_landscape_sidebar_second' => '20',
    'tablet_landscape_page_unit' => '%',
    'tablet_landscape_page_width' => '100',
    'tablet_landscape_set_max_width' => 0,
    'tablet_landscape_max_width_unit' => 'px',
    'tablet_landscape_max_width' => '960',
    'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
    'tablet_portrait_layout' => 'one-col-vert',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => '50',
    'tablet_portrait_sidebar_second' => '50',
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => '100',
    'tablet_portrait_set_max_width' => 0,
    'tablet_portrait_max_width_unit' => 'px',
    'tablet_portrait_max_width' => '780',
    'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
    'smartphone_landscape_layout' => 'one-col-vert',
    'smartphone_landscape_sidebar_unit' => '%',
    'smartphone_landscape_sidebar_first' => '50',
    'smartphone_landscape_sidebar_second' => '50',
    'smartphone_landscape_page_unit' => '%',
    'smartphone_landscape_page_width' => '100',
    'smartphone_landscape_set_max_width' => 0,
    'smartphone_landscape_max_width_unit' => 'px',
    'smartphone_landscape_max_width' => '520',
    'smartphone_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
    'smartphone_portrait_media_query' => 'only screen and (max-width:320px)',
    'breadcrumb_display' => 'yes',
    'breadcrumb_separator' => ' &#187; ',
    'breadcrumb_home' => 0,
    'search_snippet' => 1,
    'search_info_type' => 1,
    'search_info_user' => 1,
    'search_info_date' => 1,
    'search_info_comment' => 1,
    'search_info_upload' => 1,
    'search_info_separator' => ' - ',
    'horizontal_login_block' => 0,
    'comments_hide_title' => 0,
    'extra_page_classes' => 1,
    'extra_article_classes' => 1,
    'extra_comment_classes' => 1,
    'extra_block_classes' => 1,
    'extra_menu_classes' => 1,
    'extra_item_list_classes' => 1,
    'menu_item_span_elements' => 0,
    'base_font_type' => '',
    'base_font' => 'bf-l',
    'base_font_gwf' => 'Abel',
    'site_name_font_type' => '',
    'site_name_font' => 'snf-cc',
    'site_name_font_gwf' => 'Abel',
    'site_slogan_font_type' => '',
    'site_slogan_font' => 'ssf-cc',
    'site_slogan_font_gwf' => 'Abel',
    'page_title_font_type' => '',
    'page_title_font' => 'ptf-a',
    'page_title_font_gwf' => 'Abel',
    'node_title_font_type' => '',
    'node_title_font' => 'ntf-a',
    'node_title_font_gwf' => 'Abel',
    'comment_title_font_type' => '',
    'comment_title_font' => 'ctf-a',
    'comment_title_font_gwf' => 'Abel',
    'block_title_font_type' => '',
    'block_title_font' => 'btf-a',
    'block_title_font_gwf' => 'Abel',
    'font_size' => 'fs-large',
    'headings_styles_caps' => 0,
    'headings_styles_weight' => 0,
    'headings_styles_shadow' => 0,
    'content_corner_radius' => 'rc-6',
    'tabs_corner_radius' => 'rct-6',
    'box_shadows' => 'bs-n',
    'body_background' => 'bb-n',
    'image_alignment' => 'ia-r',
    'image_caption_teaser' => 0,
    'image_caption_full' => 0,
    'menu_bullets' => 'mb-dd',
    'at__active_tab' => 'edit-size',
  );
  $export['theme_sod_settings'] = $strongarm;

  return $export;
}
