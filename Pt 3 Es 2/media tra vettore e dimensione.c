// Creare un programma che implementi una funzione che abbia come input due parametri: un vettore di interi, la sua dimensione. La funzione stampi la media del vettore.

#include <stdio.h>
int main()
{
int dim, i;
float sum=0;
int vet[dim];
printf("Inserire la dimsione del vettore desiderato");
scanf("%d", &dim);
for(i=0; i<dim; i++){
printf("Inserire l'elemento %d del vettore", i);
scanf("%d", &vet[i]);
}
for(i=0; i<dim; i++){
 sum=sum+(vet[i]);
}
printf("La media del vettore e`%f", sum/dim);
}

