
#include<stdio.h>
#include<stdlib.h>
void funz(int vett[], int dim, int *max, float *average);
int main()
{

	int *vett;
	int dim;
	int max;

	int i;
	float average;
	printf("inserisci dimensione\n");
	scanf("%d", &dim);
	vett=malloc(dim*sizeof(int));
	printf("inserisci elementi del vettore");
	for(i=0; i<dim; i++)
	{
		scanf("%d", &vett[i]);
	}
	printf("il vettore è:\n");
	for(i=0; i<dim; i++)
	{
		printf("%d-", vett[i]);
	}

	funz(vett, dim, &max, &average);
	printf("il valore massimo è %d\nla media tra i valori è %f\n", max, average);

return 0;

}
void funz(int vett[], int dim, int *max, float *average)
	{
		int i; 
		float sum=0;
		*max=0;
		for(i=0; i<dim; i++)
		{
			sum=sum+vett[i];
			if(vett[i]>*max)
			{
				*max=vett[i];
			}
		}

		*average=sum/dim;
	}
		
		
