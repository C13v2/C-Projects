#include<stdio.h>

int main() {
	int n = 100;
	char a[n];
	printf("Introduci la stringa: ");
	scanf("%[^\n]", a);

	int len=0, i=0;
	while(a[i]!='\0'){
		++len;
		++i;
	}

	int diverso = 0;
	for (i = 0; i<len && diverso==0; ++i){
		if (a[i] != a[len-1-i])
			diverso = 1;
	}
	
	if (diverso==0)
		printf("Palindroma\n");
	else
		printf("Non palindroma\n");

   return 0;
}