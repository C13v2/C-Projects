#include <stdio.h>
#include <string.h>

#define N 20
#define M 30

typedef struct {
	char cognome[30];
	char nome[20];
	int errori;
}alunno;

alunno alunni[N];
int quiz[M];
int risposte[N][M]; 

void insert()
{
	int i,j;
	
	for (i=0; i<N; i++){
		printf("Inserisci il cognome dell'alunno: ");
		scanf("%s", alunni[i].cognome);
		printf("Inserisci il nome dell'alunno: ");
		scanf("%s", alunni[i].nome);		
	}
	
	//caricamento risposte corrette nell'array quiz
	printf("\nCarichiamo il quiz con le risposte corrette!\n");
	for (i=0; i<M; i++){
		printf("Inserisci la risposta esatta alla domanda %d: ", i+1);
		scanf("%d", &quiz[i]);		
	}
	
	//caricamento risposte alunni nella matrice risposte
	printf("\nCarichiamo le risposte al quiz date dagli alunni! ");
	for (i=0; i<N; i++){
		printf("\nInserisci le risposte dell'alunno: %s %s\n", alunni[i].cognome, alunni[i].nome);
		for (j=0;j<M; j++) {
			printf("Inserisci risposta domanda %d: ", i+1);
			scanf("%d", &risposte[i][j]);
		}	
	}
}

int menu()
{
  int selezione = 0;
  do
    {
    printf("\n" );
    printf("\n1 - Visualizza esiti " );
    printf("\n2 - Risposte date");
    printf("\n3 - Ricerca per alunno");
    printf("\n4 - Esci");
    printf("\n" );
    printf("\nEffettua una scelta: " );
    scanf("%d", &selezione );
    }
    while (selezione < 1 || selezione > 4);
  return selezione;
}

void stampaAlunno()
{ 
	char cognome[40];
	int i,j, trovato=0;
	
	for(i=0;i<N;i++)
		alunni[i].errori=0;	//azzeriamo gli errori
		
	printf("\nQuale alunno cerchi?:");
 	scanf("%s", cognome);
 	
	for (i=0; i<N; i++){
	 	if(strcmp(alunni[i].cognome,cognome)==0) {
	 		printf("\n\n Nome: %s\n Risposte date: ", alunni[i].nome);
	 		
	 		for (j=0;j<M; j++) {
	 			printf(" %d ", risposte[i][j]);
				if (risposte[i][j]!=quiz[j])
					alunni[i].errori=alunni[i].errori+1;
				}
			printf("\n Errori totali: %d ", alunni[i].errori);
			if (alunni[i].errori<N)
				printf("\n Esame superato!");
			else
				printf("\n Esame non superato, studia e riprova!");
	 		trovato=1;
		 }
 	}
 	if (trovato==0) 
		 	printf("\nNon e' presente nessun alunno:");
}


void print_error(){
	int i, j;
	for(i=0;i<N;i++)
		alunni[i].errori=0;	//azzeriamo gli errori
	
	for (i=0; i<N; i++){
		for (j=0;j<M; j++) 
			if (risposte[i][j]!=quiz[j])
				alunni[i].errori=alunni[i].errori+1;
		printf("\nAlunno %s, errori %d", alunni[i].cognome, alunni[i].errori);		
		}
}


void risposte_date(){
	int i, j;

	for(i=0;i<N;i++)
		alunni[i].errori=0;	//azzeriamo gli errori
	
	for (i=0; i<N; i++){
	printf("\nAlunno %s. \nRisposte date: ", alunni[i].cognome);
		for (j=0;j<M; j++) 
			printf("\nDomanda %d - risposta data: %d - la risposta corretta era: %d", j+1, risposte[i][j], quiz[j]);
		}	
}

int main()
{
    int scelta;
    insert();

    while((scelta=menu())!=4){
    switch(scelta){
        case 1: 
            print_error();
            break;
        case 2:
            risposte_date();
            break;
        case 3: 
	     stampaAlunno();
	     break;
	case 4: 
	     break;
             }
    }             
    return 0;
}
