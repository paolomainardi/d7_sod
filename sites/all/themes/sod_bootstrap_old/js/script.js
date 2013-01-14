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


/* popup functions */
function launchCenter(url, name, width, height, winstyle) {
    var str = "height=" + height + ",innerHeight=" + height;
    str += ",width=" + width + ",innerWidth=" + width;  if (window.screen) {
    var ah = screen.availHeight - 30;    var aw = screen.availWidth - 10;
    var xc = (aw - width) / 2;    var yc = (ah - height) / 2;
    str += ",left=" + xc + ",screenX=" + xc;
    str += ",top=" + yc + ",screenY=" + yc;  }
    return window.open(url, name, str + "," + winstyle);
  }

function PopWindow(strURL, width, height) {   
  launchCenter(strURL, '_blank', width, height, 'scrollbars=yes,toolbar=no,location=no, menubar=no, resizable=no')
}

function launchFullScreen(aURL) {
   var wOpen;
   var sOptions;

   sOptions = 'status=yes,menubar=yes,scrollbars=yes,resizable=yes,toolbar=yes';
   sOptions = sOptions + ',width=' + (screen.availWidth - 10).toString();
   sOptions = sOptions + ',height=' + (screen.availHeight - 122).toString();
   sOptions = sOptions + ',screenX=0,screenY=0,left=0,top=0';

   wOpen = window.open( '', '_blank', sOptions );
   wOpen.location = aURL;
   wOpen.focus();
   wOpen.moveTo( 0, 0 );
   wOpen.resizeTo( screen.availWidth, screen.availHeight );
   return wOpen;
}
  
// --------------------------------------------
// 
// usage: log('inside coolFunc', this, arguments);
// paulirish.com/2009/log-a-lightweight-wrapper-for-consolelog/
window.log = function(){
  log.history = log.history || [];   // store logs to an array for reference
  log.history.push(arguments);
  if(this.console) {
    arguments.callee = arguments.callee.caller;
    var newarr = [].slice.call(arguments);
    (typeof console.log === 'object' ? log.apply.call(console.log, console, newarr) : console.log.apply(console, newarr));
  }
};

// make it safe to use console.log always
(function(b){function c(){}for(var d="assert,count,debug,dir,dirxml,error,exception,group,groupCollapsed,groupEnd,info,log,timeStamp,profile,profileEnd,time,timeEnd,trace,warn".split(","),a;a=d.pop();){b[a]=b[a]||c}})((function(){try
{console.log();return window.console;}catch(err){return window.console={};}})());

// --------------------------------------------

var timHelper = {
  IS_IPAD: (navigator.userAgent.match(/iPad/i) != null) ? true : false,
  IS_IPHONE_OR_IPOD: ((navigator.userAgent.match(/iPhone/i) != null) || (navigator.userAgent.match(/iPod/i) != null)) ? true : false,
  IS_ANDROID: (navigator.userAgent.toLowerCase().indexOf("android") > -1) ? true : false,
  CURRENT_DEVICE: undefined,
  CURRENT_ROTATION: 0,
  RE: {
    email : /^[\w-]+(\.[\w-]+)*@([a-z0-9-]+(\.[a-z0-9-]+)*?\.[a-z]{2,6}|(\d{1,3}\.){3}\d{1,3})(:\d{4})?$/,
    integer : /^[0-9]+$/,
    empty : /^$/,
    empty_or_blank : /^\s*$/,
    hex_color_pattern: /^\#([a-fA-F0-9]{6}|[a-fA-F0-9]{3})$/
  }
};

timHelper.IS_HANDHELD = (timHelper.IS_IPHONE_OR_IPOD || timHelper.IS_IPAD || timHelper.IS_ANDROID);

timHelper.SET_DEVICE_CLASS = function($element) {
  timHelper.CURRENT_DEVICE = 'unknown';
  if (timHelper.IS_IPAD) timHelper.CURRENT_DEVICE = 'iPad';
  if (timHelper.IS_IPHONE_OR_IPOD) timHelper.CURRENT_DEVICE = 'iPhone';
  if (timHelper.IS_ANDROID) timHelper.CURRENT_DEVICE = 'Android';
  if (timHelper.IS_HANDHELD) $element.addClass(timHelper.CURRENT_DEVICE);
};

timHelper.DETECT_ORIENTATION = function($element) {
  if(timHelper.IS_HANDHELD){
    timHelper.CURRENT_ROTATION = ( orientation == 0 || orientation == 180 ) ? 'portrait' : 'landscape';
    $element.removeClass('portrait').removeClass('landscape').addClass(timHelper.CURRENT_ROTATION);
  }
};

timHelper.GET_VIEWPORT = function() {
 var viewPortWidth;
 var viewPortHeight;

 // the more standards compliant browsers (mozilla/netscape/opera/IE7) use window.innerWidth and window.innerHeight
 if (typeof window.innerWidth != 'undefined') {
   viewPortWidth = window.innerWidth,
   viewPortHeight = window.innerHeight
 }

// IE6 in standards compliant mode (i.e. with a valid doctype as the first line in the document)
 else if (typeof document.documentElement != 'undefined'
 && typeof document.documentElement.clientWidth !=
 'undefined' && document.documentElement.clientWidth != 0) {
    viewPortWidth = document.documentElement.clientWidth,
    viewPortHeight = document.documentElement.clientHeight
 }

 // older versions of IE
 else {
   viewPortWidth = document.getElementsByTagName('body')[0].clientWidth,
   viewPortHeight = document.getElementsByTagName('body')[0].clientHeight
 }
 return {'width': viewPortWidth, 'height': viewPortHeight};
};



// --------------------------------------------

(function ($, Drupal, window, document, undefined) {
    $(function() {
       
        // First caching
        var $window = $(window);
        var $body = $('body');
        
        timHelper.SET_DEVICE_CLASS($body);
        
        // Social links
        var $socials = $('.easy-social-box', $body);
        var ani_speed = 300;
        
        // interazioni non touch su mouse over per i social links
        if (!Modernizr.touch) {
            $socials.bind('mouseenter', function () {
                $('.widgets-wr', $socials).fadeIn(ani_speed);
            }).bind('mouseleave', function() {
                $('.widgets-wr', $socials).fadeOut(ani_speed);
            }).find('a').bind('click', function() {
                preventDefault();
                return false;
            });
        }

        // Interazioni sui devices touch
        if (Modernizr.touch) {
            Modernizr.load({
                load: {
                    // Librerie di supporto per eventi touch
                    'toe' : Drupal.settings.basePath + Drupal.settings.themePath + '/js/toe.min.js'
                },
                callback : function (url, result, key) {
                    // log(url, result, key);
                    if ( key === 'toe' ) {
                        
                        /*
                         * Interazione touch su social share
                         */
                        $socials.on('tap', function () {
                            $('.widgets-wr', $socials).toggle(ani_speed);
                        });

                        /* 
                         * MENU
                         * 
                         * Questa funzione gestisce solamente delle classi.
                         * La visualizzazione è quindi gestita tutta con regole CSS
                         * Si noti che il click su iOS setta anche lo stato :hover
                         * http://www.nczonline.net/blog/2012/07/05/ios-has-a-hover-problem/
                         */ 
                        // Nascondo assegnando la classe closed per evitare il comportamento doppio 
                        // sui touch device con mouse (tipo desktop con supporto touch)
                        $('#block-system-main-menu > ul > li > ul', $body).each( function () { 
                            $(this).removeClass('opened').addClass('closed')
                                   .parents('li').css('cursor','pointer');
                        });
                        // Gestisco l'interazione al click sul menu (si noti che il tap di hammer non va perchè
                        // si propaga anche al click sui link)
                        $('#block-system-main-menu > ul > li', $body).on('click', function() {
                            $clicked_element = $(this);
                            if ($clicked_element.hasClass('touched')) {
                                // sto cliccando per chiudere l'elemento aperto
                                // $('#block-system-main-menu .touched', $body).removeClass('touched');
                                $clicked_element.removeClass('touched');
                                $clicked_element.find(' > ul').removeClass('opened').addClass('closed');
                            } else {
                                // sto cliccando su di un altro elemento
                                $('#block-system-main-menu .touched', $body).removeClass('touched');
                                $('#block-system-main-menu .opened', $body).removeClass('opened');
                                $clicked_element.addClass('touched').find(' > ul').removeClass('closed').addClass('opened');
                            }
                        });
                        
                        /*
                         * Overlay
                         *
                        $(document).on('transformend', function() {
                            if ($.colorbox !== 'undefined' && $('#cboxLoadedContent').text() !== '') {
                              
                              // var viewport = timHelper.GET_VIEWPORT();
                              // var width = viewport.width;
                              // var height = viewport.height;
                              // colorboxResize(width, height);
                              // var width = $window.width();
                              // var height = $window.height();
                              // colorboxResize(width, height);
                              // $.colorbox.close()
                            }
                            // return true;
                        });
                        */
                    }
                }
            });
        }
        

        /*
         * Homepage specific
         */
        if ($body.hasClass('node-type-tabs')) {
            // Init carousel
            $('.rs-carousel', $body).carousel({
                // Continuos does not work with touch: https://github.com/richardscarrott/jquery-ui-carousel/issues/27
                // 'continuous'    : true, 
                // Enabling support for acceleration using jquery.translate3d.js 
                // throws an error during slide transitions: uncaught ReferenceError animate is not defined
                // 'translate3d'   : Modernizr && Modernizr.csstransforms3d,
                'touch'         : Modernizr && Modernizr.touch,
                'autoScroll'    : true,
                'pause'         : 6000,
                'itemsPerPage'  : 1
            });
            
            // console.log ("Modernizr && Modernizr.csstransforms3d ", Modernizr && Modernizr.csstransforms3d)
            
            // Init tabs
            $('#home-tabs', $body).tabs({ event: "mouseover" });
            
            // Country selector
            // 
            // Nei touch devices utilizzo la select di default
            if (!Modernizr.touch && (!$body.hasClass('iPad') || !$body.hasClass('iPhone') || !$body.hasClass('Android'))) {
                $('#edit-country').find('option').eq(0).text('').end().end().select2({
                    'width'         : 'off',
                    'placeholder'   : Drupal.t('Seleziona paese')
                });
            };
         
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
                $labels.each( function () {
                    $(this).prepend('<span>+/-</span>').parent().addClass('closed').end().click( function () {
                        $(this).parents('.wrapper').toggleClass('closed');
                    });
                })
            }
            
            var $questions = $('#info .faqfield-question', $body);
            // If there are questions
            if ($questions.size() > 0) {
                $questions.each( function () {
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
        
        /*
         * COLORBOX overlay
         */
        // Metto qui tutti i bind ulteriori per gli eventi scatenati dai colorbox
        
        // Set default colorbox settings from Drupal settings
        $.extend($.colorbox.settings, Drupal.settings.colorbox);
        // $.extend($.fn.colorbox.settings, Drupal.settings.colorbox);
        
        $(document).bind({
            // Callback that fires right after loaded content is displayed
            /*
            'cbox_complete' : function() {
                // log("script.js - cbox_complete");
            },
            // callback that fires right before ColorBox begins to open
            'cbox_open' : function() {
                // log("script.js - cbox_open");
            },
            // Callback that fires right before attempting to load the target content
            'cbox_load' : function() {
                // log("script.js - cbox_load");
                // $('#cboxLoadingGraphic, #cboxLoadingOverlay').show();
            },
            // Callback that fires at the start of the close process
            'cbox_cleanup' : function() {
                // log("script.js - cbox_cleanup");
            },
            */
            // Callback that fires once ColorBox is closed
            'cbox_closed' : function() {
                // log("script.js - cbox_closed");
                // We need to clear out our html just in case there is a video with autoplay.
                $.colorbox.remove();
            }
            
        });
        
        $(document).ajaxStart( function () {
            // log('AJAX STARTED');
        })
        
        // colorbox resize function
        function colorboxResize(width, height) {  
          console.log('colorboxResize');
          
          // Add/remove a "responsive" class for styling on small resolution devices
          if (width < 750) {
              $('#colorbox').addClass('small');
          } else { 
              $('#colorbox').removeClass('small'); 
          }
          
          // Qui inseriamo un minimo di logica per il calcolo delle dimensioni dell'overlay
          var overlay_width =  (width < 750) ? (width * 0.9) : 670;
          
          // log($colorbox_content.attr('class'));
          var overlay_height = height * 0.8;
          
          // 630px is the height in iPad 1 & 2 in landscape mode
          if (height <= 630) {
              $.colorbox.resize({
                  'width'  : overlay_width,
                  'height' : overlay_height
              })
          } else {
              $.colorbox.resize({
                  'width'     : overlay_width
              })
          }
        }

        $(document).ajaxComplete( function () {
            //log('AJAX COMPLETED');
            if ($.colorbox !== 'undefined') {
              var $colorbox_content = $('#cboxContent');
              if ($colorbox_content.hasClass('loading')) {
                  $colorbox_content.removeClass('loading');
              }           
              var viewport = timHelper.GET_VIEWPORT();
              var width = viewport.width;
              var height = viewport.height;
              console.log(width);
              console.log(height);
              // var width = $window.width();
              // var height = $window.height();
              colorboxResize(width, height);
            }
        })
        
        // resize overlay on window resize/viewport changes (zoom)
        $(window).on('resize', function() {
          //console.log('resize');
          if ($.colorbox !== 'undefined' && $('#cboxLoadedContent').text() !== '') {
            var viewport = timHelper.GET_VIEWPORT();
            var width = viewport.width;
            var height = viewport.height;
            colorboxResize(width, height);
          }
        });
        
    });
})(jQuery, Drupal, this, this.document);

// Global site behaviour
/*
Drupal.behaviors.timGlobal = {
  attach: function(context, settings) {
    (function ($, Drupal, window, document, undefined) {
                
    })(jQuery, Drupal, this, this.document);
  }
}
*/
