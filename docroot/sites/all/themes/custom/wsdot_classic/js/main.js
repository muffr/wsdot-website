(function($){
    Drupal.behaviors.appPromo = {
        attach: function (context, settings) {
			//show ad if cookie is not set
			if(getCookie("WSDOT-app-promotion")==""){
				if(jQuery('#promo').length){setTimeout("jQuery('#promo').toggleClass('raised');",1000);}
				//set ad cookie
				date = new Date(+new Date + 12096e5);
				expiry_date = date.toUTCString();
				document.cookie = "WSDOT-app-promotion=displayed; expires="+expiry_date+";";
			}
			//close ad
			jQuery(document).click(function(){if(jQuery('#promo').hasClass('raised')){jQuery('#promo').removeClass('raised');}});
			//get cookie function
			function getCookie(cname){
				var name = cname + "=";
				var ca = document.cookie.split(';');
				for(var i=0; i<ca.length; i++){
					var c = ca[i];
					while(c.charAt(0)==' ') c = c.substring(1);
					if(c.indexOf(name) == 0) return c.substring(name.length,c.length);
				}
				return "";
			}
			//app link clicks
			jQuery("#app-store-link").click(function(){ga('send','event','App promo','App Store link click - App promo','Get iPhone app - App promo');});
			jQuery("#play-store-link").click(function(){ga('send','event','App Promo','Google Play link click - App promo','Get Android app - App promo');});
        }
    };
})(jQuery);