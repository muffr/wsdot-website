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
    <div class="emailupdates"><a href="https://service.govdelivery.com/service/multi_subscribe.html?code=WADOT" onclick="window.open('https://service.govdelivery.com/service/multi_subscribe.html?code=WADOT','Popup','width=780,height=440,toolbar=no,scrollbars=yes,resizable=yes'); return false" title="Sign up for email updates">Email updates</a></div>
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

<div id="wrapper">
  <div id="main_404">
    <img src="/sites/all/themes/custom/wsdot_classic/images/4.png">
    <img src="/sites/all/themes/custom/wsdot_classic/images/wheel.png?v=2" id="wheel">
    <img src="/sites/all/themes/custom/wsdot_classic/images/4.png">
    <div id="section">
      <br><br>
      <h2 id="off_the_map">You're off the map!</h2>
      <p id="drivers_seat">But you're still in the driver's seat....</p>
      <br>
      <form id="searchform" method="get" action="https://search.usa.gov/search">
        <input type="hidden" id="affiliate" name="affiliate" value="WSDOT" />
        <input type="submit" value="Search" id="search_button_404" />
        <input type="text" autocomplete="off" name="query" class="search_box_404" alt="Insert search text" />
      </form>
    </div>
  </div>
  <div class="cl"></div>
</div>

<div class="corners-bottom"></div>
<!-- Begin: Footer -->
<div class="corners-top"></div>
<div class="footer">
  <div id="block-system-powered-by" class="block block-system">
    <div class="content">
      <span>Powered by <a href="https://www.drupal.org">Drupal</a></span>
    </div>
  </div>
  <ul class="bottomnav">
    <li class="first"><a href="/traffic">Traffic &amp; Cameras</a></li>
    <li><a href="/search">Search</a></li>
    <li><a href="/contact">Contact Us</a></li>
    <li><a href="/siteindex">Site Index</a></li>
    <li><a href="/policy/privacy.htm">Privacy Policy</a></li>
    <li class="last"><a href="/accessibility">Accessibility / Title VI</a> </li>
  </ul>
  <div class="copyright">Copyright WSDOT &copy; <?php echo date("Y") ?></div>
</div>
<script src="https://code.jquery.com/jquery-latest.min.js"></script>
<script>if(!window.jQuery){document.write('<script src="//ajax.googleapis.com/ajax/libs/jquery/2.1.1/jquery.min.js"><\/script>');}</script>
<script>
  $(window).on('load resize',function(){
    $wheel = $('#wheel');
    var offset = $wheel.offset();

    function mouse(e){
      var center_x = (offset.left)+($wheel.width()/2);
      var center_y = (offset.top)+($wheel.height()/2);
      var mouse_x = e.pageX;
      var mouse_y = e.pageY;

      var radians = Math.atan2(mouse_x-center_x,mouse_y-center_y);
      var degree = (radians*(180/Math.PI)*-1)+180; 

      $wheel.css({
        "-moz-transform":"rotate("+degree+"deg)",
        "-webkit-transform":"rotate("+degree+"deg)",
        "-o-transform":"rotate("+degree+"deg)",
        "-ms-transform":"rotate("+degree+"deg)",
        "transform":"rotate("+degree+"deg)"
      });
    }

    $(document).mousemove(mouse);
  });
</script>
