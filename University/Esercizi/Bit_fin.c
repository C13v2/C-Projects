
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void print(int x);
int main()
{

	int x=0;
	int m=0x80000000;
	int y;
	print(m);
	

	x=0xf;
	x=x<<28;
	y=0x3;
	y=y<<24;
	x=x|y;
	print(x);

	y=0xf;
	y=y<<20;
	y=y|(0x3<<16);
	x=x|y;
	print(x);

	y=0xf;
	y=y<<12;
	y= y|(0x3 << 8);
	x=x|y;
	print(x);
	
	y=0xf;
	y=y<<12;
	y= y|(0xf << 4);
	x=x|y;
	print(x);
	
	
	y=0x3;
	x=x|y;
	print(x);

	m=x;
	printf("Input x:");
	scanf("%d", &x);
	print(x);
	print((x&m));
	
	if((x&m)==m)
	{
		printf("la verifica è ok");
	}
	else
	{
		printf("la verifica è ko");
	}
	return 0;
	
	
	
	
	

}

void print(int x)
{
int m=1;
int i;
m=m<<(sizeof(int)*CHAR_BIT -1);
for(i=0; i<sizeof(int)*CHAR_BIT; i++)
{
	if((x&m)==0)
	{
		printf("0");
	}
	else
	{
		printf("1");
	}
	if((i+1)%8==0)
	{
		printf(" ");
	}

	x=x<<1;
	}

printf("\n");
}


	
		

