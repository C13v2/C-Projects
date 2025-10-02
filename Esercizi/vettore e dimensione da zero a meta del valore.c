
//Creare un programma che implementi una funzione che abbia come input due parametri: un vettore di interi, la sua dimensione. La funzione stampigli elementi del vettore che hanno indice da zero al valore pari a metà della dimensione.

#include <stdio.h>

int dim, i, f;
int main()
{
printf("Inserire la dimensione del vettore: ");
scanf("%d", &dim);
int vett [dim];
printf("Inserire gli elementi del vettore: \n");
for(i=0; i<dim; i++){
 scanf("%d", &vett[i]); //salva gli elementi nel vettore
}
for(i=0; i<dim/2; i++){
printf("%d\n", vett[i]); //stampa gli elementi del vettore
}
}

