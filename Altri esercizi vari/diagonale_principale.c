#include <stdio.h>

int main() {

	int n;
	do {
		printf("Numero di righe?\n");
		scanf("%d", &n);
	}while(n<=0);

	int m;
	do {
		printf("Numero di colonne?\n");
		scanf("%d", &m);
	}while(m<=0);

	int matrice[n][m];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			printf("Inserire il valore nella cella matrice[%d][%d]: ", i,j);
			scanf("%d", &matrice[i][j]);
		}
	}

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			if (i == j){
				printf("%d ", matrice[i][j]);
			}
		}
	}

	printf("\n");

	return 0;
}