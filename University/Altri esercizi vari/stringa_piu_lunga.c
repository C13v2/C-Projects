#include<stdio.h>

int main(){
	int capacita = 100;
	char stringa1[capacita], stringa2[capacita];

	printf("Inserire la prima stringa\n");
	scanf("%[^\n]", stringa1);

	printf("Inserire la seconda stringa\n");
	scanf(" %[^\n]", stringa2);

	int len1=0, i=0;
	while(stringa1[i]!='\0'){
		++len1;
		++i;
	}

	int len2=0;
	i=0;
	while(stringa2[i]!='\0'){
		++len2;
		++i;
	}

	if (len1 == len2){
		printf("Le stringhe hanno la stessa lunghezza\n");
	} else if (len1 > len2){
		printf("%s\n", stringa1);
	} else {
		printf("%s\n", stringa2);
	}

	return 0;
}