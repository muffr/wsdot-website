(function($){
    Drupal.behaviors.YouTubePlayer = {
        attach: function (context, settings) {
			var v = document.getElementsByClassName("youtube-player");
			for (var n = 0; n < v.length; n++) {
				var temp_id = v[n].getElementsByTagName("div")[0].textContent;
				v[n].setAttribute("data-id", temp_id.trim());
				v[n].innerHTML = "";
				temp_id = "";
				var p = document.createElement("div");
				p.innerHTML = createThumb(v[n].dataset.id);
				p.onclick = createIframe;
				v[n].appendChild(p);
			}
        }
    };
})(jQuery);

function createThumb(id) {
	return '<img class="youtube-thumb" src="//i.ytimg.com/vi/' + id + '/hqdefault.jpg"><div class="play-button"></div>';
}

function createIframe() {
	var ytPlayers = document.getElementsByClassName("youtube-iframe");
	var i;
	for(i=0;i<ytPlayers.length;i++){
		ytPlayers[i].contentWindow.postMessage('{"event":"command","func":"pauseVideo","args":""}', '*');
	}             
	var iframe = document.createElement("iframe");
	iframe.setAttribute("src", "//www.youtube.com/embed/" + this.parentNode.dataset.id + "?autoplay=1&autohide=2&border=0&wmode=opaque&enablejsapi=1&controls=0&showinfo=0");
	iframe.setAttribute("frameborder", "0");
	iframe.setAttribute("class", "youtube-iframe");
	this.parentNode.replaceChild(iframe, this);
}