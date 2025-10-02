//17_04_19itinere

#include <stdio.h>
#include <stdlib.h>
int strlenght(char *s);
void strev(char *str);
int main() {

    int i, dim=20;
    char *s;
    s=calloc(dim, sizeof(char));

    for(i=0; i<dim; i++)
    {
        if(i%2==0)
            *(s+i)=rand()%26+'A';
        else
            *(s+i)=rand()%26+'a';
    }

    for(i=0; i<dim; i++)
    {
        printf("%c", *(s+i));
    }puts("");
    strev(s);
    puts(s);
}

void strev(char *str)
{
    char tmp;
    int i, j=strlenght(str)-1;
    for(i=0; i!=strlenght(str)/2; i++, j--)
    {
        tmp=*(str+i);
        *(str+i)=*(str+j);
        *(str+j)=tmp;
    }

}

int strlenght(char *s)
{
    int L;
    for(L=0; (*s)!='\0'; L++, s++);
    return L;
}