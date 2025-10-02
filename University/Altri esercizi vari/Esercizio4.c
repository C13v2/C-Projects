#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

main()
{
	int k;
	printf("seleziona 'n': ");
	scanf("%d",&k);
	double sum=0.0;
	double argomento;
	
	int i;
	
	for(i=1;i<=k;i++)
	{
		argomento=pow(1/k,2);
		sum=sum+argomento;
	}
	puts("");
	printf("somma delle %d successioni: %lf",k,sum);
	puts(""); printf("successione<%d>= %lf",k,argomento);
	
	//errore relativo;
	
	double pi_reale=(pow(PI,2))/6;
	int pi_arrotondato=(pow(PI,2))/6;
	double err_ass=pi_reale-pi_arrotondato;
	double err_rel= err_ass/pi_reale;
	
	printf("\n\nerr_rel= %lf",err_rel);
}
