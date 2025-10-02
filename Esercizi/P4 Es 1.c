/*
 * 10111011 11111011 11111011 10111011
 *
 *
 */
#include <stdio.h>

int main()
{
    long long int a=11, b=15, m, mask=1, x;
    int i;

    m=a; m<<=4; m|=a;
    m<<=4; m|=b;
    m<<=4; m|=a;
    m<<=4; m|=b;
    m<<=4; m|=a;
    m<<=4; m|=a;
    m<<=4; m|=a;

    printf("%lld in binario e'\n", m);
    for(i=31;i>=0; i--)
    {
        printf("%d", (m&mask<<i) ? 1 : 0);
        if(i%8==0)
            printf(" ");
    }

    do{
        printf("\nInserisci una variabile da verificare:");
        scanf("%lld", &x);
        printf("\nLa variabile %s uguale a quella salvata", (m^x)? "non e'":"e'");

    }while((x&m)!=m);
}