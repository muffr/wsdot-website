<?php
/**
 * @file
 * wsdot_workflow.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function wsdot_workflow_workbench_moderation_export_transitions() {
  $items = array(
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'name' => 'Submit for Review',
    ),
    'needs_moderation:draft' => array(
      'from_name' => 'needs_moderation',
      'to_name' => 'draft',
      'name' => 'Moderator Declined',
    ),
    'needs_moderation:published' => array(
      'from_name' => 'needs_moderation',
      'to_name' => 'published',
      'name' => 'Publish',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'name' => 'Editor Declined',
    ),
    'needs_review:needs_moderation' => array(
      'from_name' => 'needs_review',
      'to_name' => 'needs_moderation',
      'name' => 'Submit for Moderation',
    ),
  );
  return $items;
}
