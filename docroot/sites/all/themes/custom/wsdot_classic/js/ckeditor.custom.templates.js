CKEDITOR.addTemplates('default', {
  imagesPath: Drupal.settings.basePath + 'sites/all/themes/custom/wsdot_classic/images/ckeditor-templates/',
  templates: [ {
    title: 'Static Left Navigation',
    image: 'static-left-nav.gif',
    description: 'Creates a bulleted list. Use to manually add links to other related content.',
    html: '<div class="leftnavbox">' +
            '<h4 class="header greyBg">Your title here</h4>' +
            '<div class="content">' +
              '<ul>' +
                '<li>Replace link text here</li>' +
              '</ul>' +
            '</div>' +
          '</div>'
  } ]
});