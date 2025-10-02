#include <stdio.h>
#define dim 5
int main(){
    float vect[dim];
    int i;
    float *pv;
    pv = &vect[0];
    printf("Inserisci i valori:\n");
    for(i = 0; i < dim; i++){
        printf("%d", i+1);
        scanf("%f", &vect[i]); 
		}
    for(i = 0; i < dim; i++){
        printf("%d) %.3f\t%p\n", i+1, *(vect+i), vect+i);
    }
}


