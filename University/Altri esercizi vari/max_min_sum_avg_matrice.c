#include<stdio.h>

int main() {

	int n,m;

	do {
		printf("Inserire il valore di n\n");
		scanf("%d", &n);
	} while(n<=0);

	do {
		printf("Inserire il valore di m\n");
		scanf("%d", &m);
	} while(m<=0);

	int matrice[n][m];
	for (int i=0; i<n; ++i){
		for (int j=0; j<m; ++j) {
			printf("Introduci il valore per matrice[%d][%d]: ", i, j);
			scanf("%d", &matrice[i][j]);
		}
	}
	
	int max = matrice[0][0]; /* il primo come max */
	int min = matrice[0][0]; /* il primo come min */
	int somma = 0;

	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++){
			int cella = matrice[i][j];
			somma += cella;
			if (cella > max)
				max = cella;
			else if (cella < min)
				min = cella;
      }

      printf("Massimo: %d\n", max);
      printf("Minimo: %d\n", min);
      printf("Somma: %d\n", somma);
      printf("Media: %f\n", (double)somma/(n*m));

   return 0;
}