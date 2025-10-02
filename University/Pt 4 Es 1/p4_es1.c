/*
Creare un programma in linguaggio C che, assegni ad una variabile intera m, i bit secondo la
seguente configurazione:

00110011 00110011 00110011 00110011

A tal fine si effettuino assegnazioni con valori inferiori a 32. Si verifichi che una variabile intera x,
immessa da input, abbia bit pari a 1 in corrispondenza dei bit 1 della variabile m.
 */

#include <stdio.h>
int main()
{
    int i;
    long long int a=3, m, mask=1, x;

    m=0;
    for(i=0; i<8; i++)
    {
        m<<=4; m|=a;
    }
    printf("%d in binario e' uguale a\n", m);
    for(i=31; i>=0; i--)
        printf("%d", (m&mask<<i) ? 1 : 0);

    do
    {
        printf("\nInserire una variabile da verificare:");
        scanf("%d", &x);
        if((m&x)==m)
            printf("\nLa variabile inserita e' uguale a quella salvata");
        else
            printf("\nLa variabile inserita non e' uguale a quella salvata");
    }while((x&m)!=m);

}
