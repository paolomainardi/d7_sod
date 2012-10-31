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
  $box->title = 'SOD Apps';
  $box->description = 'SOD Apps links';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="http://apps.spaghettiopendata.org" target="_blank">TweetYourMEP</a></p>
',
      'format' => 'filtered_html',
    ),
  );
  $export['sod_apps_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'twitter_widget_opendataitaly';
  $box->plugin_key = 'simple';
  $box->title = 'Diffondi la voce';
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
	Spaghetti OpenData</h1>
<p>Siamo un gruppo di cittadini italiani interessati al rilascio di&nbsp;<strong>dati pubblici in formato aperto, in modo da renderne facile l&#39;accesso e il riuso (open data)</strong>. Ci sembra che questa pratica sia utile per alimentare la discussione sulle scelte che ci attendono; rendendo facilmente accessibili informazioni di qualit&agrave; alta, contribuir&agrave; a renderla pi&ugrave; razionale, allargata e fondata sui dati.</p>
<p>Alcuni paesi hanno gi&agrave; realizzato siti web che funzionano come&nbsp;<em>one stop shops</em>&nbsp;da cui si pu&ograve; accedere immediatamente a tutti i dati pubblicati dalle rispettive amministrazioni. Purtroppo al momento in cui mettiamo online questo sito l&#39;Italia non &egrave; tra quei paesi. In compenso alcune amministrazioni dello Stato e degli enti locali hanno precorso i tempi, pubblicando alcune basi dati per conto proprio. Invece di limitarci ad aspettare data.gov.it, abbiamo pensato che potevamo dare un piccolo contributo riunendo in un unico luogo i link ai dataset aperti e agli strumenti informatici per organizzarli e distribuirli di cui siamo a conoscenza.</p>
<p><strong>Spaghetti Open Data</strong>&nbsp;&egrave; appunto questo contributo. E&#39; il risultato del lavoro di molti cittadini che hanno segnalato links e li hanno riorganizzati. Il sito stesso &egrave; in formato open e progettato in modo da essere integrato con&nbsp;<a href="http://it.ckan.net/about">CKAN italiano</a>. L&#39;abbiamo realizzato interamente con lavoro volontario e autofinanziandoci l&#39;hosting. Non ha alcuna ambizione che non sia quella di fornire un punto di entrata provvisorio ai dati pubblici italiani in attesa che siano resi Open Data ed ai pochi Open Data italiani esistenti. Le&nbsp;<a href="http://www.w3.org/DesignIssues/LinkedData.html">stelline</a>&nbsp;del livello di riusabilit&agrave; servono a comunicare questo passaggio infatti: le tre stelline identificano il livello degli Open Data.</p>
<p>Consideratelo un regalo. Con tutti i suoi difetti, la nostra democrazia &egrave; un grandissimo dono che ci hanno fatto le generazioni passate: il minimo che possiamo fare, tutti insieme, &egrave; cercare di averne cura.</p>
<p><i style="color: rgb(60, 61, 63); font-family: Arial, Helvetica, sans-serif; font-size: 14px; line-height: 1.2em; text-align: justify; ">Nelle vostre conversazioni online usate l&#39;hashtag</i></p>
<h2 class="title" style="margin-top: 0px; margin-right: 0px; margin-bottom: 0px; margin-left: 0px; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; font-weight: normal; color: rgb(0, 119, 48); font-size: 2.8em; height: 41px; font-family: Arial, Helvetica, sans-serif; text-align: justify; ">
	#opendataitaly</h2>
<div>
	&nbsp;</div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['welcome'] = $box;

  return $export;
}
