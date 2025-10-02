#include <stdio.h>
#include <stdlib.h>
#define r 5
#define c 6

main()
{
	system("color 0a");
	int i,j;
	int matrix[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i>j)
			{
				matrix[i][j]=i-j;
			}
			if (i<j)
			{
				matrix[i][j]=j-1;
			}
			if(i==j)
			{
				matrix[i][j]=0;
			}
			printf("%d ",matrix[i][j]);
		}
		puts("");
	}


puts("\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		if(i==j)
		{
			matrix[i][j]=0;
		}
		if(i>j)
		{
			matrix[i][j]=1;
		}
		if(i<j)
		{
			matrix[i][j]=j-1;
		}
	printf("%d ",matrix[i][j]);
	}
puts("");
}
}

