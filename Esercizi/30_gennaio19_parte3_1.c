
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, dim=10, tmp;
    float v[dim];
    float *pv=&v[0];

    srand(time(NULL));

    for (i=0, tmp=1000; i<dim; i++, tmp-=100)
        *(pv+i)=(rand()%100+tmp)/1.1;

    printf("%c", 'N');
    for(i=0; i<dim; i++)
        printf("%d) %.3f\t%p\n", i+1, *(pv+i), (pv+i));
}