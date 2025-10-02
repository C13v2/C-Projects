#include<stdio.h>

int main(){

	int n;
	do {
		printf("Quanti valori verranno inseriti?\n");
		scanf("%d", &n);
	} while(n<=0);

	int v[n];
	for (int i=0; i<n; i++) {
		printf("Introduci il valore alla posizione %d: ", i);
		scanf("%d", &v[i]);
	}

	for (int i=0; i<n; i++){
		if (v[i] % 2 == 0)
			printf("%d ", v[i]);
		/* NO ELSE QUI in quanto si vogliono SALTARE i dispari */
	}

	for (int i=n-1; i>=0; i--){
		if (v[i] % 2 == 1)
			printf("%d ", v[i]);
         /* NO ELSE QUI in quanto si vogliono SALTARE i pari */
	}

   return 0;
}