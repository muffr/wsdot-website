<?php

function wsdot_classic_preprocess_page(&$vars) {
  $header = drupal_get_http_header('status'); 
  if ($header == '404 Not Found') {     
    $vars['theme_hook_suggestions'][] = 'page__404';
  }
}

?>