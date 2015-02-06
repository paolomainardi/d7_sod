<?php
/**
 * @file
 * sod_base.box.inc
 */

/**
 * Implements hook_default_box().
 */
function sod_base_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'sod_apps_links';
  $box->plugin_key = 'simple';
  $box->title = 'A Perugia!';
  $box->description = 'Raduno';
  $box->options = array(
    'body' => array(
      'value' => '<p><span>Spaghetti Open Data al Festival Internazionale del Giornalismo con un hackathon dedicato agli Open Data. <strong>Ci vediamo a Perugia sabato 27 aprile 2013.</strong> Tutti benvenuti! </span></p>
<p><span><a href="http://www.spaghettiopendata.org/it/blog/maracinquepalmi/spaghetti-open-data-al-festival-di-giornalismo-di-perugia#.UVP7hxdrio0">Clicca qui per le informazioni.</a></span><br />
	&nbsp;</p>
',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['sod_apps_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'twitter_widget_opendataitaly';
  $box->plugin_key = 'simple';
  $box->title = 'Da Twitter';
  $box->description = 'Twitter Widget';
  $box->options = array(
    'body' => array(
      'value' => '<script charset="utf-8" src="http://widgets.twimg.com/j/2/widget.js"></script><script>
new TWTR.Widget({
  version: 2,
  type: \'search\',
  search: \'#opendataitaly OR #SOD13\',
  interval: 30000,
  title: \'Spaghetti Open Data\',
  subject: \'\',
  width: 200,
  height: 300,
  theme: {
    shell: {
      background: \'#8ec1da\',
      color: \'#ffffff\'
    },
    tweets: {
      background: \'#ffffff\',
      color: \'#444444\',
      links: \'#1985b5\'
    }
  },
  features: {
    scrollbar: false,
    loop: true,
    live: true,
    behavior: \'default\'
  }
}).render().start();
</script>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['twitter_widget_opendataitaly'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'welcome';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome';
  $box->description = 'Welcome';
  $box->options = array(
    'body' => array(
      'value' => '<p><img alt="Logo: Luca Corsato CC- BY" height="auto" src="http://www.spaghettiopendata.org/sites/default/files/blog/SOD_14_pasta.png" width="40%" /></p>
<h4>
	Il terzo raduno di Spaghetti Open Data si tiene a Bologna, 27-29 marzo 2015 &ndash; <a href="/blog/alberto-cottica/sod15-come-iscriversi-e-partecipare">Info</a></h4>
<p>Siamo un gruppo di cittadini italiani interessati al rilascio di&nbsp;<strong>dati pubblici in formato aperto, in modo da renderne facile l&#39;accesso e il riuso (open data)</strong>. Ci sembra che questa pratica sia utile per alimentare la discussione sulle scelte che ci attendono; rendendo facilmente accessibili informazioni di qualit&agrave; alta, contribuir&agrave; a renderla pi&ugrave; razionale, allargata e fondata sui dati. Con tutti i suoi difetti, la nostra democrazia &egrave; un grandissimo dono che ci hanno fatto le generazioni passate: il minimo che possiamo fare, tutti insieme, &egrave; cercare di averne cura.</p>
<p>Parliamo di dati su <a href="https://groups.google.com/d/forum/spaghettiopendata">questa mailing list</a> da settembre 2010. Abbiamo anche un <a href="https://github.com/spaghetti-open-data">repo Github</a>.</p>
<p><iframe frameborder="0" height="300" id="forum_embed" scrolling="no" src="javascript:void(0)" width="900"></iframe><script type="text/javascript">
  document.getElementById(\'forum_embed\').src =
     \'https://groups.google.com/forum/embed/?place=forum/spaghettiopendata\'
     + \'&showsearch=false&showpopout=true&showtabs=false&hideforumtitle=true\'
     + \'&parenturl=\' + encodeURIComponent(window.location.href);
</script></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['welcome'] = $box;

  return $export;
}
