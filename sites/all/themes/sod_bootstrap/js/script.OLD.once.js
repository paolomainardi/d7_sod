/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth



// Global site JS

Drupal.behaviors.timGlobal = {
  attach: function(context, settings) {
    (function ($, Drupal, window, document, undefined) {

        // First caching
        var $body = $('body');

        /*
         * Homepage specific
         */
        
        if ($body.hasClass('front')) {
            
            // Init carousel
            $('.rs-carousel').carousel();
            
            // Init tabs
            $('#home-tabs', $body).tabs({ event: "mouseover" });
        };
        
        
        
        
        /*
         *  Offer page specific
         */
        
        if ($body.hasClass('node-type-offer')) {
            
            // Init tabs
            $('#offer-tabs', $body).tabs({ event: "click" });
            
            // Build expandable elements using labels
            var $labels = $('.panel .label-above', $body);
            // If there are labels
            if ($labels.size() > 0) {
                $labels.once( function () {
                    $(this).prepend('<span>+/-</span>').parent().addClass('closed').end().click( function () {
                        $(this).parents('.wrapper').toggleClass('closed');
                    });
                })
            }
            
            var $questions = $('#info .faqfield-question', $body);
            // If there are questions
            if ($questions.size() > 0) {
                $questions.once( function () {
                    $(this).addClass('closed')
                           .wrapInner('<span></span>').prepend('<span>+/-</span>')
                           .next().addClass('closed').end()
                           .click( function () {
                                $(this).toggleClass('closed').next().toggleClass('closed');
                           });
                });
                // Add a collapse / expand all button
                var $definition_list = $('.faqfield-definition-list', $body);
                $definition_list.before('<div id="open-close-all-wr"><a id="open-close-all" class="all-closed" href="#">' + Drupal.t('Espandi tutte') + '</a></div>');
                $('#open-close-all').click( function () {
                    var $this = $(this);
                    $this.toggleClass('all-closed');
                    // Button function logic
                    if ($this.hasClass('all-closed')) {
                        // dato che il bottone ha la classe "all-closed" sto chiudendo tutte le faq
                        $this.text( Drupal.t('Espandi tutte') );
                        $definition_list.find('dt, dd').addClass('closed');
                    } else {
                        // il bottone non ha la classe "all-closed" quindi voglio aprire tutte le faq
                        $this.text( Drupal.t('Chiudi tutte') );
                        $definition_list.find('dt, dd').removeClass('closed');
                    }
                    return false;
                })
            }
                

        };
        
        
        
    })(jQuery, Drupal, this, this.document);
  }
}
