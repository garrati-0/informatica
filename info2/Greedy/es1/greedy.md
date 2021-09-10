COSA SONO GLI ALGORITMI GREEDY?

sono una famiglia di algoritmi che differiscono 
da quelli di back tracking in quanto lo scopo non
è esplorare tutto lo spazio delle soluzioni o 
trovare la soluzione ottima ma hanno l'obiettivo 
di che si avvicina al ottima che potrebbe essere
quella ottima ma non è detto che lo sia.

COME FUNZIONANO?

questi algoritmi ad ogni step scelgono un pezzo 
della soluzione scegliendo quella cheal momento
corrente è la scelta più golosa più apetibile;
quindi per implementare un algoritmo greedy 
dobbiamo capire quall' è la funzione di costo,
qual'è la funzione di appetibilità fare la 
scelta e passare alla scelta successiva,
la scelta che in un certo momento e quella più 
apetibile, quella migliore, non è detto che 
sia poi quella che ci porterà all' ottimo 
però è l unica(quella migliore senza provarle 
tutte) scelta che possiamo fare in questo momento.
Ci sono due famiglie principali di algoritmi 
greedy:

-la funzone di costo,il valore di appetibilità
è costante, quindi non cambia dopo aver affetuato
una scelta;

-la funzione di costo, il valore di appetibilittà
deve essere aggiornato dopo ogni scelta;

nel primo caso possiamo scorrere tutti gli elementi
valutare l' appetibilità di ogni elemento e scegliere
quello più apetibile oppure possiamo ordinare gli elementi
in funzione al valore di appetibilità e quindi sceglierli
se possiamo a partire dal primo.
nel caso in cui il valore di appetibilità cambi con  le sclete
l opzione di ornire non è un oppzione valida.
