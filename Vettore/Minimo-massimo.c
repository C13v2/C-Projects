
#include<stdio.h>
#include<stdlib.h>
#define N 4

void funzione(int vettore[], int dim, int *max, int *min);
int main()
{
	int i; 
	int vett[N];
	int *max=0;
	int *min=99999;
	for(i=0; i<N; i++)
	{
		printf("inserisci elemento\n");
		scanf("%d", &vett[i]);
	}		

	

	funzione(vett, N, &max, &min);
	printf("\nmassimo=%d, minimo=%d", max, min);

return 0;
}
	void funzione(int vett[], int dim, int *max, int *min)
{
	int i;
	for(i=0; i<N; i++)
	{
		if(vett[i]>*max)
		{
			*max=vett[i];
		}

		if(vett[i]<*min)
		{
			*min=vett[i];
		}
	 }
	 }
	 
		
