
/*creare un programma  che allochi dinamicamente un vettore di dpuble. La dimensione del vettore sia immessa da imput. Il vettore venga inizializzato con valori presudo casuali e il programma calcoli il massimo del vettore*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	
	int i;
	int *vett;
	int dim;
	int max=0;
	srand(time(NULL));
	printf("inserisci dimensione\n");
	scanf("%d", &dim);
	vett=malloc(dim*sizeof(int));
	for(i=0; i<dim; i++)
	{
		vett[i]=rand()%10+1;
	}
	
	for(i=0; i<dim; i++)
	{
		printf("%d) numero:%d\n", i+1, vett[i]);
		if(vett[i]>max)
		{	

			max=vett[i];
		}

	}

	printf("il massimo è %d\n", max);
return 0;
}
