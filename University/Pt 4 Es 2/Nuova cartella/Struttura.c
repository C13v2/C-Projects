
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define MAXLEN 100

struct libri
{
	char libro[MAXLEN];
	char autore[MAXLEN];
	int anno;
	int costo;
};

typedef struct libri libri;
int stampa(libri bv[], int d);
int media(libri bv[], int d);
int salva(libri bv[], int d);
int read(libri bv[], int d);

int main()
{
	libri bv[100];
	int i;
	float m;
	int ns;

	ns=read(bv,ns); 
	stampa(bv,ns);

	i=ns;
	
	while(i<100)
	{
		printf("Inserisci libro:");
		scanf("%s", bv[i].libro);
		if(strcmp(bv[i].libro,"fine")==0)
		{
			break;
		}
		printf("inserisci autore:");	
		scanf("%s",bv[i].autore);
		printf("inserisci costo:");
		scanf("%d",&bv[i].costo);
		printf("inserisci anno:");
		scanf("%d",&bv[i].anno);
	i++;
	}
	ns=i;

	printf("letti %d libri\n", i);
	stampa(bv,ns);
	salva(bv,ns);
	ns=read(bv,ns);
	stampa(bv,ns);
	m=media(bv,ns);
	printf("\n\n la media è %f\n\n", m);

	

}

int stampa(libri bv[], int d)
{
	int i;
	for(i=0; i<d; i++)
	{
		printf("libro:%s\n",  bv[i].libro);
		printf("autore:%s\n",  bv[i].autore);
		printf("costo:%d\n", bv[i].costo);
		printf("anno:%d\n", bv[i].anno);
		
	}


}

int media(libri bv[], int d)
{
	int i;
	float m;
	float s=0;
	for(i=0; i<d; i++)
	{
		s=s+bv[i].costo;
	}

		m=s/i;
return m;
}



int salva(libri bv[], int d)
{
	int i;
	char filename[100];
	FILE *fp;
	printf("\ninserisci nome del file\n");
	scanf("%s", filename);
	fp=fopen(filename, "a");
	

	for(i=0; i<d; i++)
	{
		if(bv[i].anno>1965)
		{
			fprintf(fp, "%s\n%s\n%d\n%d\n", bv[i].libro, bv[i].autore,bv[i].costo, bv[i].anno );
		}
	}

	fclose(fp);
	return 0;
}  


int read(libri bv[], int d)
{	
		int i;
		int out;
		char filename[100];
		FILE *fp;
		
		printf("Input filename\n");
		scanf("%s", filename);
		fp= fopen(filename, "r");
		//assert(fp!=NULL);
		
	if(!fp)
	{
		printf("i can't open file\n");
		return 0;
	}

	for(;;)
	{
		out = fscanf(fp," %s%s%d%d", bv[d].libro,bv[d].autore,  &bv[d].anno,&bv[d].costo);
		//printf("out = %d\n", out);
		

		if ( out <0)
			{
			break;
			}
		fprintf(fp,"Read from file : %s\n%s\n%d\n%d\n",bv[d].libro,bv[d].autore,  bv[d].costo,bv[d].anno);
		d++;
		
	}
	fclose(fp);
	return d;



}
		
	


