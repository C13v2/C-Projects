#include<stdio.h>

int main(void){
	int n,i,sum = 0;

	printf("Inserisci un valore: \n");
	scanf("%d", &n);

	if(n >= 0){
		i = n;
		while (i <= 2*n){
			sum = sum + i;
			i++;
		}
	}else{
		i = 2*n;
		while (i <= n){
			sum = sum + i;
			i++;
		}
	}

	printf("La somma è: %d\n", sum);

	return 0;
}