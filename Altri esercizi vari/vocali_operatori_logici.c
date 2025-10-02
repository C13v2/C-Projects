#include<stdio.h>

int main(void) {
	
    char c;
    printf("Inserisci un carattere minuscolo\n");
    scanf("%c", &c);

    if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
        printf("Vocale\n");
    else
        printf("Consonante");
    
    return 0;
}