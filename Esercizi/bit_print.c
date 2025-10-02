
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void Print_Bits(int x);

int main()
{
	
	int x = 0;
	int m=0x80000000;
	int y;

	printf("m = %d\n",m);
	Print_Bits( m);
	 x=0xf;
		 Print_Bits( x);
	
	x = x << 28;
		 Print_Bits( x);
		y = m &x;
	y = 0xf;
	y = y << 24;	
		Print_Bits( y);
	
	printf("OR \n");
	x = x |y;
		Print_Bits( x);
		
	y = 0xf;
	y = y << 12;
		Print_Bits( y);
	y = y | (0xf << 8);

		Print_Bits( y);

	printf("Final : \n");
	x = x |y;
	Print_Bits( x);

	m = x;

	printf("input x\n");
	scanf("%d", &x);

	Print_Bits( x);

	printf("and: \n");

	Print_Bits( (x&m) );


	if( (x & m) ==m)
	{
		printf("Verifica OK\n");

	}
else
	{
		printf("Verifica Ko\n");

	}

	return 0;

}

void Print_Bits(int x)
{

	int m  =1;
	int i;

	m = m << (sizeof(int) * CHAR_BIT -1);

	for (i=0; i < sizeof(int) * CHAR_BIT; i++)
	{
		if ( (x&m) ==0)
		{
			printf("0");

		}
		else {
			printf("1");

		}
		if( (i+1)%8 ==0)	printf(" ");
		x = x <<1;
		
	}

	printf("\n");


}
