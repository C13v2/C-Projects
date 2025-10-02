#include<stdio.h>

int main(){

	int n, m;
	printf("Inserire il numero di righe: ");
	scanf("%d", &n);
	printf("Inserire il numero di colonne: ");
	scanf("%d", &m);

	/*Inserire gli elementi della matrice*/
	int matrice[n][m];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			printf("Inserire valore per cella [%d][%d]: ", i,j);
			scanf("%d", &matrice[i][j]);
		}
	}

	int i,j,k;
	for (k = 0; k < n*m; ++k){
		for (i = 0; i < n; ++i){
			// Fissata la riga i-esima, applicare l'agoritmo del bubble sort
			for (j = 0; j < m-1; ++j){
				if(matrice[i][j] > matrice[i][j+1]){
					int tmp = matrice[i][j];
					matrice[i][j] = matrice[i][j+1];
					matrice[i][j+1] = tmp;
				}
			}

			/* 
			 * L'ultimo elemento della riga sarà quello con valore più alto.
			 * Devo controllare se questo valore è più grande di quello che si trova alla prima
			 * cella della riga successiva.
			 * Attenzione a non sforare l'indice delle righe.
			*/ 
			if (i<n-1){
				if(matrice[i][j] > matrice[i+1][0]){
					int tmp = matrice[i+1][0];
					matrice[i+1][0] = matrice[i][j];
					matrice[i][j] = tmp;
				}
			}
		}
	}

	/*Stampa la matrice ordinata*/
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			printf("%d ", matrice[i][j]);
		}
		printf("\n");
	}
	return 0;
}