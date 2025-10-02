
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int *vett;
	int i;	
	int dim;
	srand(time(NULL));
	printf("inserisci dimensione\n");
	scanf("%d", &dim);
	vett=malloc(dim*sizeof(int));
	
	int s=0;
	int x;
	for(i=0; i<dim; i++)
	{
		x=rand()%10+1;
		vett[i]=x;
		s=s+vett[i];
	}
	printf("la somma è %d\n", s);
return 0;
}
	
