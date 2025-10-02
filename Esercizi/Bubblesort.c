
#include<stdio.h>
#define MAX 7
void bubblesort(long vett[], int dim);

int main()
{
	long vett[MAX];
	int i;
	for(i=0; i<MAX; i++)
	{
		printf("Inserisci elemento del vettore:\n");
		scanf("%ld", &vett[i]);
		printf("\n");
	}
	bubblesort(vett,MAX);

	for(i=0; i<MAX; i++)
	{
		printf("%d)elemento:%ld\tindirizzo:%d\n", i+1,vett[i], &vett[i]);
	}
return 0;
}


void bubblesort(long vett[], int dim)
{
	int i,j,t;
	for(i=dim-1;i>0;i--)
	{
		for(j=0; j<i; j++)
		{
			if(vett[j]>vett[j+1])
			{
				t=vett[j];
				vett[j]=vett[j+1];
				vett[j+1]=t;
			}
		}
	}
}
	
