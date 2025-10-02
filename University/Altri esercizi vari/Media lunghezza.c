
//Creare un programma che, legga da input un insieme di stringhe. Il programma stampi la media della lunghezza delle stringhe immesse e termini quando la stringa immessa è uguale a "end".

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100

int i, z;
float len=0;
char fine[3]={"end"};
int main()
{
char str[M][M];
printf("Inserire delle stringhe(end per finire):\n");
for(i=0; i<M; i++){
scanf("%s", str[i]);
if((strcmp(fine, str[i]))==0){
z=i; i=M;
 }
len=len+strlen(str[i]);
}
printf("La lunghezza media delle stringhe e`:%f\n", len/z);
}

