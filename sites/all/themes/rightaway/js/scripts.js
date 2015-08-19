(function ($, Drupal) {

	Drupal.behaviors.rightaway = {
	  attach: function(context, settings) {
	    $( "#main-menu" ).addClass( "right" );
	    $( "#main-menu" ).removeClass( "left" );
	  }
	};

	Drupal.behaviors.phone = {
	  attach: function(context, settings) {
	    // Move the phone number into the main menu
	    $('li.phone').once( function() {
	      var $phone = $(this),
	           width = $(window).width();

	        if ($phone.hasClass('phone')) {
	          var $newPos = $('#main-menu li.last');

	          if ($newPos.length) {
	            $newPos.after($phone);
	          }
	        }
	    });
	  }
	};

})(jQuery, Drupal);
