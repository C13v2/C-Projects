#include<stdio.h>
#include<stdlib.h>
#include<time.h>


long max(long *vettore, int dim);
int main()
{

	long *vettore;
	int dim;
	int i;
	int c;
	srand(time(NULL));
	
	printf("inserisci dimensione vettore:");
	scanf("%d", &dim);
	
	vettore=malloc(dim*sizeof(long));
	
	for(i=0; i<dim; i++)
	{
		c=rand()%10+1;
		vettore[i]=c;
	}

	for(i=0; i<dim; i++)
	{
		printf("indirizzo:%d\tnumero:%d\n", &vettore[i], vettore[i]);
	}

	printf("l'elemento maxsimo del vettore è %ld", max(vettore,dim));
	
}


long max(long *vettore, int dim)
{
	int m=0;
	int i;
	for(i=0;i<dim; i++)
	{
		if(vettore[i]>m)
		{
			m=vettore[i];
		}
	}
return m;
}
