#include<stdio.h>

int main() {

	int n;
	do {
		printf("Quanti valori verranno inseriti?\n");
		scanf("%d", &n);
	}while(n<=0);

	int A[n], B[n];

	for (int i=0; i<n; i++) {
		printf("Introduci il valore di A alla posizione %d: ", i);
		scanf("%d", &A[i]);
	}

	printf("\n");

	for (int i=0; i<n; i++) {
		printf("Introduci il valore di B alla posizione %d: ", i);
		scanf("%d", &B[i]);
	}

	int C[n];
	for (int i=0; i<n; i++) {
		C[i] = A[i] + B[i];
	}

	for (int i=1; i<n; i+=2)
		printf("%d ", C[i]);

	for (int i=0; i<n; i+=2)
		printf("%d ", C[i]);

	printf("\n");

	return 0;
}