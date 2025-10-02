#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXDIM 100
#define MIN_ASCOLTI 20000


struct brano{

    char titolo[MAXDIM];
    float costo;
    int ascolti;

};
typedef struct brano brano;

int nuovo_brano(brano *b[], int *i);

void media(brano *b[]);

void salvafile(brano *b[], FILE *fp);
 
void letturafile( FILE *fp);

int main(){

    brano *b[99]={NULL};
    int i=0;
    int assegnazione=1;
    FILE *fp;

    do{
        assegnazione = nuovo_brano(b,&i);
    }while (assegnazione);
   
    for(;i>=0;i--){
        printf("--------------------------------------------\n");
        printf("Titolo del brano: %s\n",b[i]->titolo);
        printf("Costo: %f\n",b[i]->costo);
        printf("Ascolti: %d\n",b[i]->ascolti);
        
    }

    printf("--------------------------------------------\n");

    media(b);
    salvafile(b,fp);
    letturafile(fp);

    return 0;
}




int nuovo_brano(brano *b[], int *i){
    char titolo[MAXDIM];
    char *t;
    float costo;
    int ascolti;
    
   
    b[*i]=malloc(1*sizeof(brano));
    printf("Titolo del brano(digitare 'fine' per interrompere): ");
    fgets(titolo,MAXDIM,stdin);
    titolo[strlen(titolo)-1]='\0';
    if (strcmp(titolo,"fine")!=0){
        strcpy(b[*i]->titolo,titolo);
        printf("Costo: ");
        scanf("%f", &b[*i]->costo);
        printf("Numero i ascolti: ");
        scanf("%d", &b[*i]->ascolti);
        char buffer=scanf("%c",&buffer);
        *i=*i+1;
        return 1;
    }else{
        *i=*i-1;
        return 0;
    }
}

void media(brano *b[]){
int i=0;
float sommatoria;

while(b[i+1]!=NULL){

    sommatoria+=b[i]->costo;
    i++;
}

printf("La media del costo dei brani è di %.3f\n",sommatoria/(float)(i));

}

void salvafile(brano *b[], FILE *fp){

    fp=fopen("prova.txt","w");
    if(fp==NULL){
        printf("IMPOSSIBLE APRIRE FILE\n");
        exit(1);
    }

    for(int i=0;b[i+1]!=NULL;i++){
        if(b[i]->ascolti>=MIN_ASCOLTI)
            fprintf(fp,"%s;%.2f;%d\n",b[i]->titolo, b[i]->costo, b[i]->ascolti);
        else
            printf("Numero ascolti troppo bassi\n");
            
    }

    fclose(fp);

}

void letturafile( FILE *fp){

    printf("Brani piu\' ascoltati:\n\n");
    char s[100];
    char sep[]=";s";
    char *token=NULL;
    int j=0;

    fp=fopen("prova.txt","r");
    if(fp==NULL){
        printf("IMPOSSIBLE APRIRE FILE\n");
        exit(1);
    }
    
   
  
    while(fgets(s,100,fp)!=NULL){
        token=strtok(s,sep);
        printf("%s   ",token);
        token=strtok(NULL,sep);
        printf("%s   ",token);
        token=strtok(NULL,sep);
        printf("%s",token);
    }
}
