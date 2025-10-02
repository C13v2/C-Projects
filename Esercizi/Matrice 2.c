#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int mat[N][N];
	int i,j;
	
	
		/*for(i=0; i<N; i++)
		{
			for(j=0; j<5; j++)
			{
				mat[i][j]=5;
			}
		}*/
	for(i=0; i<N; i++)
		{
			for(j=0; j<N; j++)
			{
				if(i>j)
				{
					mat[i][j]=1;
				}
				else
					mat[i][j]=0;
			
				
			}
		
		}

	for(i=0; i<N; i++)
		{
			for(j=0; j<N; j++)
			{
					printf("%3d",mat[i][j]);	
			}
		printf("\n");
		}
return 0;
}

