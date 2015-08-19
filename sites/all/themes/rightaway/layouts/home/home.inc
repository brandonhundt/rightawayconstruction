<?php

/**
 * Implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title'       => t('Homepage layout (For Panels Everywhere)'),
  'category'    => t('Responsive'),
  'icon'        => 'icon.png',

  'theme'       => 'home',
//'css'         => '../../css/layouts/pri-general.css',
//'admin theme' => 'pri_general',
//  'admin css'   => '../../css/panels-layouts/pri-general.admin.css',

  'regions'     => array(
      'top' => t('Top'),
      'tabs' => t('Tabs'),
      'left' => t('Left'),
      'middle' => t('Middle'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
  ),
);
