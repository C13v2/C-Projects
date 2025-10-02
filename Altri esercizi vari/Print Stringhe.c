
#include <stdio.h>
#include <stdlib.h>

int PrintString(char mystring[]);

int main()
{

	int i;
	int vett[10];

	/*
	for(i=0; i< 10;i++)
		vett[i]=rand();

	for(i=0; i< 10;i++)
		printf("%d ",vett[i]);
	
	printf("\n");
*/

	char s[]="1234abcd5678";
	char t[100]={'a','b','\0','d','e','\0','f','g','h'};
	printf("%s:  s = %s\n", "esempio", s);

	printf("t = %s\n",t);


	for(i=0; i < 10; i++)
		printf("%c " , t[i]);
	printf("\n");

	PrintString(s);

	PrintString(t);

	printf("input String :\n"),
	scanf("%s", s);

	PrintString(s);


}

int PrintString(char my_string[])
{
	int i;
	printf("------Print String:\n");

	for(i=0; my_string[i]!='\0'; i++)
		printf("%c " , my_string[i]);
	printf("\n");

	for(i=0; my_string[i]!='\0'; i++)
		printf("%d " , my_string[i]);
	printf("\n");


}
