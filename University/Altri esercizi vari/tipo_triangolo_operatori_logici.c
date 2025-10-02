#include<stdio.h>

int main(void) {
	
	int l1,l2,l3;

	printf("inserisci tre numeri\n");
	scanf("%d%d%d", l1, l2, l3);
	
    if(l1==l2 && l2==l3)    
        printf("equilatero");

    if((l1==l2 && l2!=l3)||(l2==l3 && l3!=l1)||(l1==l3 && l2!=l3))
        printf("isoscele");
    
    if( l1!=l2 && l2!=l3 && l1!=l3)
        printf("scaleno");
    return 0;
}