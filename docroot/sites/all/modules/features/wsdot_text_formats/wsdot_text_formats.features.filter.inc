<?php
/**
 * @file
 * wsdot_text_formats.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function wsdot_text_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'ckeditor_link_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  // Exported format: Wysiwyg.
  $formats['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'name' => 'Wysiwyg',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'wysiwyg' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'valid_elements' => '@[class|style|id],
a[href|target<_blank|title|name],
div[align<center?justify?left?right|data-id],
p[align<center?justify?left?right],
img[src|alt|title|width|height|useMap],
h2,h3,h4,h5,
br,strong,b,em,
s,strike,
blockquote,pre,address,sub,sup,
ul,ol[start],
li,
hr,br,
table[style|cellspacing|cellpadding|border|bordercolor|align],thead,tbody,caption,tr[class],td[align|width|colspan|rowspan],th[align|valign|class|colspan],
area[shape|coords|href|target|alt|title],
map[name]',
          'allow_comments' => 0,
          'nofollow_policy' => 'disabled',
          'nofollow_domains' => array(
            0 => 'wsdot.dev.dd',
          ),
          'style_color' => array(
            'background-color' => 'background-color',
            'color' => 0,
            'background' => 0,
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font-size' => 'font-size',
            'font' => 0,
            'font-family' => 0,
            'font-size-adjust' => 0,
            'font-stretch' => 0,
            'font-style' => 0,
            'font-variant' => 0,
            'font-weight' => 0,
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 0,
            'text-indent' => 0,
            'text-transform' => 0,
            'letter-spacing' => 0,
            'word-spacing' => 0,
            'white-space' => 0,
            'direction' => 0,
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'margin' => 'margin',
            'margin-top' => 'margin-top',
            'margin-right' => 'margin-right',
            'margin-bottom' => 'margin-bottom',
            'margin-left' => 'margin-left',
            'padding' => 'padding',
            'padding-top' => 'padding-top',
            'padding-right' => 'padding-right',
            'padding-bottom' => 'padding-bottom',
            'padding-left' => 'padding-left',
          ),
          'style_border-1' => array(
            'border' => 'border',
            'border-top' => 0,
            'border-right' => 0,
            'border-bottom' => 0,
            'border-left' => 0,
            'border-width' => 0,
            'border-top-width' => 0,
            'border-right-width' => 0,
            'border-bottom-width' => 0,
            'border-left-width' => 0,
          ),
          'style_border-2' => array(
            'border-color' => 0,
            'border-top-color' => 0,
            'border-right-color' => 0,
            'border-bottom-color' => 0,
            'border-left-color' => 0,
            'border-style' => 0,
            'border-top-style' => 0,
            'border-right-style' => 0,
            'border-bottom-style' => 0,
            'border-left-style' => 0,
          ),
          'style_dimension' => array(
            'height' => 'height',
            'line-height' => 'line-height',
            'max-height' => 'max-height',
            'max-width' => 'max-width',
            'min-height' => 'min-height',
            'min-width' => 'min-width',
            'width' => 'width',
          ),
          'style_positioning' => array(
            'bottom' => 'bottom',
            'clip' => 'clip',
            'left' => 'left',
            'overflow' => 'overflow',
            'right' => 'right',
            'top' => 'top',
            'vertical-align' => 'vertical-align',
            'z-index' => 'z-index',
          ),
          'style_layout' => array(
            'clear' => 'clear',
            'display' => 'display',
            'float' => 'float',
            'position' => 'position',
            'visibility' => 'visibility',
          ),
          'style_list' => array(
            'list-style' => 'list-style',
            'list-style-image' => 0,
            'list-style-position' => 0,
            'list-style-type' => 0,
          ),
          'style_table' => array(
            'border-collapse' => 'border-collapse',
            'border-spacing' => 0,
            'caption-side' => 0,
            'empty-cells' => 0,
            'table-layout' => 0,
          ),
          'style_user' => array(
            'cursor' => 0,
            'outline' => 0,
            'outline-width' => 0,
            'outline-style' => 0,
            'outline-color' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(
            0 => 'bold',
            2 => 'row',
            4 => 'cl',
            6 => 'cr',
            8 => 'cb',
            10 => 'skip',
            12 => 'hide',
            14 => 'smalltext',
            16 => 'rightaligntable',
            18 => 'RadEContentBordered',
            20 => 'RadEContent',
            22 => 'zebra',
            24 => 'tablesorter',
            26 => 'headerSortUp',
            28 => 'headerSortDown',
            30 => 'blogger',
            32 => 'flickr',
            34 => 'twitter',
            36 => 'youtube',
            38 => 'rss',
            40 => 'slideshare',
            42 => 'friendfeed',
            44 => 'facebook',
            46 => 'instagram',
            48 => 'linkedin',
            50 => 'jobsnowbg',
            52 => 'arrabg',
            54 => 'goodtogobg',
            56 => 'censusbg',
            58 => 'm_emailupdates',
            60 => 'emailupdates',
            62 => 'orangeBg',
            64 => 'greyBg',
            66 => 'blueBg',
            68 => 'blueBg2',
            70 => 'leftnav',
            72 => 'leftnavbox',
            74 => 'header',
            76 => 'bluebox',
            78 => 'centered',
            80 => 'content',
            82 => 'nav',
            84 => 'activeSlide',
            86 => 'regionsmap',
            88 => 'bluebox2px',
            90 => 'leftcolumn',
            92 => 'middlecolumn',
            94 => 'rightcolumn',
            96 => 'contentbox',
            98 => 'border',
            100 => 'greybg',
            102 => 'brownbg',
            104 => 'yellowbg',
            106 => 'projectstatusbox',
            108 => 'localnewsbox',
            110 => 'newsbox',
            112 => 'widget',
            114 => 'widgetcol',
            116 => 'static',
            118 => 'widgetset',
            120 => 'widgetdata',
            122 => 'onecol',
            124 => 'twocol',
            126 => 'threecol',
            128 => 'threecol_icons',
            130 => 'bottomnav',
            132 => 'first',
            134 => 'item-list',
            136 => 'youtube-container',
            138 => 'youtube-player',
            140 => 'youtube-player-placeholder',
            142 => 'columns-2',
            144 => 'columns-3',
          ),
          'rule_valid_ids' => array(
            0 => 'regions*',
          ),
          'rule_style_urls' => array(),
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'ckeditor_link_filter' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  return $formats;
}
