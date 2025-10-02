#include<stdio.h>

int main(){
	int pippo;
	printf("Inserire un valore:\n");
	scanf("%d", &pippo);
	
	// Versione 1
	printf("Valore successivo: %d\n", pippo + 1);
	printf("Valore precedente: %d\n", pippo - 1);

	// Versione 2
	int successivo = pippo + 1;
	int precedente = pippo - 1;

	printf("Valore successivo: %d\n",successivo);
	printf("Valore precedente: %d\n",precedente);

	return 0;
}