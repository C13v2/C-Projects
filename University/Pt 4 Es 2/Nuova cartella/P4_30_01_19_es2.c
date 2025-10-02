/*

 file: nome, anno, dimensione
 nova rilevazione
 stampa in ordine
 dimensione media
 salvare su file anno>soglia
 leggere da file

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
typedef struct file {
    char nome[MAX];
    int anno;
    float dim;
}file;

void insfile(file* vf[], int* nf);
void stampadati(file* vf[], int* nf);
void media(file* vf[], int* nf);
void saveonfile(file* vf[], int* nf);
void readfromfile(file* vf[], int* nf);
int main()
{
    file* vect[MAX];
    int num_file=0;
    insfile(vect, &num_file);
    stampadati(vect, &num_file);
    media(vect, &num_file);
    saveonfile(vect, &num_file);
    readfromfile(vect, &num_file);


}

void insfile(file* vf[], int* nf)
{
    int i;
    for(i=0; i<MAX; i++) {
        vf[*nf] = (file *) malloc(sizeof(file));
        printf("Nome File:");
        scanf("%s", vf[*nf]->nome);
        if (strcmp(vf[*nf]->nome, "fine") == 0)
            break;
        printf("Anno:");
        scanf("%d", &vf[*nf]->anno);
        printf("Dimensione:");
        scanf("%f", &vf[*nf]->dim);
        (*nf)++;
    }
}

void stampadati(file* vf[], int* nf)
{
    int i;
    for(i=0; i<(*nf); i++) {

        printf("Nome File: %s\n", vf[i]->nome);
        printf("Anno: %d\n", vf[i]->anno);
        printf("Dimensione: %f\n", vf[i]->dim);
        puts("----------------");
    }

}

void media(file* vf[], int* nf)
{
    int i;
    float sum=0;
    for(i=0; i<(*nf); i++)
        sum+=vf[i]->dim;
    printf("La dimensione media e' %f\n", sum/(float)(*nf));
}

void saveonfile(file* vf[], int* nf)
{

    int i;
    float soglia;
    FILE* fw;
    fw=fopen("Database.txt", "w");
    if(fw==NULL){
        printf("Imposibile aprire il file Database.txt"); exit(1);
    }
    printf("\nInserisci la dimensione minima per cui salvare i file");
    scanf("%f", &soglia);

    for(i=0; i<(*nf); i++) {
        if(vf[i]->dim>soglia) {
            fprintf(fw, "%s\n", vf[i]->nome);
            fprintf(fw, "%d\n", vf[i]->anno);
            fprintf(fw, "%f\n", vf[i]->dim);
            puts("Salvato:");
            printf("Nome: %s\n", vf[i]->nome);
            printf("Anno: %d\n", vf[i]->anno);
            printf("Dimensione: %f\n", vf[i]->dim);
        }
    }
    fclose(fw);
}

void readfromfile(file* vf[], int* nf){

    int i;
    char buff_nome[MAX], buff_anno[MAX], buff_dim[MAX];
    char* lettura;
    FILE* fr;
    fr=fopen("Database.txt", "r");
    if(fr==NULL){
        printf("Imposibile aprire il file DB.txt"); exit(1);
    }
    for(i=(*nf); i<MAX; i++) {
        vf[*nf] = (file *) malloc(sizeof(file));
        if(vf[*nf]==NULL){
            printf("Impossibile allocare la memoria");
            exit(1);
        }

        lettura=fgets(buff_nome, MAX, fr);
        if(lettura==NULL)
            break;
        strcpy(vf[i]->nome, buff_nome);

        fgets(buff_anno, MAX, fr);
        vf[i]->anno=atoi(buff_anno);

        fgets(buff_dim, MAX, fr);
        vf[i]->dim=atof(buff_anno);

        puts("_______");
        printf("Nome: %s\n", vf[*nf]->nome);
        printf("Anno: %d\n", vf[*nf]->anno);
        printf("Dimensione: %f\n", vf[*nf]->dim);

        (*nf)++;
    }
    fclose(fr);


}