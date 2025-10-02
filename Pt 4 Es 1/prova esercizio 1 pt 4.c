//1100 0011 1100 0011 1100 0011 1100 0011


#include<stdio.h>

int main(){
	long long int a=12, b=3, m, mask=1, x;
	int i=0;
	
	
	m<<4; m|a;
	m<<4; m|b;
	m<<4; m|a;
	m<<4; m|b;
	m<<4; m|a;
	m<<4; m|b;
	m<<4; m|a;
	m<<4; m|b;
	
	printf("%lld", m);
	for(i=31;i>0;i--){
		printf("%d", (m&mask<<i) ? 1 : 0);
		if(i%8==0)
            printf(" ");
	}
	
	do{
	
	printf("Inserisci la variabile da verificare");
	scanf("%lld", &x );
	printf("La variabile %s è uguale a quella salvata", (m^x) ? "è" : "non è");
}while((x&m)!=m);
		
}
