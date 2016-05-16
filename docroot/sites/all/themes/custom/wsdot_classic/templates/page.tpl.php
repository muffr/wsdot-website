<a href="#skipnav" class="skip">Skip Top Navigation</a> <a href="#skiptocontent" class="skip">Skip to Content</a> <a name="top"></a>
<div id="header">
  <div class="topban">
    <ul class="topnav">
      <li><a href="/">WSDOT Home</a></li>
      <li><a href="/contact/contact-us">Contact Us</a></li>
      <li><a href="http://www.wsdot.wa.gov/goodtogo/">Good To Go!</a></li>
      <li><a href="http://www.wsdot.wa.gov/employment/">Employment</a></li>
      <li class="first"><a href="/news">News</a></li>
    </ul>
  </div>
  <div class="logo">
    <h1> <a href="/"><img src="/sites/all/themes/custom/wsdot_classic/images/blacklogo.gif" alt="WSDOT" /></a> </h1>
    <div class="emailupdates"><a href="https://service.govdelivery.com/service/multi_subscribe.html?code=WADOT" onclick="window.open('https://service.govdelivery.com/service/multi_subscribe.html?code=WADOT','Popup','width=780,height=440,toolbar=no,scrollbars=yes,resizable=yes'); return false" title="Sign up for email updates">Email updates</a></div>
  </div>

  <div class="mainban">
    <div class="mainnav">

      <ul>
        <li><a href="http://www.wsdot.wa.gov/traffic/" title="Statewide Traveler Information">Traffic &amp; Cameras</a></li>
        <li><a href="http://www.wsdot.wa.gov/projects/" title="Highway, Ferry and Rail Construction Projects">Projects</a></li>
        <li><a href="http://www.wsdot.wa.gov/business/" title="Information on Doing Business with WSDOT">Business</a></li>
        <li><a href="http://www.wsdot.wa.gov/environment/" title="What does WSDOT do for the environment?">Environment</a></li>
        <li><a href="http://www.wsdot.wa.gov/mapsdata.htm" title="Maps, Publications and Transportation Data">Maps &amp; Data</a></li>
      </ul>

      <div class="search">
        <form id="searchform" method="get" action="https://search.usa.gov/search">
          <fieldset>
            <input type="hidden" id="affiliate" name="affiliate" value="WSDOT" />
            <input type="text" name="query" id="query" class="search-text" />
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
    <?php if(isset($title)&&$title!==""){print "<h2>".$title."</h2>";} ?>
    <?php print render($page['help']); ?>
    <?php print render($page['content']) ?>
  </div>
  <div class="cl"></div>
</div>
<div class="corners-bottom"></div>

  <?php if ($page['agencylinks_first'] || $page['agencylinks_second'] || $page['agencylinks_third'] || $page['agencylinks_fourth'] || $page['agencylinks_fifth']): ?>
    <div class="corners-top"></div>
      <div class="secondary">

        <div class="agencylinks" style="border-left: none;">
          <?php print render($page['agencylinks_first']); ?>
        </div>
        <div class="agencylinks">      
          <?php print render($page['agencylinks_second']); ?>
        </div>
        <div class="agencylinks">      
          <?php print render($page['agencylinks_third']); ?>
        </div>
        <div class="agencylinks">
          <?php print render($page['agencylinks_fourth']); ?>
        </div>
        <div class="agencylinks">
          <?php print render($page['agencylinks_fifth']); ?>
        </div>
        <div class="cl"></div>

      </div>
    <div class="corners-bottom"></div>
  <?php endif; ?>

<div class="corners-top"></div>
<div class="footer">

  <?php if ($page['footer']): ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>

  <div class="copyright">Copyright WSDOT &copy; <?php echo date("Y") ?></div>
</div>