#include <stdio.h>

int main() {
	char a[100];
	
	printf("Introduci la stringa: ");
	scanf("%[^\n]", a);

	int maius=0, minus=0, cifre=0, altro=0;
	
	for (int i = 0; a[i]!='\0'; ++i){
		if (a[i] >= 'A' && a[i] <= 'Z')
			maius++;
		else if (a[i]>='a' && a[i] <= 'z')
			minus++;
		else if (a[i]>='0' && a[i] <= '9')
			cifre++;
		else
			altro++;
	}
	printf("Maiuscole: %d\n", maius);
	printf("Minuscole: %d\n", minus);
	printf("Cifre:     %d\n", cifre);
	printf("Altri:     %d\n", altro);

	return 0;
}