<?php
/**
 * @file
 * wsdot_image_presets.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function wsdot_image_presets_image_default_styles() {
  $styles = array();

  // Exported image style: carousel.
  $styles['carousel'] = array(
    'label' => 'Carousel',
    'effects' => array(
      6 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 275,
          'height' => 170,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_map_thumbnail.
  $styles['project_map_thumbnail'] = array(
    'label' => 'Project map thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_crop',
        'data' => array(
          'width' => 185,
          'height' => 185,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
