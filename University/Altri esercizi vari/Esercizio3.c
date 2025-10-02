#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

main()
{
	char s1[SIZE];
	char s2[]="PaSsWoRd";
	int i=0;
	int x=0;
	
	while(s2[i]!='\0')
	{
		s2[i]=toupper(s2[i]);
		i++;
	}
	
	do
	{i=0;
		scanf("%s",s1);
		
		while(s1[i]!='\0')
		{
			s1[i]=toupper(s1[i]);
			i++;
		}
	if(strcmp(s1,s2)==0)
	{
		printf("password corretta");
		x=3;
	}
	else
	{
		printf("Password errata. Tentativi restanti: %d",2-x);
		x++;
	}
	}while(x<3);
}
