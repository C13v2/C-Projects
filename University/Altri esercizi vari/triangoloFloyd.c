/****************************************************************************************
* Progettare ed implementare in C un algoritmo per la rappresentazione del triangolo di Floyd. 
* Il triangolo di Floyd è un triangolo rettangolo che contiene numeri naturali, 
* definito riempiendo le righe del triangolo con numeri consecutivi e partendo da 1 
* nell'angolo in alto a sinistra.
*****************************************************************************************/

#include <stdio.h> 

int main(void) {
	int numero;
	int riga, colonna;
	int cifra; 
	printf("Inserisci il numero ") ;
	scanf("%d",&numero) ;
	
	if ( numero <=0 )
		printf("Errore, il lato deve essere maggiore di zero\n") ;
	else {
		riga=0;
		cifra=1;
		while ( riga < numero ) {
			colonna = 0;
			while ( colonna <= riga ) {
				printf("%d ", cifra) ;
				colonna = colonna + 1 ;
				cifra=cifra+1;
			}
	        riga = riga + 1; 
	        printf("\n");
	    }
	}
	return 0; 
}