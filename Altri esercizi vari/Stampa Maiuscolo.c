
//Creare un programma che, legga da input un insieme di stringhe. Il programma stampi le stringhe tutte in MAIUSCOLO.

#include <stdio.h>
#include <stdlib.h>    //Aa Ee Ii Oo Uu
#define M 100         //65/97 69/101 73/105 79/111 85/117
#include <string.h>

char fine [3]={"end"};
int i, ctrl, j, dim;
int main()
{
char str[M][M];
printf("Inserire le stringhe(fine per uscire)\n");
for(i=0; i<M; i++){
scanf("%s", str[i]); //immissione stringa
dim=strlen(str[i]);
for(j=0; j<dim; j++){
if((str[i][j])==fine [j]){
 if(str[i][j+1]==fine [j+1]&&str[i][j+2]==fine [j+2])
exit(0);
 }
} //controllo "fine"
 puts(".");
for (j=0; j<dim; j++){
if(str[i][j]>90){
str[i][j]=str[i][j]-32;
 }
}puts(str[i]);
}
} 
