#include <stdio.h> 
#include <stdlib.h>

int main() { 

	int n;
	printf("Quanti valori?\n");
	scanf("%d", &n);

	/*Allocazione memoria con calloc o malloc*/
	int *array = (int *) calloc(n, sizeof(int));
	
	for (int i=0; i<n; ++i){
		printf("array[%d] = ", i);
		scanf("%d", array+i);
	}

	int max = *array;
	for (int i=1; i<n; ++i){
		if(*(array+i) > max){
			max = *(array+i);
		}
	}

	printf("max = %d\n", max);
	
	free(array);
	return 0; 
}
