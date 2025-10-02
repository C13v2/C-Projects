#include <stdio.h>
#define size 14

int main(){
	int numero,i;

	printf("Inserisci un numero: ");
	scanf("%d",&numero);
	
	int binario[size];        
	for(i=0; numero>0; i++)    
	{    
		binario[i]=numero%2;    
		numero= numero/2;  
	}  

	int binario_invertito[size];
	int cont=0;
	printf("\nBinario invertito: ");
	for (i=i-1;i>=0;i--){
		binario_invertito[cont]=binario[i];
		printf("%d",binario_invertito[cont]);
		cont++;
	}
	
	if(binario_invertito[7]==1 && binario_invertito[10]==1 && binario_invertito[14]==1){
		printf("\nI bit sono pari a uno in posizione 7, 10 e in posizione 14");
	}

}
