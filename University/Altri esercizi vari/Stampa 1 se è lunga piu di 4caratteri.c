

// Creare un programma che, legga da input un insieme di stringhe. Il programma, per ogni stringa immessa, stampi 1 se la stringa è più lunga di 4 caratteri, 0 altrimenti. Il programma termini l’immissione quando viene letta in ingresso una stringa sentinella.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100

int main()
{
 int i, sum=0, ctrl, lstr;
 char mat[M][M];
 char fine [4]={"fine"};
 for(i=0; i<M; i++){
 printf("Inserisci la stringa %d:\n", i);
 scanf("%s", mat[i]); //salva la stringa
 ctrl=strcmp (mat[i], fine); //paragona la stringa a "fine"
 if(ctrl==0) exit(0); //se sono uguali esce dal
programma
 lstr=strlen (mat[i]); //verifica la lunghezza della
stringa
 if (lstr>4) printf("1\n"); //se e` piu` lunga di 4 lettere
stampa 1
 else printf("0\n"); //altrimenti stampa 0
 }
}

