#include <stdio.h>
#include <stdlib.h> 

int main() { 

	int n, m;

	/*Input delle righe*/
	do{
		printf("Inserire il numero di righe (>0): ");
		scanf("%d", &n);
	}while(n<=0);

	/*Input delle colonne*/
	do{
		printf("Inserire il numero di colonne (>0): ");
		scanf("%d", &m);
	}while(m<=0);

	/*Alloco matrice che contiene i valori dell'utente*/
	int **matrice = (int **) malloc(n * sizeof(int *));
	for (int i=0; i<n; ++i){
		*(matrice+i) = (int *) malloc(m * sizeof(int));
	}

	/*Alloco matrice che conterrà i valori finali*/
	int **risultato = (int **) malloc(n * sizeof(int *));
	for (int i=0; i<n; ++i){
		*(risultato+i) = (int *) malloc(m * sizeof(int));
	}

	/*Riempimento valori della matrice*/
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			printf("Inserire valore posizione [%d][%d]: ", i, j);
			scanf("%d", &(*(*(matrice + i) + j)));
		}
		printf("\n");
	}

	/*Stampa della matrice iniziale*/
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			printf("%d ", *(*(matrice + i) + j));
		}
		printf("\n");
	}

	/*Elaborazione pixel*/
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){	
			/*Gestione dei indici per non sforare la matrice*/
			int start_i, end_i, start_j, end_j;
			
			start_i = i - 1;
			end_i = i + 1;
			start_j = j - 1;
			end_j = j + 1;
			
			if(i==0)
				start_i = i;
			if(i==n-1)
				end_i = i;
			if(j==0)
				start_j = j;
			if(j==m-1)
				end_j = j;

			int k, q;
			int somma = -matrice[i][j];
			int nElementi = -1;
			for (int k=start_i; k<=end_i; ++k){
				for (int q=start_j; q<=end_j; ++q){
					somma += *(*(matrice + k) + q);
					++nElementi;
				}
			}

			double media = (double) somma / nElementi;
			double differeza = media - *(*(matrice + i) + j);
			if (differeza < 0)
				differeza = -differeza;

			// printf("(i, j) = (%d, %d)\n", i, j);
			// printf("(s_i, e_i, s_j, e_j) = (%d, %d, %d, %d)\n", start_i, end_i, start_j, end_j);
			// printf("Somma = %d\n", somma);
			// printf("Elementi = %d\n", nElementi);
			// printf("Media = %lf\n", media);
			// printf("Differenza = %lf\n", differeza);

			if(differeza >= 2){
				*(*(risultato + i) + j) = 1;
			} else {
				*(*(risultato + i) + j) = 0;
			}
			// printf("\n\n");
		}
	}

	/*Stampa della matrice finale*/
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j){
			printf("%d ", *(*(risultato + i) + j));
		}
		printf("\n");
	}

	/*Deallocazione della memoria*/
	for (int i=0; i<n; ++i){
		free(*(matrice+i));
	}
	free(matrice);

	/*Deallocazione della memoria*/
	for (int i=0; i<n; ++i){
		free(*(risultato+i));
	}
	free(risultato);

	return 0; 
}
