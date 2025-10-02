
//  Creare un programma che implementi una funzione che abbia come input due parametri: un vettore di interi, la sua dimensione. La funzione restituisca la media del vettore.

#include <stdio.h>

int main()
{
int i, dim, vett[dim], sum=0;
printf("Inserisci la dimensione del vettore:\n");
scanf("%d", &dim);                 //salva la dimensione del vettore
 for(i=0; i<dim; i++){            //parte un ciclo lungo quanto la lunghezza
della stringa
printf("Inserisci l'elemento %d del vettore:\n", i);
 scanf("%d", &vett[i]);          //fa inserire il valore del vettore
sum=sum+vett[i];                //incrementa la somma aggiungendo il nuovo
elemento
}
 printf("La media del vettore e`: %d\n", (sum/dim)); stampa la media
del vettore
}

