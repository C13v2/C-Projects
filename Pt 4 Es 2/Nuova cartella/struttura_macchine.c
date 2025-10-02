#include <stdio.h>
#include <string.h>
#define MAX 10

typedef struct{
char marca[30];
int cilindrata;
int anno;
char nome[30];
char cognome[30];
}automobili;



int main() {
    int i,n,anno,tot=0;
    automobili autosalone[MAX];
    char marca[20];
    while (n<1||n>MAX){
        printf("quante auto vuoi inserire?\n");
        scanf("%d",&n);
    }
    for(i=0;i<n;i++){
       // printf("\n auto %d,i+1");
        printf("\n Marca: ");
        scanf("%s",autosalone[i].marca);

        while ((autosalone[i].cilindrata)<800||(autosalone[i].cilindrata)>2500){
            printf("cilindrata: ");
            scanf("%d",&autosalone[i].cilindrata);
        }
        while((autosalone[i].anno)<2000||(autosalone[i].anno)>2019){
            printf("anno: ");
            scanf("%d",&autosalone[i].anno);

        }

        printf("cognome: ");
        scanf("%s",autosalone[i].cognome);
        printf("nome: ");
        scanf("%s",autosalone[i].nome);
}
    printf("\n nominativi per macchina con cilindrata maggiore di 1800cc: ");
    for(i=0;i<n;i++){
        if(autosalone[i].cilindrata>1800)
            printf("%s,%s",autosalone[i].cognome , autosalone[i].nome);
    }

    printf("\n\n Anno immatricolazione: ");
    scanf("%d",&anno);
    for(i=0;i<n;i++){
        if(autosalone[i].anno==anno)
            tot++;
        printf("\n auto immatricolate: %d",tot);
    }




}
