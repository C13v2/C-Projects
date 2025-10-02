
// Creare un programma che legga da input un'insieme di stringhe. Il programma, per ogni stringa immessa, stampi il numero di stringhe che iniziano per vocale e il numero di stringhe che iniziano per consonante. Il programma termini l'immissione quando viene letta in ingresso una stringa sentinella.

#include <stdio.h>      //Aa Ee Ii Oo Uu
#define M 100          //65/97 69/101 73/105 79/111 85/117
#include <string.h>

char fine [4]={"fine"};
int i, ctrl, j, dim, vocali=0, consonanti=0, media;
int main()
{
char voc [10]={'A','E','I','O','U','a','e','i','o','u'};
char str[M][M];
puts(fine);
printf("Inserire le stringhe\n");
for(i=0; i<M; i++){
scanf("%s", str[i]);
ctrl=strcmp(str[i], fine);

// printf("%d", ctrl);
if(ctrl==0) {dim=i; i=M; }
}
for(i=0; i<dim; i++){
for(j=0; j<10; j++){
if (str[i][0]==voc[j]) {vocali++;}
}
}
consonanti=dim-vocali;
printf("Sono state inserite %d stringhe\n", dim);
printf("le stringhe con vocale iniziale sono %d\n", vocali);
printf("le stringhe con consonante iniziale sono %d\n", consonanti);
}

