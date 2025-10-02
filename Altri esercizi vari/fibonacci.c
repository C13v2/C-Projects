/*
 * Calcola la successione di Fibonacci
 * */
#include<stdio.h> 

int main(){

	int N; 
	printf("Inserisci un numero: ");
	scanf("%d",&N);

	int i = 0, fib = 0, fib1 = 1, fib2 = 1; 
	while (i < N){
		if(i==0 || i==1) 
			printf("1 ");
		else{
			fib=fib1+fib2;
			printf("%d ", fib);
			fib2=fib1;
			fib1=fib;
		}
		++i;
	}
	return 0;
}