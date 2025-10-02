
//Creare un programma  in linguaggio che definisca un vettore di 32 elementi di tipo long. IL programmma inizializzzi Il programma inizializzi il vettore con valoro crescenti e stampi. tramite puntatore , il contenuto degle ilementi del vettore e l'indirizzo relativo


#include<stdio.h>
#define N 32
int main()
{

	long *vett;
	int i=0;
	long a;
	scanf("%ld", &a);

	while(i<N)
	{
		vett[i]=a;
		a=a+1;
		i++;
	}

	for(i=0; i<N; i++)
	{
	printf("%d)numero:%ld\tindirizzo:%p\n", i+1,vett[i], &vett[i]);
	}
return 0;
} 
