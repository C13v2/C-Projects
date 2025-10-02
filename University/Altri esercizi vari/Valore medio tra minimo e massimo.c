
// Creare un programma che implementi una funzione che abbia come input due parametri: un vettore di interi, la sua dimensione. La funzione stampi il valore medio tra il valore minimo e il valore massino del vettore.

#include <stdio.h>

int i, dim, min=999999, max=0, media;
int main()
{
int vett[dim];
printf("Inserire la dimensione del vettore\n");
scanf("%d", &dim);
printf("Inserire gli elementi del vettore\n");
for(i=0; i<dim; i++){
scanf("%d", &vett[i]);
if(vett[i]<=min) {min=vett[i];}
if(vett[i]>=max) {max=vett[i];}
}
media=(min+max)/2;
printf("Il massimo e`:\n%d\n", max);
printf("Il minimo e`:\n%d\n", min);
printf("La media tra il minimo e il massimo e`:\n%d\n", media);
}

