
//Creare un programma che, legga da input un insieme di stringhe. Il programma stampi il numero di lettere doppie all’interno della stringa (e.g. “bb”, “tt”, “aa”) e termini quando la stringa immessa è uguale a "end".

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100

int main()
{
int i, j, sum=0, ctrl, lstr, doppie;
char mat[M][M];
char end [3]={"end"};
for(i=0; i<M; i++){
printf("Inserisci la stringa %d:\n", i);
scanf("%s", mat[i]); //salva la stringa
 ctrl=strcmp (mat[i], end); //confronta la
stringa con "end"
if(ctrl==0) exit(0); //se sono uguali esce
dal programma
 lstr=strlen (mat[i]); //verifica la
lunghezza della stringa
for (j=0; j<lstr; j++){
if(mat[i][j]==mat[i][j+1]) doppie++; //se contiene doppie
incrementa la variabile doppie
 }
printf("Nella stringa sono presenti %d doppie\n",doppie);
doppie=0;
}
} 

