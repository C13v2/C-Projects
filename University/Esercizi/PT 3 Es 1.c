#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	float *vett;
	int dim;
	printf("Inserisci la dimensione dell'array \n");
	scanf("%d", &dim);
	
	
	vett=malloc(dim*sizeof(float));
	
	srand(time(NULL));
	
	vett[0]=rand(); //inizializza il primo elemento del vettore ad un numero casuale
	
	for (int i=1;i<dim;i++)
	{
		
		vett[i]=rand();

		while (vett[i] > vett[i-1])	
		{
			vett[i]=rand();
		}
			
	}
	
	printf("\n");
	for (int i=0;i<dim;i++){
		printf("Valore primo elemento: %f posizione: %x\n",vett[i], &vett[i]);
		
	}
	
}
