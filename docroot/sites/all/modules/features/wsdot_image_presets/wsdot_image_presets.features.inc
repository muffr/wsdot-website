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

  // Exported image style: slideshow_image.
  $styles['slideshow_image'] = array(
    'label' => 'Slideshow Image',
    'effects' => array(
      13 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 303,
          'height' => 187,
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
