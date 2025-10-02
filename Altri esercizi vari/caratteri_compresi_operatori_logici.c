#include<stdio.h>

int main(void) {
	
    char a, b, c;
    printf("Inserisci tre caratteri\n");
    scanf("%c%c%c", &a, &b, &c);

    if((b<=a && b>=c)|| (b>=a && b<=c ))
        printf("Compreso");
    else
        printf("Non compreso");
    
    return 0;
}