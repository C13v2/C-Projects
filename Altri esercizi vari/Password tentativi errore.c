
 // Creare un programma che implementi un meccanismo di password. All’utente vengono date 5 possibilità per inserire la password. Se la parola chiave è corretta verrà stampato il messaggio “utente riconosciuto”. Se i tentativi effettuati sono più di cinque il programma dovrà terminare stampando un messaggio di errore.
 
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define x 100

int i, t=0, a=0, len1, len2;
int main()
{
char psw[x];
char try[x];
printf("Inserire una password\n");
scanf("%s", psw); //prende la prima stringa
len1=strlen(psw);
printf("Psw salvata\n");
 while(t<5){ //cicla 5 volte
printf("Inserire la password per accedere\n");
scanf("%s", try); //prende la seconda stringa
len2=strlen(try);
if(len1==len2){
 for(i=0; i<len1; i++) {
if(psw[i]==try[i]){
a++; } //salva il numero di bit corretti
}t++;
if(a==len1){
 printf("Utente riconosciuto\n"); exit(0); }
else
printf("Password errata\n"); a=0;
 }
else if(len1<len2) printf("Password troppo lunga\n");
else printf("Password troppo corta\n");
}
 if(t=5){
printf("ERRORE!\nTroppi tentativi\n"); }
}
