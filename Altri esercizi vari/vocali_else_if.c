#include<stdio.h>

int main(void) {
	
    char c;
    printf("Inserisci un carattere minuscolo\n");
    scanf("%c", &c);

    if(c=='a')
        printf("Vocale\n");
    else if (c=='e')
    	printf("Vocale\n");
    else if (c=='i')
    	printf("Vocale\n");
	else if (c=='o')
		printf("Vocale\n");
    else if (c=='u')
    	printf("Vocale\n");
    else
        printf("Consonante");
    
    return 0;
}