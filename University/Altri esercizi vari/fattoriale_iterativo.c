/****************************************************************************************
* Progettare ed implementare in C un algoritmo che acquisisca un numero 
* intero positivo N da tastiera e stampi il valore del fattoriale di $N$.
*****************************************************************************************/

#include <stdio.h> 

int main(){ 
	int N;
	int fattoriale;

	printf("Inserisci un numero: ");
	scanf("%d", &N);

	if(N < 0)
		printf("Errore: inserire valori non negativi\n");
	else{
		// int fattoriale;
		// for (fattoriale = 1; N > 1; N = N - 1){
		// 	fattoriale *= N;;
		// }
		fattoriale = 1;
		while(N > 1){
			fattoriale *= N;
			N = N - 1;
		}
		printf("Fattoriale: %d\n", fattoriale);
	}
	return 0;
}