#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double med(double *v, int dim);
int main()
{

    int i, dim;
    double *pv, media;

    puts("Inserisci la dimensione del vettore:");
    scanf("%d", &dim);

    srand(time(NULL));
    pv=(double *)calloc(dim, sizeof(double));     //dichiara il vettore azzerando i valori

    for(i=0; i<dim; i++, pv++)
        *pv=(rand()%100+1)/1.1;
    pv-=i;

    for(i=0; i<dim; i++, pv++)
        printf("%lf\n", *pv);
    pv-=i;
    media=med(pv, dim);
    printf("La media e':%lf", media);
}

double med(double *v, int d)
{
    double somma=0, i;

    for (i= 0; i<d ; i++, v++)
    {
        somma+=*v;

    }
    return somma/(double)d;
}

