<?php

/**
 * @file
 * Lists available colors and color schemes for the Social Blue theme.
 */

$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'brand-bg-primary' => t('Primary color'),
    'brand-bg-secondary' => t('Secondary color'),
    'brand-bg-accent' => t('Accent color'),
    'brand-text-primary' => t('Link color'),
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('Social Blue (default)'),
      'colors' => [
        'brand-bg-primary' => '#29abe2',
        'brand-bg-secondary' => '#1f80aa',
        'brand-bg-accent' => '#ffc142',
        'brand-text-primary' => '#33b5e5',
      ],
    ],
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
  ],

  /**
   * Gradient definitions.
   *
   * Example:
   *
   *  'gradients' => array(
   *    array(
   *      // (x, y, width, height).
   *      'dimension' => array(0, 0, 0, 0),
   *      // Direction of gradient ('vertical' or 'horizontal').
   *      'direction' => 'vertical',
   *      // Keys of colors to use for the gradient.
   *      'colors' => array('top', 'bottom'),
   *    ),
   *  ),
   *
   * Preview files
   *
   * @todo Make sure we update the preview it will help
   * Distro users / SaaS users a lot!
   * 'preview_library' => 'socialbase/color.preview'.
   */
  'preview_html' => '',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'socialblue'),
      ],
    ],
  ],
];
