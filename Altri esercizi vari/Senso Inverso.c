
// Creare un programma che, legga da input un insieme di stringhe. Il programma stampi la stringa immessa in senso inverso e termini quando la stringa immessa è uguale a “end”.

#include <stdio.h>
#include <stdlib.h>     //Aa Ee Ii Oo Uu
#define M 100          //65/97 69/101 73/105 79/111 85/117
#include <string.h>

char fine [4]={"fine"};
int i, ctrl, j, dim, vocali=0, consonanti=0, media;
int main()
{
char str[M][M];
printf("Inserire le stringhe(fine per uscire)\n");
for(i=0; i<M; i++){
scanf("%s", str[i]);
ctrl=strcmp(str[i], fine);
if(ctrl==0) {exit(0);}
for (j=strlen(str[i])+1; j>=0; j--){
 printf("%c", str[i][j]);
}
puts("");
}
} 

