
/*creare un programma che definisca un vettore di 32 elementi di tipo long. Il programma inizializzi il vettore con valori crescenti e stampi tramite puntatore, il contenuto degli elementi del vettore e l'indirizzo relativo*/


#include<stdio.h>
#include<stdlib.h>
#define N 32
int main()
{
	int *vett;

	int i=0;
	int a;

	printf("inserisci numero\n");
	scanf("%d", &a);
	while(i<N)
	{
		vett[i]=a;
		a=a+1;
		i++;
	}

	for(i=0; i<N; i++)
	{
		printf("%d\t%p\n", vett[i],vett[i]);
	
	}
		}
