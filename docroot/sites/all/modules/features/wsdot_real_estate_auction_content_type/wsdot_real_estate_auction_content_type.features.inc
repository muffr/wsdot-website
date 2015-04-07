<?php
/**
 * @file
 * wsdot_real_estate_auction_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wsdot_real_estate_auction_content_type_node_info() {
  $items = array(
    'auction_parcel' => array(
      'name' => t('Auction Parcel'),
      'base' => 'node_content',
      'description' => t('Use this form to build a Parcel Information page for the Real Estate Auction website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
