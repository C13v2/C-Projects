#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define max 150
#define LEN 1000


/* STRUTTURA DATI*/
typedef struct{
    char autore[max];
    char titolo[max];
    char editore[max];
    int anno;
} Libro;
typedef struct{
Libro elementi[LEN];
int num_libri;
}Lista;


/*prototipi di funzione*/
int menù();
Lista Inserimento_libro ();
void Stampa_Elenco(Lista  list);
void Libro_vecchio(Lista list);
int Cerca_Autore(Lista list,char autore[]);


int main() {
int scelta;
Lista L;
char autore[max];
int presenza ;

while(scelta=menù()){
switch(scelta){
    case 1://inserimento;
        system("CLS");
        printf("***INSERIMENTO LIBRO***\n\n");
        L=Inserimento_libro();
        printf("\n");
        Stampa_Elenco(L);
        system("PAUSE");
        break;
    case 2://libro_vechio;
        system("CLS");
        printf("***CERCA LIBRO VECCHIO***\n\n");
        Libro_vecchio(L);
        system("PAUSE");
        break;
    case 3://cerca_autore;
        system("CLS");
        printf("***CERCA AUTORE ***\n\n");
        printf("inserisci autore da cercare : ");
        fflush(stdin);
        gets(autore);
        presenza=Cerca_Autore(L,autore);
        if(presenza!=1)
            printf("l'autore e' gia' presente ");
        else
            printf("l'autore non e' presente ");
        system("PAUSE");
        break;
    case 4://stampa;
        system("CLS");
        Stampa_Elenco(L);
        system("PAUSE");
        break;
    case 0:
        return 0;
}
}
    return 0;
}
/* definizione di funzione*/
int menù(){
    int scelta;
    printf("** gestione libri**\n");
    printf("[1] Inserimento libri\n");
    printf("[2] cerca libro vecchio \n");
    printf("[3] cerca autore\n");
    printf("[4] stampa libri\n");
    printf("[0] esci\n");
    printf("scelta:");
    scanf("%d",&scelta);
    while(scelta<0 || scelta>4){
        printf("scelta non valida!\n");
        printf("scelta:");
        scanf("%d",&scelta);
        return scelta;
    }
    return scelta;
    system("PAUSE");

}
Lista Inserimento_libro (){
    Lista list;
    int i;
    printf("quanti libri vuoi inserire? ");
    scanf("%d", &list.num_libri);
    fflush(stdin);
    for (i=0;i<list.num_libri;i++){
        printf("inserisci autore: ");
        gets(list.elementi[i].autore);
        printf("inserisci titolo: ");
        gets(list.elementi[i].titolo);
        printf("inserisci editore: ");
        gets(list.elementi[i].editore);
        printf("inserisci anno di pubblicazione: ");
    scanf("%d",&list.elementi[i].anno);
        fflush(stdin);
    }
    return list;
}
void Stampa_Elenco(Lista list){
int i;
for(i=0;i<list.num_libri;i++){

    printf("libro n' %d\n",i+1);
    printf("autore : %s\n",list.elementi[i].autore);
    printf("titolo : %s\n",list.elementi[i].titolo);
    printf("editore : %s\n",list.elementi[i].editore);
    printf("anno : %d\n\n",list.elementi[i].anno);
}
}
void Libro_vecchio(Lista list){
int i;
Libro vecchio=list.elementi[0];
int indice_vecchio=0;
for(i=0;i<list.num_libri;i++){
if(vecchio.anno > list.elementi[i].anno){
    vecchio=list.elementi[i];
    indice_vecchio=i;

}
}
    printf("il libro piu' vecchio in elenco e': \n ");
    printf("' %s' ,di %s , pubblicato da %s, nell' %d\n", vecchio.titolo,vecchio.autore,vecchio.editore,vecchio.anno);

}
int Cerca_Autore(Lista list,char autore[]){
    int i,presenza=-1;
    for(i=0;i<list.num_libri;i++){
if(strcmp (list.elementi[i].autore,autore)==0){
    autore=1;
}
    }
    return autore;
}