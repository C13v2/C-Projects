#include<stdio.h>

int main(){
	
	int n;
	do {
		printf("Quanti valori verranno inseriti?\n");
		scanf("%d", &n);
	}while(n<=0);

	int v[n];
	for (int i=0; i<n; i++) {
		printf("Introduci il valore alla posizione %d: ", i);
		scanf("%d", &v[i]);
	}

	for (int i=n-1; i>=0; --i){
		printf("%d ", v[i]);
	}

	printf("\n");

	return 0;
}