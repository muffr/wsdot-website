jQuery(document).ready(function($){
  $(".zebra tr:nth-child(even)").addClass("alt");
  $("table").tablesorter({sortList:[[0,0]],widgets:['zebra']});
  $.tablesorter.addParser({
    id: "commaDigit",
    is: function(s, table) {
      var c = table.config;
      return $.tablesorter.isDigit(s.replace(/,/g, ""), c);
    },
    format: function(s) {
      return $.tablesorter.formatFloat(s.replace(/,/g, ""));
    },
    type: "numeric"
  });
});
