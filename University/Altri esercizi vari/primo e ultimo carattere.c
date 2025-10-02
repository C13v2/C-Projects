
//Creare un programma che legga da input un'insieme di stringhe. Il programma, per ogni stringa immessa, stampi il numero, il primo e l'ultimo carattere. Il programma termini l'immissione quando viene letta in ingresso una stringa sentinella.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100

int len, i;
char fine[4]={"fine"};
int main()
{
char str[M][M];
printf("Inserire delle stringhe:\n");
for(i=0; i<M; i++){
scanf("%s", str[i]);
if((strcmp(fine, str[i]))==0) exit(0);
len=strlen(str[i]);
 printf("Stringa numero %d\nPrimo carattere %c\nUltimo carattere
%c\n", i, str[i][0], str[i][len-1]);
}
}

