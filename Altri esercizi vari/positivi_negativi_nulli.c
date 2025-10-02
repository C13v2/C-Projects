/*
 * Progettare ed implementare in C un programma che chiedanvolte (conninserito dall'utente) 
 * di inserireun valore e che conti il numero di valori positivi, negativi o nulli.
 *
 */

#include <stdio.h>
int main(void) {
	int n;
	
	printf("Inserire il valore di n\n");
	scanf("%d", &n);

	int positivi = 0, negativi = 0, nulli = 0;
	int valore, i = 0;
	do{
		printf("Inserire un valore\n");
		scanf("%d", &valore);
		if (valore > 0)
			positivi++;
		else if (valore < 0)
			negativi++;
		else
			nulli++;
		++i;
	} while(i<n);

	printf("Positivi: %d\n", positivi);
	printf("Negativi: %d\n", negativi);
	printf("Nulli: %d\n", nulli);

	return 0; 
}