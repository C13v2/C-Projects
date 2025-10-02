#include<stdio.h>

int main(void) {
	
	int l1,l2,l3;

	printf("inserisci tre numeri\n");
	scanf("%d%d%d", l1, l2, l3);
	
    if(l1==l2 && l2==l3) 
        printf("Equilatero");
    else {
        if(l1==l2 || l1==l3 || l2==l3)
            printf("Isoscele");
        else 
            printf("Scaleno");
    }

    return 0;
}