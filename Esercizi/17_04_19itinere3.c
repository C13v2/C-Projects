//17_04_19itinere3

#include <stdio.h>

int strlenght(char *s);
int main() {

    char str[25];
    printf("insersici una stringa");
    scanf("%s", str);
    printf("La lunghezza e' %d", strlenght(str));
}

int strlenght(char *s)
{
    int L;
    for(L=0; (*s)!='\0'; L++, s++);
    return L;
}