<?php
/**
 * @file
 * rest_areas.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rest_areas_taxonomy_default_vocabularies() {
  return array(
    'rest_area_amenities' => array(
      'name' => 'Rest Area Amenities',
      'machine_name' => 'rest_area_amenities',
      'description' => 'Rest Area Amenities',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
