#include<stdio.h>

int main(void){
	
	int palindromo, n_cifre, rigthmost_digit, leftmost_digit, i;
	int divisore_1 = 10;
	int divisore_2;
	int flag = 1;

	printf("Inserire di quante cifre è composto il numero: \n");
	scanf("%d", &n_cifre);

	printf("Inserire il numero:\n");
	scanf("%d", &palindromo);

	while(palindromo!=0){
		
		// Calcolo la potenza di 10
		i = 0;
		divisore_2 = 1; 
		while(i < n_cifre - 1){
			divisore_2 = divisore_2*10;
			i++;
		}
		
		// Prendo le cifre più a destra e sinistra
		rigthmost_digit = palindromo % divisore_1;
		leftmost_digit = palindromo / divisore_2;

		if (rigthmost_digit != leftmost_digit){
			flag = 0;
		}

		palindromo = (palindromo % divisore_2) / divisore_1;
		n_cifre = n_cifre - 2;
	}	

	// Sulla base del valore della variabile flag stampo l'output desiderato
	if(flag)
		printf("Palindromo\n");
	else
		printf("Non palindromo\n");

	return 0;
}