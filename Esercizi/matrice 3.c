
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
int main()
{
	int mat[N][N];
	int i; 
	int j;
	srand(time(NULL));
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			mat[i][j]=rand()%10+1;
		}
	}

	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("%3d", mat[i][j]);
		}
	printf("\n");
	}
return 0;
}
	
