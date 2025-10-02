#include<stdio.h>
#include<stdlib.h>
void swap(int *v1, int *v2)
{
int t=*v1;
*v1=*v2;
*v2=t;
}
int main(void){
	int a= 10;
	int b= 20;
	printf("a=%d", a);
	printf("b=%d", b);
	swap(&a,&b);
	printf("a=%d", a);
	printf("b=%d", b);
	
	return 0;
}
