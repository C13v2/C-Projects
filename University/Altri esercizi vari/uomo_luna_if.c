#include<stdio.h>

int main(void) {
	
    int anno;
    printf("Inserisci il tuo anno di nascita\n");
    scanf("%d", &anno);

    if(anno==1969)
        printf("Sei nato lo stesso anno dello sbarco sulla luna\n");

    if(anno<1969)
        printf("Sei nato %d anni prima dello sbarco sulla luna\n", 1969-anno);

    if(anno>1969)
        printf("Sei nato %d anni dopo lo sbarco sulla luna\n", anno-1969);
    
    return 0;
}