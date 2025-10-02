#include<stdio.h>

int main(void) {
	
	int l1,l2,l3;
	printf("inserisci tre numeri\n");
	scanf("%d%d%d", l1, l2, l3);
	
    if(l1==l2){

        if(l2==l3)
            printf("Equilatero");
        else
            printf("isoscele");
    } else {
        if(l2==l3)
            printf("isoscele");
        else{
            if(l1==l3)
                printf("isoscele");
            else
                printf("scaleno");
        }
    }
    return 0;
}