#include <stdio.h>
#include <stdlib.h>

void maxmin(int *v, int d, int *MAX, int *min);


int main() {
    int i, dim, m, M, *pm=&m, *pM=&M;
    printf("Inserisci la dimensione del vettore:");
    scanf("%d", &dim);

    int *pv;

    pv=(int*)malloc(dim*sizeof(int));
    for(i=0; i<dim; i++, pv++)
    {
        printf("Inserisci l'elemento numero %d:", i+1);
        scanf("%d", pv);
    }pv-=i;

    maxmin(pv, dim, pM, pm);
    printf("MAX=%d\tmin=%d\n", *pM, *pm);
}

void maxmin(int *v, int d, int *MAX, int *min)
{
    int i;
    *MAX=*v;
    *min=*v;

    for(i=0; i<d;i++, v++)
    {
        if(*v>=*MAX) *MAX=*v;
        if(*v<=*min) *min=*v;
    }
}

