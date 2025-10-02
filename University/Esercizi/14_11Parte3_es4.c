#include <stdio.h>

void somma(int *num1, int *num2, int *S);
int main() {

    int a, b, sum;

    puts("Inserisci due valori divisi da uno spazio");
    scanf("%d %d", &a, &b);

    somma(&a, &b, &sum);
    printf("%d+%d=%d", a, b, sum);
}

void somma(int *num1, int *num2, int *S)
{
    *S=(*num1)+(*num2);
}