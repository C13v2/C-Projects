/*
 *
        01010101 01010101 01010101 01010101
*
*/

#include <stdio.h>

int main()
{
    int i;
    long long int a=1, m=0, mask=1, x;

    for(i=0; i<16; i++)
    {
        m<<=2; //
        m|=a;
    }
    printf("%lld in binario e':", m);
    for(i=31; i>=0; i--)
    {
        printf("%d", (m&mask<<i) ? 1 : 0);
        if(i%8==0)
            printf(" ");
    }

    do{
        printf("\nInserisci una variabile");
        scanf("%lld", &x);
        printf("Variabile %s", (m^x) ? "errata":"corretta");

    }while((x&m)!=m);

}