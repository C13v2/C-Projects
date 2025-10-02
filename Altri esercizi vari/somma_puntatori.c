#include <stdio.h> 

int main() { 

	int intero1, intero2;

	printf("Inserire il valore del primo intero: ");
	scanf("%d", &intero1);

	printf("Inserire il valore del secondo intero: ");
	scanf("%d", &intero2);

	int *ptr1 = &intero1;
	int *ptr2 = &intero2;

	printf("%d + %d = %d\n", *ptr1, *ptr2, *ptr1+*ptr2);

	return 0; 
}
