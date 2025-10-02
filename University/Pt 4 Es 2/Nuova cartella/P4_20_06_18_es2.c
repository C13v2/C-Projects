/*
 * calciatori
 * nome
 * titoli
 * percentuale
 *
 * inserimento
 * stampa in ordine
 * media titoli
 * salva su file > soglia
 * leggi da file
 */
#define MAX 50
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct calciatori
{
    char nome[MAX];
    int titoli;
    float realizzazione;

}calciatori;
void insc(calciatori* vc[], int *nc);
void stampa(calciatori* vc[], int *nc);
void media(calciatori* vc[], int *nc);
void saveonfile(calciatori* vc[], int *nc);
void readfromfile(calciatori* vc[], int *nc);

int main()
{
    calciatori* vect[MAX];
    int num_calc=0;
    insc(vect, &num_calc);
    stampa(vect, &num_calc);
    media(vect, &num_calc);
    saveonfile(vect, &num_calc);
    readfromfile(vect, &num_calc);
}

void insc(calciatori* vc[], int *nc)
{
    int i;

    for(i=0; i<MAX; i++)
    {    vc[*nc]=(calciatori*)malloc(sizeof(calciatori));
        if(vc[*nc]==NULL) {
            printf("Impossibile allocare la memoria"); break;
        }
        printf("Nome:");
        scanf("%s", vc[*nc]->nome);
        if(strcmp(vc[*nc]->nome, "fine")==0) break;
        printf("Titoli:");
        scanf("%d", &vc[*nc]->titoli);
        printf("Realizzazione:");
        scanf("%f", &vc[*nc]->realizzazione);
        (*nc)++;
    }
}

void stampa(calciatori* vc[], int *nc)
{
    int i;
    puts("STAMPA");
    for(i=0; i<(*nc); i++)
    {
        puts("____________");
        printf("Nome: %s\n", vc[i]->nome);
        printf("Titoli: %d\n", vc[i]->titoli);
        printf("Realizzazione: %f\n", vc[i]->realizzazione);
    }
}


void media(calciatori* vc[], int *nc)
{
    int i;
    float sum=0;

    for(i=0; i<(*nc); i++)
        sum+=vc[i]->titoli;

    printf("La media dei titoli e' %f\n", sum/(float)(*nc));
}


void saveonfile(calciatori* vc[], int *nc)
{
    int i;
    float soglia;
    printf("Soglia oltre cui salvare:");
    scanf("%f", &soglia);

    FILE* cw;
    cw=fopen("Calc.txt", "w");
    if(cw==NULL){
        puts("Impossibile aprire il file Calc"); exit(1);
    }


    for(i=0; i<(*nc); i++)
    {
        if(vc[i]->realizzazione > soglia)
        {
            fprintf(cw,"%s\n", vc[i]->nome);
            fprintf(cw, "%d\n", vc[i]->titoli);
            fprintf(cw, "%f\n", vc[i]->realizzazione);
            puts("------------------------");
            printf("Nome: %s\n", vc[i]->nome);
            printf("Titoli: %d\n", vc[i]->titoli);
            printf("Realizzazione: %f\n", vc[i]->realizzazione);
        }

    }
    fclose(cw);

}

void readfromfile(calciatori* vc[], int *nc)
{

    int i;
    char buff_nome[MAX], buff_titoli[MAX], buff_realizzazione[MAX];
    char* lettura;
    FILE* cr;
    cr=fopen("Calc.txt", "r");
    puts("STO LEGGENDO DB");
    if(cr==NULL){
        puts("Impossibile aprire il file Calc"); exit(1);
    }

    for(; *nc<MAX; (*nc)++)
    {
        vc[*nc]=(calciatori*)malloc(sizeof(calciatori));
        if(vc[*nc]==NULL) {
            printf("Impossibile allocare la memoria"); break;
        }
        lettura=fgets(buff_nome, MAX, cr);
        if(lettura==NULL) break;

        strcpy(vc[*nc]->nome, buff_nome);

        fgets(buff_titoli, MAX, cr);
        vc[*nc]->titoli=atoi(buff_titoli);
        fgets(buff_realizzazione, MAX, cr);
        vc[*nc]->realizzazione=atof(buff_realizzazione);

        puts("------------------------");
        printf("Nome: %s\n", vc[*nc]->nome);
        printf("Titoli: %d\n", vc[*nc]->titoli);
        printf("Realizzazione: %f\n", vc[*nc]->realizzazione);


    }
    fclose(cr);
}