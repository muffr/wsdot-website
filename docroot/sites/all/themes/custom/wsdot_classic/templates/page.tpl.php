<a href="#skipnav" class="skip">Skip Top Navigation</a> <a href="#skiptocontent" class="skip">Skip to Content</a> <a name="top"></a>
<div id="header">
  <div class="topban">
    <ul class="topnav">
      <li><a href="http://www.wsdot.wa.gov/">WSDOT Home</a></li>
      <li><a href="http://www.wsdot.wa.gov/contact/">Contact Us</a></li>
      <li><a href="http://www.wsdot.wa.gov/goodtogo/">Good To Go!</a></li>
      <li><a href="http://www.wsdot.wa.gov/employment/">Employment</a></li>
      <li class="first"><a href="http://www.wsdot.wa.gov/news/">News</a></li>
    </ul>
  </div>
  <div class="logo">
    <h1> <a href="http://www.wsdot.wa.gov"><img src="http://www.wsdot.wa.gov/media/images/blacklogo.gif" alt="WSDOT" /></a> </h1>
    <div class="emailupdates"><a href="http://service.govdelivery.com/service/multi_subscribe.html?code=WADOT" onclick="window.open('http://service.govdelivery.com/service/multi_subscribe.html?code=WADOT','Popup','width=780,height=440,toolbar=no,scrollbars=yes,resizable=yes'); return false" title="Sign up for email updates">Email updates</a></div>
  </div>

  <div class="mainban">
    <div class="mainnav">

        <?php print theme('links__system_main_menu', array(
          'links' => $main_menu,
          'attributes' => array(
            'id' => 'main-menu-links',
            'class' => array('links', 'clearfix'),
          ),
          'heading' => array(
            'text' => t('Main menu'),
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>

      <div class="search">
        <form id="searchform" method="get" action="http://www.wsdot.wa.gov/search/">
          <fieldset>
            <input type="text" name="q" id="query-field" class="search-text" />
            <input type="submit" value="Search" class="searchButton" />
          </fieldset>
        </form>
      </div>
    </div>
  </div>
</div>

<?php if ($breadcrumb): ?>
  <div class="breadcrumbs"><?php print $breadcrumb; ?></div>
<?php endif; ?>

<div id="wrapper">

  <?php if ($page['sidebar_first']): ?>
    <div class="leftnav">
      <!-- Begin: Left navigation box -->
      <div class="leftnavbox">
        <?php print render($page['sidebar_first']); ?>    
      </div>
      <!-- End: Left navigation box -->
    </div>
  <?php endif; ?>

  <div id="main">
    <h2><?php print $title; ?></h2>
    <?php print render($page['help']); ?>
    <?php print render($page['content']) ?>
  </div>
  <div class="cl"></div>
</div>
<div class="corners-bottom"></div>
<div class="corners-top"></div>
<div class="footer">

  <?php if ($page['footer']): ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>

  <div class="copyright">Copyright WSDOT &copy; <?php echo date("Y") ?></div>
</div>
