#include <stdio.h>

int somma(int A, int B);

int c;
int main() {
    int a, b;
    printf("Inserisci due valori divisi da uno spazio:");
    scanf("%d %d", &a, &b);
    somma(a, b);
    printf("%d+%d=%d",a, b, c);

}

int somma(int A, int B)
{
    c=A+B;
}