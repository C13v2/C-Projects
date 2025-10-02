#include <stdio.h>
#include <stdlib.h>

void print_bit(int x);

int main(){

int x=3;
int m=0;;

for(int i=0; i<=31;i+=4){
    m=m|(x<<i);          //ciclo che crea la maschera richiesta 00110011 00110011 00110011
                //a secnda della maschera richiesta nel compito, può variare l'incremento di i e il valore di x
}

print_bit(m);

int confronto;
printf("Digita un numero: ");
scanf("%d",&confronto);

print_bit(confronto);
print_bit(m);
print_bit(confronto&m);   // qui stampa direttamete gli uno solo quando sia nella maschera che nel numero digitato coincidno


return 0;

}

void print_bit(int x){     //funzione standard per stampare un numero in bit
  
    int mb=1;
    int m=0;

    for (int i = 31; i>=0; i--){

        m=mb<<i;
        if((m&x)==0)
            printf("0");
        else
            printf("1");

        if((i%8)==0)
            printf("  ");

    }
    printf("\n");
}