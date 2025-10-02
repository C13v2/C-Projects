
// Creare un programma che legga da input un'insieme di stringhe. Il programma, per ogni stringa letta, stampi il numero totale di stringhe immesse e il numero di stringhe che iniziano con la la lettera maiuscola. Il programma termini l'immissione quando viene letta in ingresso una stringa sentinella.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define size 100

char str[size][size];
char fine[4]={"fine"};
int ctrl;
int i, z, dim, sup, maiusc=0;
int main()
{
 printf("Inserire delle stringhe (fine per terminare
l'immissione)\n");
for(i=0; i<size; i++){
scanf ("%s", str[i]);
dim = strlen(str[i]); //salva la dimensione della stringa
ctrl = strcmp((str[i]), fine); //compara la stringa con "fine"
if(ctrl==0){
z=i; i=size; } //se la stringa immessa e "fine" esce dal programma
}
for(i=0; i<z; i++){
sup=isupper(str[i][0]); //isupper controlla che il carattere sia maiuscolo
if(sup!=0){maiusc++; } //se e` maiuscolo incrementa la variabile
}
printf("Sono state immesse %d stringhe\n", z);
printf("Le stringhe che iniziano con la maiuscola sono\n%d\n", maiusc);
}

