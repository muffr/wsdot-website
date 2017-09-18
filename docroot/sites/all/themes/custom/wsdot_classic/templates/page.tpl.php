<a href="#skipnav" class="skip">Skip Top Navigation</a> <a href="#skiptocontent" class="skip">Skip to Content</a> <a name="top"></a>
<div id="header">
  <div class="topban">
    <ul class="topnav">
      <li><a href="/">WSDOT Home</a></li>
      <li><a href="/contact">Contact Us</a></li>
      <li><a href="/goodtogo">Good To Go!</a></li>
      <li><a href="/employment">Employment</a></li>
      <li class="first"><a href="/news">News</a></li>
    </ul>
  </div>
  <div class="logo">
    <h1> <a href="/"><img src="/sites/all/themes/custom/wsdot_classic/images/blacklogo.gif" alt="WSDOT" /></a> </h1>
    <div class="emailupdates"><a href="https://public.govdelivery.com/accounts/WADOT/subscriber/new" onclick="window.open('https://public.govdelivery.com/accounts/WADOT/subscriber/new','Popup','width=780,height=440,toolbar=no,scrollbars=yes,resizable=yes'); return false" title="Sign up for email updates">Email/text updates</a></div>
  </div>

  <div class="mainban">
    <div class="mainnav">

      <ul>
        <li><a href="/traffic" title="Statewide Traveler Information">Traffic &amp; Cameras</a></li>
        <li><a href="/projects" title="Highway, Ferry and Rail Construction Projects">Projects</a></li>
        <li><a href="/business" title="Information on Doing Business with WSDOT">Business</a></li>
        <li><a href="/environment" title="What does WSDOT do for the environment?">Environment</a></li>
        <li><a href="/mapsdata.htm" title="Maps, Publications and Transportation Data">Maps &amp; Data</a></li>
      </ul>

      <div class="search">
        <form id="searchform" method="get" action="https://www.wsdot.wa.gov/search/">
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
    <?php print render($title_prefix); ?>
    <?php if ($title): ?><h2 class="title" id="page-title"><?php print $title; ?></h2><?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
    <?php print render($page['help']); ?>
    <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
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