<?php
/**
 * @file
 * gallery.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gallery_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__general_pages';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'General Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'general_pages',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'general';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'tabs' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4121e33e-69db-4bfa-905e-439a4f62ea19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-06da7bcc-1f4d-4ac2-928b-0574913c624d';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '%title',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '06da7bcc-1f4d-4ac2-928b-0574913c624d';
    $display->content['new-06da7bcc-1f4d-4ac2-928b-0574913c624d'] = $pane;
    $display->panels['middle'][0] = 'new-06da7bcc-1f4d-4ac2-928b-0574913c624d';
    $pane = new stdClass();
    $pane->pid = 'new-fb13b4aa-bc3b-41eb-8890-f74fbc9c0996';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'gallery';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'gallery',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-node-content',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fb13b4aa-bc3b-41eb-8890-f74fbc9c0996';
    $display->content['new-fb13b4aa-bc3b-41eb-8890-f74fbc9c0996'] = $pane;
    $display->panels['middle'][1] = 'new-fb13b4aa-bc3b-41eb-8890-f74fbc9c0996';
    $pane = new stdClass();
    $pane->pid = 'new-60071335-1629-4d30-bbc9-8bb6c2e6e11c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '60071335-1629-4d30-bbc9-8bb6c2e6e11c';
    $display->content['new-60071335-1629-4d30-bbc9-8bb6c2e6e11c'] = $pane;
    $display->panels['middle'][2] = 'new-60071335-1629-4d30-bbc9-8bb6c2e6e11c';
    $pane = new stdClass();
    $pane->pid = 'new-f9d24efe-03c5-4d32-9b3b-dd83fce34acb';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'testimonials';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'testimonials',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f9d24efe-03c5-4d32-9b3b-dd83fce34acb';
    $display->content['new-f9d24efe-03c5-4d32-9b3b-dd83fce34acb'] = $pane;
    $display->panels['middle'][3] = 'new-f9d24efe-03c5-4d32-9b3b-dd83fce34acb';
    $pane = new stdClass();
    $pane->pid = 'new-31bce1a7-0155-49aa-a726-9a91ae7c6827';
    $pane->panel = 'tabs';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '31bce1a7-0155-49aa-a726-9a91ae7c6827';
    $display->content['new-31bce1a7-0155-49aa-a726-9a91ae7c6827'] = $pane;
    $display->panels['tabs'][0] = 'new-31bce1a7-0155-49aa-a726-9a91ae7c6827';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-31bce1a7-0155-49aa-a726-9a91ae7c6827';
  $handler->conf['display'] = $display;
  $export['node_view__general_pages'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__homepage';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Homepage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'homepage',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_everywhere_site_template' => '',
  );
  $display = new panels_display();
  $display->layout = 'home';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'featured' => NULL,
      'main' => NULL,
      'sidebar' => NULL,
      'secondary' => NULL,
      'thirdly' => NULL,
      'tabs' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '23947825-628b-4693-ba97-8cfa83ba8e2d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ece26bdc-d16a-448e-9ffa-df9777b98cff';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = 'ece26bdc-d16a-448e-9ffa-df9777b98cff';
    $display->content['new-ece26bdc-d16a-448e-9ffa-df9777b98cff'] = $pane;
    $display->panels['bottom'][0] = 'new-ece26bdc-d16a-448e-9ffa-df9777b98cff';
    $pane = new stdClass();
    $pane->pid = 'new-6fa00803-f96c-4d1c-bb46-24b2e57393ef';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_testimonial_select';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'node_reference_node',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'homepage',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Testimonials',
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
    $pane->uuid = '6fa00803-f96c-4d1c-bb46-24b2e57393ef';
    $display->content['new-6fa00803-f96c-4d1c-bb46-24b2e57393ef'] = $pane;
    $display->panels['bottom'][1] = 'new-6fa00803-f96c-4d1c-bb46-24b2e57393ef';
    $pane = new stdClass();
    $pane->pid = 'new-5c394d14-f0e3-4aff-8b31-1c58440c0f0c';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Testimonials Button',
      'title' => '',
      'body' => '<p class="center">
<a class="button" href="/testimonials">View more</a>
</p>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'testimonials-button',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5c394d14-f0e3-4aff-8b31-1c58440c0f0c';
    $display->content['new-5c394d14-f0e3-4aff-8b31-1c58440c0f0c'] = $pane;
    $display->panels['bottom'][2] = 'new-5c394d14-f0e3-4aff-8b31-1c58440c0f0c';
    $pane = new stdClass();
    $pane->pid = 'new-8a8b88b7-e239-49cf-86e7-11b32e84c226';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '8a8b88b7-e239-49cf-86e7-11b32e84c226';
    $display->content['new-8a8b88b7-e239-49cf-86e7-11b32e84c226'] = $pane;
    $display->panels['middle'][0] = 'new-8a8b88b7-e239-49cf-86e7-11b32e84c226';
    $pane = new stdClass();
    $pane->pid = 'new-c01e382e-e95f-4e5f-8cda-98c27282c82b';
    $pane->panel = 'tabs';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c01e382e-e95f-4e5f-8cda-98c27282c82b';
    $display->content['new-c01e382e-e95f-4e5f-8cda-98c27282c82b'] = $pane;
    $display->panels['tabs'][0] = 'new-c01e382e-e95f-4e5f-8cda-98c27282c82b';
    $pane = new stdClass();
    $pane->pid = 'new-e558f889-17e6-4889-ac2c-96f098d0f992';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Splash Text',
      'title' => '',
      'body' => '<h2>Setting the highest standards in home remodeling</h2>
<a class="button" href="/contact">Ask for a consultation</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'splash-text',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e558f889-17e6-4889-ac2c-96f098d0f992';
    $display->content['new-e558f889-17e6-4889-ac2c-96f098d0f992'] = $pane;
    $display->panels['top'][0] = 'new-e558f889-17e6-4889-ac2c-96f098d0f992';
    $pane = new stdClass();
    $pane->pid = 'new-769ae1c2-bf32-492d-9d30-b866c0d49bb3';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'orbit',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'animation' => 'fade',
        'timer_speed' => '1000000',
        'pause_on_hover' => 1,
        'resume_on_mouseout' => 0,
        'animation_speed' => '500',
        'stack_on_small' => 1,
        'navigation_arrows' => 1,
        'slide_number' => 1,
        'container_class' => 'orbit-container',
        'stack_on_small_class' => 'orbit-stack-on-small',
        'next_class' => 'orbit-next',
        'prev_class' => 'orbit-prev',
        'timer_container_class' => 'orbit-timer',
        'timer_paused_class' => 'paused',
        'timer_progress_class' => 'orbit-progress',
        'slides_container_class' => 'orbit-slides-container',
        'bullets_container_class' => 'orbit-bullets',
        'bullets_active_class' => 'active',
        'slide_number_class' => 'orbit-slide-number',
        'caption_class' => 'orbit-caption',
        'active_slide_class' => 'active',
        'orbit_transition_class' => 'orbit-transitioning',
        'bullets' => 1,
        'bulletThumbs' => 0,
        'timer' => 1,
        'variable_height' => 0,
        'orbit_image_style' => '',
        'orbit_link' => '',
        'orbit_title' => 'field_file_image_title_text',
        'orbit_caption' => 'field_caption',
        'orbit_caption_link' => '',
        'orbit_bullet_thumbs' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '769ae1c2-bf32-492d-9d30-b866c0d49bb3';
    $display->content['new-769ae1c2-bf32-492d-9d30-b866c0d49bb3'] = $pane;
    $display->panels['top'][1] = 'new-769ae1c2-bf32-492d-9d30-b866c0d49bb3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__homepage'] = $handler;

  return $export;
}
