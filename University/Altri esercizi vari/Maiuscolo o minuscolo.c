
// Creare un programma che, legga da input un insieme di stringhe. Il programma stampi le stringhe tutte in MAIUSCOLO o minuscolo in maniera alternata. Termini quando la stringa immessa è uguale a "end".

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100

int i, j, z;
float len=0;
char fine[3]={"end"};
int main() 
{
char str[M][M];
printf("Inserire delle stringhe(end per finire):\n");
for(i=0; i<M; i++){
scanf("%s", str[i]);
if((strcmp(fine, str[i]))==0){
z=i; i=M;
}
 }
printf("\n\n");
for(i=0; i<z; i++){
if(i%2==0){
for(j=0; j<strlen(str[i]); j++){
if(str[i][j]>96) printf("%c", str[i][j]-32); //si puo`
utilizzare anche isupper invece dell'ascii
else printf("%c", str[i][j]);
}printf("\n");
}
else{
for(j=0; j<strlen(str[i]); j++){
if(str[i][j]<90) printf("%c", str[i][j]+32);
else printf("%c", str[i][j]);
}printf("\n");
}
}
}
