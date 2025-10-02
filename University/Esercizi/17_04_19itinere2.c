/*
 * 17_04_19itinere2
 * #include <stdio.h>
void minmax(int *vm);
int main() {
    int v[2];
    printf("Inserisci due valori");
    scanf("%d %d", &v[0], &v[1]);
    printf("Il massimo e il minimo tra %d e %d sono rispettivamente:", v[0], v[1]);
    minmax(&v[0]);
    printf("%d %d", v[0], v[1]);
}
void minmax(int *vm)
{
    int tmp;
    if(*(vm+1)>*vm)
    {
        tmp=*vm;
        *vm=*(vm+1);
        *(vm+1)=tmp;
    }
}*/
#include <stdio.h>
void minmax(int num1, int num2, int *min, int *max);
int main() {
    int a, b, M, m;

    printf("Inserisci due valori");
    scanf("%d %d", &a, &b);

    minmax(a, b, &M, &m);

    printf("Il massimo e' %d\nIl minimo e' %d:", M, m);


}
void minmax(int num1, int num2, int *max, int *min)
{
    int tmp;
    if(num1>num2) {
        *max=num1; *min=num2;
    }
    else {
        *max=num2; *min=num1;
    }
}