<?php
/**
 * @file
 * wsdot_advertisements_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function wsdot_advertisements_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-advertisements-body'
  $field_instances['node-advertisements-body'] = array(
    'bundle' => 'advertisements',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-advertisements-field_ad_status'
  $field_instances['node-advertisements-field_ad_status'] = array(
    'bundle' => 'advertisements',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You would fill this information out when you have it for the closed ad, e.g., "90% completed" or "Agreement Awarded". Then this text would display in the "Closed Ad" table under the Status subheading.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_status',
    'label' => 'Ad Status',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 180,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-advertisements-field_dates_of_publication'
  $field_instances['node-advertisements-field_dates_of_publication'] = array(
    'bundle' => 'advertisements',
    'default_value' => array(
      0 => array(
        'value' => 'Wednesday, March 25, 2015 and Wednesday, April 1, 2015
',
      ),
    ),
    'deleted' => 0,
    'description' => 'For example, "Wednesday, March 25, 2015 and Wednesday, April 1, 2015".',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dates_of_publication',
    'label' => 'Dates of Publication',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-advertisements-field_project_description'
  $field_instances['node-advertisements-field_project_description'] = array(
    'bundle' => 'advertisements',
    'default_value' => array(
      0 => array(
        'value' => '<ul>
	<li>Request for Qualification (pdf 00 kb)</li>
	<li>Criteria Definitions (pdf 00 kb)</li>
</ul>
',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'Add your text under this heading and format as a list. Then create your links. You can change the number for the pdf file size as well, where it says "pdf 00 kb".',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_project_description',
    'label' => 'Project Description, Evaluation Criteria, Submittal Information',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-advertisements-field_submit_required_forms'
  $field_instances['node-advertisements-field_submit_required_forms'] = array(
    'bundle' => 'advertisements',
    'default_value' => array(
      0 => array(
        'value' => '<ul>
	<li>Consultant Information Form (pdf 00 kb)</li>
	<li>Performance Evaluation for Non-WSDOT Projects (pdf 00 kb)</li>
</ul>
',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'Add your text under this heading and format as a list. Then create your links. You can change the number for the pdf file size as well, where it says "pdf 00 kb".',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_submit_required_forms',
    'label' => 'Submit Required Forms',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-advertisements-field_submittal_due_date'
  $field_instances['node-advertisements-field_submittal_due_date'] = array(
    'bundle' => 'advertisements',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_submittal_due_date',
    'label' => 'Submittal Due Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'M j Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-advertisements-field_submittal_status'
  $field_instances['node-advertisements-field_submittal_status'] = array(
    'bundle' => 'advertisements',
    'default_value' => array(
      0 => array(
        'value' => '<ul>
	<li>Submittals Received</li>
	<li>Selected</li>
</ul>
',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'Starting text is provided but can be changed to suit your needs.',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_submittal_status',
    'label' => 'Submittal Status',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-advertisements-field_where_published'
  $field_instances['node-advertisements-field_where_published'] = array(
    'bundle' => 'advertisements',
    'default_value' => array(
      0 => array(
        'value' => 'Dates of publication in the Seattle Daily Journal of Commerce.',
      ),
    ),
    'deleted' => 0,
    'description' => 'This information was previously contained under the heading of Dates of Publication. The text that goes here would be something like "Dates of publication in the Seattle Daily Journal of Commerce".',
    'display' => array(
      'default' => array(
        'label' => 'abovec',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_where_published',
    'label' => 'Where Dates Published',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 255,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ad Status');
  t('Add your text under this heading and format as a list. Then create your links. You can change the number for the pdf file size as well, where it says "pdf 00 kb".');
  t('Body');
  t('Dates of Publication');
  t('For example, "Wednesday, March 25, 2015 and Wednesday, April 1, 2015".');
  t('Project Description, Evaluation Criteria, Submittal Information');
  t('Starting text is provided but can be changed to suit your needs.');
  t('Submit Required Forms');
  t('Submittal Due Date');
  t('Submittal Status');
  t('This information was previously contained under the heading of Dates of Publication. The text that goes here would be something like "Dates of publication in the Seattle Daily Journal of Commerce".');
  t('Where Dates Published');
  t('You would fill this information out when you have it for the closed ad, e.g., "90% completed" or "Agreement Awarded". Then this text would display in the "Closed Ad" table under the Status subheading.');

  return $field_instances;
}
