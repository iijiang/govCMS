<?php
/**
 * @file
 * Defines the front panel layout
 *
 * @license GPL v2 http://www.fsf.org/licensing/licenses/gpl.html
 *
 * aGov
 * @copyright Copyright(c) 2014 PreviousNext
 * @author Nick Schuch nick at previousnext dot com dot au
 *
 * govCMS (Forked on 1 April 2015 - http://cgit.drupalcode.org/govcms/commit/?id=64b602dcc7ddde0992c5c7cf5f3c4a795e5be08a)
 * The original foundation for the govCMS distribution is aGov; the Drupal distribution created by PreviousNext to provide a core set of elements, functionality and features that can be used to develop government websites
 * @copyright Copyright(c) 2015 Commonwealth of Australia as represented by Department of Finance
 * @author Department of Finance
 */

/**
 * Implementation of hook_panels_layouts().
 */
$plugin = array(
  'title' => t('Front Layout'),
  'category' => t('govCMS'),
  'icon' => 'front.png',
  'theme' => 'govcms_layouts_front',
  'css' => 'front.css',
  'admin css' => 'front.admin.css',
  'regions' => array(
    'header' => t('Header region'),
    'main' => t('Main region'),
    'left' => t('Left region'),
    'right' => t('Right region'),
    'sidebar' => t('Sidebar region'),
    'footer' => t('Footer region'),
  ),
);
