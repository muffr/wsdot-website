<?php

function wsdot_classic_preprocess_page(&$vars) {
  $header = drupal_get_http_header('status'); 
  if ($header == '404 Not Found') {     
    $vars['theme_hook_suggestions'][] = 'page__404';
  }
}

drupal_add_js('setTimeout(function(){var a=document.createElement("script");var b=document.getElementsByTagName("script")[0];a.src=document.location.protocol+"//script.crazyegg.com/pages/scripts/0032/9349.js?"+Math.floor(new Date().getTime()/3600000);a.async=true;a.type="text/javascript";b.parentNode.insertBefore(a,b)}, 1);',array('type' => 'inline', 'scope' => 'footer', 'weight' => 0));

?>