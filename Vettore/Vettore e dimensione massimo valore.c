
// Creare un programma che implementi una funzione che abbia come input due parametri : un vettore di interi, la sua dimensione. La funzione restituisca il massimo valore.


 #include <stdio.h>
int dim, i, max; //inizializzazione variabili
int main()
{
int vett[dim]; //inizializzazione vettore
printf("Inserire la dimensione del vettore\n");
scanf("%d", &dim); //inserimento dimensione del vettore
printf("Inserire gli elementi del vettore\n");
for(i=0; i<=dim-1; i++)
{
scanf("%d", &vett[i]); //inserimento elementi del vettore
}
max=vett[0];
for (i=0; i<dim; i++) {
if (max<vett[i]) //controllo dimensione valori
{
max=vett[i]; }
}
printf("%d\n", max);
}
