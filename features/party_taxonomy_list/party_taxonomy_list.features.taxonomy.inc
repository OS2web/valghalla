<?php
/**
 * @file
 * party_taxonomy_list.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function party_taxonomy_list_taxonomy_default_vocabularies() {
  return array(
    'partier' => array(
      'name' => 'Partier',
      'machine_name' => 'partier',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
