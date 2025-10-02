#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    srand(time(NULL));
    int  dim=rand()%21+10;
    double sum=0, *pv=calloc(dim, sizeof(double));

    printf("Verranno creati %d elementi\n", dim);

    for(;dim>=0; dim--) {
        *(pv + dim) = rand() % 100 / 1.1;

        sum+=*(pv+dim);

        printf("%d) %.3lf\t%p\n",dim, *(pv+dim), (pv+dim));
    }
    printf("La somma degli elementi e':%.3lf", sum);
}