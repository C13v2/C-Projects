#include<stdio.h>

int main(void) {
	
    char a, b, c;
    printf("Inserisci tre caratteri\n");
    scanf("%c%c%c", &a, &b, &c);

	if(a<=c) {
		if(b>=a){
			if(b<=c)
				printf("compreso\n");
			else
				printf("non compreso\n");
		} else
			printf("non compreso\n");
	} else {
		if(b>=c) {
			if(b<=a)
				printf("compreso\n");
			else
				printf("non compreso\n");
		} else
			printf("non compreso\n");   
	}
    
    return 0;
}