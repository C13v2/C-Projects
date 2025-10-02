
/*Creare un programma che stampi la lunghezza di una stringa tramite il puntatore alla prima cella della stringa
*/

#include<stdio.h>
#define N 30
int main()
{
	char s[N];
	int *p;
	int i=0;
	printf("inserisci stringa\n");
	scanf("%s", s);
	while(s[i]!='\0')
	{
		i++;
	}

	printf("%d", i);
}
	
