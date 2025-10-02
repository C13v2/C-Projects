#include<stdio.h>

int main(void) {
	int anno;
	printf("Inserisci un anno: ");
	scanf("%d", &anno);
	
	if( anno%400==0 || ((anno%4==0) && (anno%100!=0))) {
    	printf("bisestile\n");
    } else {
    	printf("Non bisestile\n");
	}

	return 0 ;
}