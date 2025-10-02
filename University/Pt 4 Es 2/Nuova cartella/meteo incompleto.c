#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 20

typedef struct{
	int temperatura;
	int umidita;
	}meteo;
	
	int main(){
		meteo tempo[M];
		int i;
		int j;
		int t=0, u=0, n, r=0;
		
		while(n<1 || n>M) {
		printf("quanti dati vuoi inserire? : \n");
		scanf("%d" , &n);
		
		for(i=0;i<n;i++){
		
			
		printf("Inserisci la temperatura: \n");
		scanf("%d", &tempo[i].temperatura);
		printf("Inserisci l'umidita': \n");
		scanf("%d", &tempo[i].umidita);
	
	
	t=t+tempo[i].temperatura;
	u=u+tempo[i].umidita;
	r++;
	}
	
	printf("La media delle temperature e': %d\n", t/r);
	
		for(j=n;j>=0;j--){
		printf("\n%d %d",tempo[j].temperatura,tempo[j].umidita);
	}
	}		
	}
