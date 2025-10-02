/*Creare un programma che, attraverso la dichiarazione di una struttura opportuna, permetta di
gestire i dati relativi a film. Ogni struttura comprenderÃ  dovrÃ  avere informazioni su regista, anno,
spettattori. Il programma deve permettere di :
â€¢ Inserire una nuova rilevazione
â€¢ Stampare i dati immessi in ordine opposto allâ€™ordine di immissione
â€¢ Calcolare il numero di spettatori medio
â€¢ Salvare su un file tutti i dati con anno precedente ad una soglia
â€¢ Leggere i dati da file
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
typedef struct film
{
    char regista[MAX];
    int anno;
    int spettatori;
}film;

void ins_film(film* vf[], int* nf);
void stampa_film(film* vf[], int* nf);
void media_spett(film* vf[], int* nf);
void soglia_anno(film* vf[], int* nf);
void leggidafile(film* vf[], int* nf);
int main()
{
    film* vect[MAX];
    int num_film=0;
    ins_film(vect, &num_film);
    stampa_film(vect, &num_film);
    media_spett(vect, &num_film);
    soglia_anno(vect, &num_film);
    leggidafile(vect, &num_film);

}
void ins_film(film* vf[], int* nf)
{
    int i;

    while(*nf<MAX)
    {
        puts("______");
        vf[nf]=(film)malloc(sizeof(film));


        if(*vf==NULL){
            printf("Impossibile allocare la memoria per l'inserimento");
            break;
        }
        printf("Regista:");
        scanf("%s", vf[*nf]->regista);
        if(strcmp(vf[*nf]->regista, "fine")==0)
            break;
        printf("Anno:");
        scanf("%d", &vf[*nf]->anno);
        printf("Spettatori:");
        scanf("%d", &vf[*nf]->spettatori);
        (*nf)++;
    }

}

void stampa_film(film* vf[], int* nf)
{
    int i;

    for(i=*nf-1; i>=0; i--)
    {
        printf("Regista: %s\n", vf[i]->regista);
        printf("Anno: %d\n", vf[i]->anno);
        printf("Spettatori: %d\n", vf[i]->spettatori);
    }
}

void media_spett(film* vf[], int* nf)
{
    int i, sum=0;
    for(i=0; i<*nf; i++)
    {
        sum+=vf[i]->spettatori;
    }
    printf("Gli spettatori medi sono %.2f", (float)sum/(float)(*nf));
}

void soglia_anno(film* vf[], int* nf)
{
    int i, soglia;
    printf("\nInserire l'anno fino a cui salvare i film:");
    scanf("%d", &soglia);
    FILE* fw;
    fw=fopen("FilmSalvati.txt", "w");
    if(fw==NULL){
        printf("IMPOSSIBILE APRIRE FilmSalvati");
        exit(1);
    }
    for(i=0; i<*nf; i++)
    {
        if(vf[i]->anno < soglia) {
            fprintf(fw, "%s\n%d\n%d\n", vf[i]->regista, vf[i]->anno, vf[i]->spettatori);
            printf("%s\n%d\n%d\n", vf[i]->regista, vf[i]->anno, vf[i]->spettatori);
        }
    }
    fclose(fw);
}

void leggidafile(film* vf[], int* nf)
{
    int i;
    char buff_regista[50], buff_anno[50], buff_spettatori[50];
    char* lettura;

    FILE* fr;
    fr=fopen("Db_film.txt", "r");
    if(fr==NULL){
        printf("IMPOSSIBILE APRIRE Db_film.txt");
        exit(1);
    }

    while(*nf<MAX)
    {
        puts("______");
        vf[nf]=(film)malloc(sizeof(film));
        if(*vf==NULL){
            printf("Impossibile allocare la memoria per l'inserimento");
            break;
        }
        lettura=fgets(buff_regista,MAX, fr);
        if(lettura==NULL)
            break;
        buff_regista[strlen(buff_regista)-1]='\0';
        strcpy(vf[*nf]->regista, buff_regista);
        fgets(buff_anno,MAX, fr);
        vf[*nf]->anno =atof(buff_anno);
        fgets(buff_spettatori,MAX, fr);
        vf[*nf]->spettatori=atof(buff_spettatori);


        puts("Letti da file:\n");
        printf("Regista: %s\n", vf[*nf]->regista);
        printf("Anno: %d\n", vf[*nf]->anno);
        printf("Spettatori: %d\n", vf[*nf]->spettatori);
        (*nf)++;
    }
    fclose(fr);
}