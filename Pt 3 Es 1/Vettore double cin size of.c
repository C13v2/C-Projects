#include <stdio.h>
#include <stdlib.h>


int main()
{
    double *pv;
    int i, dim=5;
    pv=(double *)calloc(dim, sizeof(double));     //dichiara il vettore azzerando i valori
    //pv=(double *)malloc(dim * sizeof(double));  //dichiara il vettore e lascia i valori randomici
    for(i=0; i<dim; i++, pv++)
        *pv=rand()%2; //vett[i]=rand()%2;
    pv-=i;
    for(i=0; i<dim; i++, pv++)
        printf("%.3lf\t%p\n", *pv, pv);
}
