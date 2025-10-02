

#include <stdio.h>
#include <stdlib.h>
void funzione(unsigned int x);
void confronto(unsigned int x,unsigned int y);

main()
{
	system("color 0a");
	int x;
	for(x=1;x<=255;x++)
	{
		printf("%d = ",x);
		funzione(x);
		puts("");
	}
	
unsigned int i=198;
unsigned int ii=165;
unsigned int mask1=195;
unsigned int mask2=60;
puts("");
printf("i & mask = "); confronto(i,mask1);confronto(i,mask1);confronto(i,mask2);confronto(i,mask2);puts("");
printf("ii & mask = "); confronto(ii,mask1);confronto(ii,mask1);confronto(ii,mask2);confronto(ii,mask2); puts("");
}

void funzione(unsigned int x)
{
	unsigned int bit=1<<7;
	unsigned int i;
	for(i=1;i<=8;i++)
	{
		printf(x & bit ? "1" : "0");
		x=x<<1;
	}
}

void confronto(unsigned int x,unsigned int y)
{
	unsigned int z=1<<7;
	unsigned int i;
	for(i=1;i<=8;i++)
	{
		printf(z & x & y ? "1" : "0");
		x=x<<1;
		y=y<<1;
	}
	printf(" ");
}
