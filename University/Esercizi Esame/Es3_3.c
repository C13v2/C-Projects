#include <stdio.h>

int main() {
    double vett[4], *pv=&vett[0];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Inserisci l'elemento numero %d:", i+1);
        scanf("%lf", &vett[i]);
    }

    for(i=0; i<4; i++, pv++)
    {
        printf("%3lf\t%p\n", *pv, pv);
    }

}
