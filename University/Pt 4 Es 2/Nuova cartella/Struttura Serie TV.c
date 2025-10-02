/*
 * Struttura di serie tv:
 * -Titolo;
 * -Anno;
 * -Stagioni;
 * -Durataepisodio;
 * -Incassi;
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 20

typedef struct serietv{
    char titolo [M];
    int anno;
    int stagioni;
    float durataepisodio;
    float incassi;
}serietv;
void inserimento(serietv* vf[], int *nf);
void stampa(serietv* vf[], int *nf);
void media(serietv* vf[], int *nf);
void file_w(serietv* vf[], int *nf);
void file_r(serietv* vf[], int *nf);

int main(){
    serietv* vettore[M];
    int numero_serietv=0;


}
void inserimento(serietv* vf[], int *nf){
    int i;
    printf("inserisci i dati richiesti, una volta finito digitare 'fine'\n");
    for (i=0; i<M;i++){
        vf[*nf]=(serietv*)malloc(sizeof(serietv));
        printf("inserisci titolo:");
        scanf("%s", vf[*nf]->titolo);
        if (strcmp(vf[*nf]->titolo, "fine")==0)
break;

        printf("inserisci anno:");
        scanf("%d", &vf[*nf]->anno);

        printf("inserisci stagioni:");
        scanf("%d", &vf[*nf]->stagioni);

        printf("inserisci durata episodio:");
        scanf("%f", &vf[*nf]->durataepisodio);

        printf("inserisci incassi:");
        scanf("%f", &vf[*nf]->incassi);
        (*nf)++;
    }
}

void stampa(serietv* vf[], int *nf){
    int i;
    for(i=0;i<(*nf);i++)
    {
        printf("%s\n", vf[i]->titolo);
        printf("%d\n", vf[i]->anno);
        printf("%d\n", vf[i]->stagioni);
        printf("%f\n", vf[i]->durataepisodio);
        printf("%f\n", vf[i]->incassi);

    }
}


void media(serietv* vf[], int *nf){
    int i;
    float somma=0;
    for(i=0;i<(*nf);i++)
        somma+=(float)vf[i]->stagioni;
        printf("la media delle stagioni e': %f\n", somma/(float)(*nf));
}
void file_w(serietv* vf[], int *nf){
    int i;
    float soglia;
    FILE* ff;
    ff=fopen("serietv.txt", "w");
    printf("inseirsci la soglia: ");
    scanf("%f", &soglia);
    for(i=0;i<(*nf);i++){
        if( vf[i]->durataepisodio >= soglia)
        {
            fprintf(ff, "%s\n", vf[i]->titolo);
            fprintf(ff, "%d\n", vf[i]->anno);
            fprintf(ff, "%d\n", vf[i]->stagioni);
            fprintf(ff, "%f\n", vf[i]->durataepisodio);
            fprintf(ff, "%f\n", vf[i]->incassi);

            printf("%s\n", vf[i]->titolo);
            printf("%d\n", vf[i]->anno);
            printf("%d\n", vf[i]->stagioni);
            printf("%f\n", vf[i]->durataepisodio);
            printf("%f\n", vf[i]->incassi);

        }fclose(ff);
    }
}
void file_r(serietv* vf[], int *nf){
    int i;
    char *lettura;
    char buff_titolo[M], buff_anno[M], buff_stagioni[M], buff_durataepisodi[M], buff_incassi[M];
    FILE* ff;
    ff=fopen("serietv.txt", "r");
    printf("stampotutto: \n");
    for(i=(*nf);i<M;i++)
    {
        vf[i]=(serietv*)malloc(sizeof(serietv));

lettura=fgets(buff_titolo,M,ff);
        if(lettura==NULL)
            break;
strcpy(vf[i]->titolo,buff_titolo);

        fgets(buff_anno,M,ff);
        vf[i]->anno=atoi(buff_anno);

        fgets(buff_stagioni,M,ff);
        vf[i]->stagioni=atoi(buff_stagioni);

        fgets(buff_durataepisodi,M,ff);
        vf[i]->durataepisodio=atof(buff_durataepisodi);


        fgets(buff_incassi,M,ff);
        vf[i]->incassi=atof(buff_incassi);

        printf("ho stampato tutto: \n");
        printf("%s\n", vf[i]->titolo);
            printf("%d\n", vf[i]->anno);
                printf("%d\n", vf[i]->stagioni);
                    printf("%f\n", vf[i]->durataepisodio);
                        printf("%f\n", vf[i]->incassi);
    }fclose(ff);
}
