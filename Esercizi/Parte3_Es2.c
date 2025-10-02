#include <stdio.h>
#include <stdlib.h>


void notminmax(int *v, int d, int *nmin, int *nMax);
int main()
{

    int i, dim, nonm, nonM;
    int *pv;


    puts("Inserisci la dimensione del vettore:");
    scanf("%d", &dim);

    pv=(int *)calloc(dim, sizeof(int));     //dichiara il vettore azzerando i valori


    puts("........");
    for(i=0; i<dim; i++, pv++)
        *pv=rand()%100;
    pv-=i;

    for(i=0; i<dim; i++, pv++)
        printf("%d ", *pv);
    pv-=i;
    notminmax(pv, dim, &nonm, &nonM);
    printf("non minimo=%d\tnon massimo=%d", nonm, nonM);
}

void notminmax(int *v, int d, int *nmin, int *nMax)
{
    int i, min, max;
    min=*v;
    max=*v;

    for(i=0; i<d; i++, v++)
    {
        if(*v>max) max=*v ;
        if(*v<min) min=*v ;
    }v-=i;
    i=0;
    while(*v!=max)
    {
        *nMax=*v;
        v++; i++;
    }v-=i;

    i=0;
    while(*v!=min)
    {
        *nmin=*v;
        v++; i++;
    }v-=i;

}

