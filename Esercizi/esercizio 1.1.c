#include<stdio.h>   //01101000
int main()
{
	int i;
	long long int a=8, m=6, mask=1, x;
	
	m<<=4; m|=a;
	for(i=1; i<=2; i++){
		a=m;
		m<<=(i*8); m|=a;
	}
	
	printf("%lld in binario e' uguale a: ");
	
	for(i=31; i>=0; i--)
	printf("%d", (m&mask<<i) ? 1 : 0);
	
	do
	{
		printf("\nInserire la variabile da verificare ");
		scanf("%lld", &x);
		
		if((m&x)==m)
		printf("\nLa variabile inserita e' uguale a quella salvata ");
		
		else
		printf("\nLa variabile inserita e' diversa da quella salvata ");
	}while((x&m)!=m);
}
