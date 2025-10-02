#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct meteo {
		int temperatura;
		int umidita;
	}meteo;
	
	int t=0,u=0,r=0;
	char nuovarilevazione;
	
	do{
		printf("inserisci temperatura: " );
		scanf("%d", &meteo.temperatura);
		printf("inserisci umidita: " );
		scanf("%d" , &meteo.umidita);
		
		printf("temp: %d" , meteo.temperatura );
		printf("\numidit : %d " , meteo.umidita);
		
		t=t+meteo.temperatura;
		u=u+meteo.umidita;
		r++;
		
		printf( "\n nuova rilevazione? S/N");
		scanf("%c" , &nuovarilevazione);
		}
	while (nuovarilevazione == 's' || nuovarilevazione =='S');
	
			if(meteo.umidita<40) {
			file=fopen("umidita.txt", "w");
			if( file==NULL ) {
    			perror("Errore in apertura del file");
    			exit(1);
			}
			fprintf(file, "Umidita':%d\n", meteo.umidita);
			fclose(file);
		}
		
		t=t+meteo.temperatura;
		u=u+meteo.umidita;
		r++;
		printf("\nInserire una nuova rilevazione? [S/N]");
		getchar();
		scanf("%c",&nuovarilevazione);

	} while (nuovarilevazione=='s' || nuovarilevazione=='S');
	
	printf("La media delle temperature e' %d\n", t/r);
	char leggere;
	printf("Vuoi leggere i dati dal file? S/N");
	getchar();
	scanf("%c",&leggere);
	if (leggere=='s' || leggere=='S'){
		file=fopen("umidita.txt", "r");
		char stringa[15];
	    fscanf(file, "%s", &stringa);
        printf("%s", stringa);
    }

	
}
