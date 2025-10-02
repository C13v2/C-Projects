#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void putrev(float *v, int d);
int main() {
    int i, dim;
    float *pv;
    printf("Inserisci la dimensione del vettore:");
    scanf("%d", &dim);

    //pv=(float *)malloc(dim*sizeof(float));
    pv=(float *)calloc(dim, sizeof(float));

    srand(time(NULL));
    for(i=0; i<dim; i++, pv++)
        *pv=rand()%100;
    pv-=i;

    putrev(pv, dim);
}

void putrev(float *v, int d)
{
    int i;
    for(i=0; i<d; i++, v++)
        printf("%f\t", *v);

    puts("");
    v-=i;

    for(i=0, v+=d-1; i<d; i++, v--)
        printf("%f\t",*v);

}
