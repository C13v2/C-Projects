#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double massimo(double *v, int d);

int main() {

    double *p, max;
    int i, dim;
    printf("Inserisci la dim");
    scanf("%d", &dim);

    p=calloc(dim, sizeof(double));

    srand(time(NULL));
    for(i=0; i<dim; i++)
        *(p+i)=rand()%100/1.1;

    for(i=0; i<dim; i++)
        printf("%lf\n", *(p+i));
    max=massimo(p, dim);
    printf("Il massimo e' %lf", max);
}

double massimo(double *v, int d)
{
    double MAXX=*v;

    for(; d>=0; d--)
        if (MAXX<*(v+d))
            MAXX=*(v+d);

    return MAXX;
}