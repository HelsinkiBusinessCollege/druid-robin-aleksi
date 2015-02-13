<?php
/**
 * @file
 * ruokalista.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ruokalista_node_info() {
  $items = array(
    'kasvisruoka' => array(
      'name' => t('Kasvisruoka'),
      'base' => 'node_content',
      'description' => t('Kasvisruoka, ruoka contenttiin'),
      'has_title' => '1',
      'title_label' => t('Kasvisruoka'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
