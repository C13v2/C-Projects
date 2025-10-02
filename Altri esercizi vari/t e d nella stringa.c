
// Creare un programma che, legga da input un insieme di stringhe. Il programma stampi il numero di lettere t e d all’interno della stringa e termini quando la stringa immessa è uguale a "end".

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100 //definisco la dimensione massima della stringa

int flag=1, dim, t=0, d=0, i, e=0;
int main()
{
 char end[3]={"end"}; //vettore di fine
 char str[M]; //stringa da controllare
 while(flag=1){ //ciclo infinito
printf("Inserire una parola per sapere quante t e d contiene\n");
scanf("%s", str); //prende la stringa
dim=strlen(str); //salva la dimensione della stringa
for(i=0; i<dim; i++){ //controlla che non sia la stringa di fine
if(str[i]==end[i]){ e++;}
}
if(e==dim){ printf("fine"); exit(0);}//se stringa=end chiude
else e=0; //azzera la variabile e per il prossimo ciclo
for(i=0; i<dim; i++){
if(str[i]=='t'||str[i]=='T') { //conta il numero di t
t++;}
else if(str[i]=='d'||str[i]=='D'){ //conta il numero di d
 d++;}
else {
continue;}
}
printf("t= %d \n", t); //stampa il numero di t
printf("d= %d \n", d); //stampa il numero di d
t=d=0;
 }
}
