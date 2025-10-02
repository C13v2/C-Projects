
//Creare un programma che, legga da input un insieme di stringhe. Il programma, per ogni stringa immessa, stampi 1 se essa continene la sottostringa “ale” al suo interno, 0 altrimenti. Il programma termini quando la stringa immessa è esattamente uguale a “ale”.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100

int main()
{
int ALE, i, j, ctrl, lstr;
char mat[M][M];
char ale [3]={"ale"};
for(i=0; i<M; i++){
printf("Inserisci la stringa %d:\n", i);
scanf("%s", mat[i]);                            //salva la stringa
 ctrl=strcmp (mat[i], ale);                    //confronta la stringa
con "ale"
if(ctrl==0) exit(0);                           //se sono uguali esce
dal programma
 lstr=strlen (mat[i]);                         //verifica la lunghezza
della stringa
 for (j=0; j<lstr; j++){
if(mat[i][j]==ale[0]&&mat[i][j+1]==ale[1]&&mat[i][j+2]==ale[2]) ALE++;
}                                                        //se la stringa contiene "ale" incrementa la variabile ALE
 if(ALE>=1) printf("1\n");                              //se la variabile e` maggiore di zero
stampa 1
else printf("0\n");                                    //altrimenti stampa 0
ALE=0;                                                //azzera la variabile 
}
} 

