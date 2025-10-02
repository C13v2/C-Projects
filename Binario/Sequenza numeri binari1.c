/*
 * 1100 0011 11000011 11000011 11000011
 * AND &
 * OR |
 * SHIFT sx <<
 * */
#include <stdio.h>

int main()
{
    long long int  a=12, b=3, m=0, x, mask=1;
    int i;

    m|=a;
    m<<=4;

    m|=b;
    x=m;
    m<<=8;

    m|=x;
    x=m;

    m<<=16;
    m|=x;

for(i=31; i>0; i--){
    printf("%d", (m&mask<<i)? 1 : 0);
    if(i%8==0)
        printf(" ");
    printf("inserisci la variabile da confrontare m(%lld):", m);
    scanf("%lld", &x);

    printf("la variabile inserita %s gli 1 nella stessa posizione di m\n", (m&x)==m ? "ha" : "non ha");
}

}
