#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct serietv{


	char titolo;
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

int mian (){
	serietv* vettore [M];
	int numero_serietv=0;
	
	inserimento(vettore,&numero_serietv);
	stampa(vettore,&numero_serietv);
	media(vettore,&numero_serietv);
	file_w(vettore,&numero_serietv);
	file_r(vettore,&numero_serietv);
}
void inserimento (serietv* vf[],int *nf){
	int i ;
	printf("inserisci i dati richiesti, una volta finito digitare 'fine'\n");
	for(i=0;i<M;i++){
	vf[nf] = (serietv*)malloc(sizef(serietv));
	prntf("Inserisci titolo: ");
	scanf("%s", vf[*nf]->titolo);
	if(strcmp(vf[*nf]->titolo, "fine")==0)
break;
	printf("Inserisci anno: ");
	scanf("%d", vf[*nf]->anno);
	printf("Inserisci stagioni: ");
	scanf("%d", vf[*nf]->stagioni);
	printf("Inserisci durataepisodio: ");
	scanf("%f",vf[*nf]->durataepisodio);
	printf("Inserisci incassi: ");
	scanf("%f", vf[*nf]->incassi);
	(*nf)++;
	}
}
void stampa(serietv* vf[],int *nf){
	int i ;
	for(i=0;i<(*nf);i++){
		printf("%s",vf[i]->titolo);
		printf("%d",vf[i]->anno);
		printf("%d",vf[i]->stagioni);
		printf("%f",vf[i]->durataepisodio);
		printf("%f",vf[i]->incassi);
	}
	
}
voif stampa (serietv* vf[],int *nf ){
	int i;
	float somma=0;
	for(i=0;i<(*nf);i++){
		somma+=(float)vf[i]->stagioni
		printf("la media delle stagioni è: %f",somma/(float)(*nf));
	}
}
void file_w(serietv* vf[],int *nf){
	int i;
	float soglia;
	FILE* ff;
	ff=open("serietv.txt","w");
	printf("inserisci la soglia\n");
	scanf("%f",&soglia);
	for(i=0;i<(*nf);i++){
		if(vf[i]->durataepisodio>=soglia){
		 
		 fprintf(ff,"%s",vf[i]->titolo);
		 
		 fprintf(ff,"%d",vf[i]->anno);
		 
		 fprintf(ff,"%d",vf[i]->stagioni);
		 
		 fprintf(ff,"%f",vf[i]->durataepisodio);
		 
		 fprintf(ff,"%f",vf[i]->anno);
		 
		 
		 printf("%s",vf[i]->titolo);
		 
		 printf("%d",vf[i]->anno);
		 
		 printf("%d",vf[i]->stagioni);
		 
		 printf("%f",vf[i]->durataepisodio);
		 
		 printf("%f",vf[i]->incassi);
	}fclose(ff);
	}
}
void file_r(serietv* vf[],int *nf){
	int i;
	char *lettura;
	char buff_titolo[M],buff_anno[M];buff_stagioni[M];buff_durataepisodio[M],buff_incassi[M];
	FIlE* ff;
	ff = open("serietv.txt","r");
	printf("stampo tutto\n");
	for (i=0;i<M;i++){
		vf[i]=(serietv*)malloc(sizeof(serietv));
		lettura = fgets(buff_titolo,M,ff);
		vf[i]->titolo,buff_titolo;
		if ( lettura = NULL )
break;
	strcpy(vf[i]->titolo,buff_titolo);
		fgets(buff_anno,M,ff)
		vf[i]->anno,buff_anno;
		fgets(buff_stagioni,M,ff);
		vf[i]->stagioni,buff_stagioni;
		fgets(buff_durataepisodio,M,ff);
		vf[i]->durataepisodio,buff_durataepisodio;
		fgets(buff_incassi,M,ff);
		vf[i]->incassi,buff_incassi;
		
			printf("ho stampato tutto\n");
			printf("%s",vf[i]->titolo);
			printf("%d",vf[i]->anno);
			printf("%d",vf[i]->stagioni);
			printf("%f",vf[i]->durataepisodio);
			printf("%f",vf[i]->anno);
			fclose(ff);
	}
}
