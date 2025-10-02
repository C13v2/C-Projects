#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

 typedef struct {

    char modello [MAX];
    int costo;
    int versione;

}telefono;


int main() {
int i,n;
telefono cellulare[MAX];
while(n<1||n>6){
    printf("quanti modelli vuoi inserire? :");
    scanf("%d",&n);


    for(i=0;i<n;i++){
        printf("\ninserisci il modello : ");
        scanf("%s",cellulare[i].modello);
        printf("\ninserisci il costo : ");
        scanf("%d",&cellulare[i].costo);
        printf("\ninserisci la versione : ");
        scanf("%d",&cellulare[i].versione);
    }
        for(i=0;i<n;i++){
            printf("telefono n' %d\n",i+1);
            printf("modello : %s\n",cellulare[i].modello);
            printf("costo : %d\n",cellulare[i].costo);
            printf("versione : %d\n",cellulare[i].versione);

        }

int media(cellulare[i].costo){
    int i;
    float somma=0;
    for(i=0;i<(cellulare[i].costo);i++)
        somma+=(float)cellulare[i].costo;
        printf("la media delle stagioni e': %f\n", somma/(float);
}



int i;
    float soglia;
    FILE* fw;
    fw=fopen("Database.txt", "w");
    if(fw==NULL){
        printf("Imposibile aprire il file Database.txt"); exit(1);
    }
    printf("\nInserisci la dimensione minima per cui salvare i file");
    scanf("%f", &soglia);

  for(i=0; i<cellulare[i].costo; i++) {
        if(versione>soglia) {
            fprintf(fw, "%s\n",cellulare[i].modello);
            fprintf(fw, "%d\n",cellulare[i].costo);
            fprintf(fw, "%d\n",cellulare[i].versione );
            puts("Salvato:");
			printf("modello : %s\n",cellulare[i].modello);
            printf("costo : %d\n",cellulare[i].costo);
            printf("versione : %d\n",cellulare[i].versione);
        }
    }
    fclose(fw);
}


	char leggere;
	printf("Vuoi leggere i dati dal file? S/N");
	getchar();
	scanf("%c",&leggere);
	if (leggere=='s' || leggere=='S'){
		file=fopen("Database.txt", "r");
		char stringa[15];
	    fscanf(file, "%s", &stringa);
        printf("%s", stringa);
    }
}
