#include<stdio.h>

int main(void) {
	
    char c;
    printf("Inserisci un carattere minuscolo\n");
    scanf("%c", &c);

    // Versione 1
    switch(c){
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Vocale\n");
            break;
        default:
            printf("Consonante\n");
    }

    // Versione 2
    switch(c){
        case 'a': 
            printf("Vocale\n");
            break;
        case 'e':
            printf("Vocale\n");
            break; 
        case 'i': 
            printf("Vocale\n");
            break;
        case 'o': 
            printf("Vocale\n");
            break;
        case 'u':
            printf("Vocale\n");
            break;
        default:
            printf("Consonante\n");
    }
    
    return 0;
}