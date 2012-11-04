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
  $box->title = 'A Bologna!';
  $box->description = 'Raduno';
  $box->options = array(
    'body' => array(
      'value' => '<p>Il primo raduno di Spaghetti Open Data si terr&agrave; a <strong>Bologna, dal 18 al 20 gennaio 2013</strong>. Sar&agrave; un&#39;occasione per conoscerci e fare insieme cose con i dati. Tutti benvenuti! <a href="http://www.spaghettiopendata.org/it/node/53">Info</a></p>
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
  $box->title = '#opendataitaly';
  $box->description = 'Twitter Widget opendataitaly';
  $box->options = array(
    'body' => array(
      'value' => '<script charset="utf-8" src="http://widgets.twimg.com/j/2/widget.js"></script><script>
new TWTR.Widget({
  version: 2,
  type: \'search\',
  search: \'#opendataitaly\',
  interval: 30000,
  title: \'Spaghetti Opendata\',
  subject: \'#opendataitaly\',
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
      'value' => '<h1>
	<img alt="Foto: Medhin Paolos" src="http://www.cottica.net/wp-content/uploads/2012/06/LOTEpicjpg.jpeg" style="width: 600px; height: 450px;" /></h1>
<p>Siamo un gruppo di cittadini italiani interessati al rilascio di&nbsp;<strong>dati pubblici in formato aperto, in modo da renderne facile l&#39;accesso e il riuso (open data)</strong>. Ci sembra che questa pratica sia utile per alimentare la discussione sulle scelte che ci attendono; rendendo facilmente accessibili informazioni di qualit&agrave; alta, contribuir&agrave; a renderla pi&ugrave; razionale, allargata e fondata sui dati. Con tutti i suoi difetti, la nostra democrazia &egrave; un grandissimo dono che ci hanno fatto le generazioni passate: il minimo che possiamo fare, tutti insieme, &egrave; cercare di averne cura.</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['welcome'] = $box;

  return $export;
}
