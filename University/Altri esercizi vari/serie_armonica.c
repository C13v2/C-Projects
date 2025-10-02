/*
 * seriearmonica.c
 *
 * Scrivere un programma che, richiesto all'utente un numero intero m,
 * calcoli e visualizzi la somma dei primi m elementi della serie armonica.
 *
 */

#include <stdio.h>
int main(void) {
	
	int m;
	printf("Numero m di termini della somma: ");
	scanf("%d", &m);

	double somma = 0.0;	
	int k = 1;   /* Variabile contatore del ciclo */	
	while (k <= m) {
		// printf("(1/%d) = %d \n", k, 1/k);
		somma += 1/((float) k);
		k++;
	}
	printf("Somma della serie armonica arrestata al %d^ elemento: %9.4lf\n", m, somma);
	return 0; 
}