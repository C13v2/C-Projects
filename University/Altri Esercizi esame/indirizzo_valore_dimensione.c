#include <stdio.h>

void main() {
    int m = 300;
    double fx = 300.60;
    char cht = 'z';

    int *ptr1 = &m;
    double *ptr2 = &fx;
    char *ptr3 = &cht;

    printf("Indirizzo delle 6 variabili \n");
    printf("Indirizzo di m = 0x%x\n", &m);
    printf("Indirizzo di fx = 0x%x\n", &fx);
    printf("Indirizzo di cht = 0x%x\n", &cht);
    printf("Indirizzo di ptr1 = 0x%x\n", &ptr1);
    printf("Indirizzo di ptr2 = 0x%x\n", &ptr2);
    printf("Indirizzo di ptr3 = 0x%x\n", &ptr3);
    
    printf("\n");

    printf("Valore delle 6 variabili \n");
    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);
    printf("ptr1 = 0x%x\n", ptr1);
    printf("ptr2 = 0x%x\n", ptr2);
    printf("ptr3 = 0x%x\n", ptr3);

    printf("\n");

    printf("Numero di byte per le 6 variabili \n");
    printf("m = %lu\n", sizeof(m));
    printf("fx = %lu\n", sizeof(fx));
    printf("cht = %lu\n", sizeof(cht));
    printf("ptr1 = %lu\n", sizeof(ptr1));
    printf("ptr2 = %lu\n", sizeof(ptr2));
    printf("ptr3 = %lu\n", sizeof(ptr3));
}
