
//Creare un programma che, legga da input un insieme di stringhe. Il programma stampi le stringhe,tutte in senso diretto o inverso in maniera alternata. Il programma termini quando la stringa immessa contienela sottostringa "end". 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100
#define acapo printf("\n"); //definisco acapo per non dover scrivere

tutte le volte il printf
int ciclo=1, z, i, j, dim=0;
int main()
{
char mat [M][M];
printf("Inserire delle stringhe, end fara` fermare l'immissione\n");
for(i=0; i<M; i++){
scanf("%s", mat[i]);
dim=strlen(mat[i]);
for(j=0; j<dim; j++){
if(mat [i][j]=='e'&&mat[i][j+1]=='n'&&mat [i][j+2]=='d'){
z=i+1; i=M; }
}
}
acapo
for(i=0; i<z; i++){
dim=strlen(mat[i]);
if(i%2==0){
for(j=0; j<dim; j++){
printf("%c", mat[i][j]);
 }acapo dim=0; }
else{
for(j=dim; j>=0; j--){
printf("%c", mat[i][j]);
}acapo dim=0; }
}
}
