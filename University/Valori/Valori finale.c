#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int i, dim=50,tmp; //10 crescente , 50 decrescente , 8 pseudo(senza tmp)
	// double pseudocasuali, float crescenti o decrescenti 
	
float v[dim];
float *pv =&v[0];
srand (time (NULL));

for (i=0, tmp=1000; i<dim; i++, tmp=100) //-=100 se decrescente 
{
	*(pv+1)=(rand()%100+tmp)/1.1; //%13 se pseudocasuale
}
{
	for (i=0,i<dim;i++);
	printf (" d)%3f\t%p" , i+1, *(pv+1),(pv+1));	//lt decrescenti, 3lf pseudocasuali
}
}

