#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define soglia 10

typedef struct brani{
    char autore[MAX];
    int costo ;
    int ripetizione;
}brani;

int main() {
int i,n,r,t;


    //r= riproduzione ; a=autore;
    FILE *file;
    brani brani [MAX];
    while (n < 1 || n > MAX){

        printf("quanti brani vuoi inserire?  : ");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            printf("inserisci autore : \n");
            scanf("%s",brani[i].autore);
            printf(" inserisci costo : \n");
            scanf("%d",&brani[i].costo);
            printf(" inserisci quante volte e' stato riprodotto :  \n");
            scanf("%d",&brani[i].ripetizione);

        }
       for (i=0;i<n;i++) {                            //STAMPA ELENCO
           printf("\n--------\n");
           printf("autore:  %s \n",brani[i].autore);
        printf("costo : %d \n",brani[i].costo);
        printf("ripetizoni : %d \n",brani[i].ripetizione);

   }
        for (i=0;i<n;i++){
        r=r+brani[i].ripetizione;
        //a=a + brani[i].autore;
        t++;
        printf("La media delle ripetizioni e': %d\n",r/t);
    }


        if (brani[i].costo<soglia) {
            file=fopen("costo.txt", "w");
            if( file==NULL ) {
                perror("Errore in apertura del file");
                exit(1);
            }
            fprintf(file, "costo:%d\n", brani[i].costo);
            fclose(file);
        }
}}

