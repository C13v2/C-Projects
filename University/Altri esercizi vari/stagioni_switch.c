#include <stdio.h>

int main () {
    int mese, giorno;
    
    printf("Inserisci il numero del mese: "); 
    scanf("%d", &mese);

    switch (mese) {
        case 1: case 2: 
            printf("Inverno!\n");
            break;
        case 4: case 5: 
            printf("Primavera!\n"); 
            break;
        case 7: case 8: 
            printf("Estate!\n");
            break;
        case 10: case 11: 
            printf("Autunno!\n"); 
            break;
        case 3: 
            printf("Inserire anche il giorno: "); 
            scanf("%d", &giorno);
            if (giorno >= 1 && giorno <= 20)
                printf("Inverno!\n"); 
            else 
                printf("Primavera!\n");
            break;
        case 6: 
            printf("Inserire anche il giorno: ");
            scanf("%d", &giorno);
            if (giorno >= 1 && giorno <= 20) 
                printf("Primavera!\n");
            else 
                printf("Estate!\n");
            break;
        case 9: 
            printf("Inserire anche il giorno: ");
            scanf("%d", &giorno);
            if (giorno >= 1 && giorno <= 20) 
                printf("Estate!\n"); 
            else 
                printf("Autunno!\n");
            break;
        case 12: 
            printf("Inserire anche il giorno: ");
            scanf("%d", &giorno);
            if (giorno >= 1 && giorno <= 20) 
                printf("Autunno!\n"); 
            else 
                printf("Inverno!\n");
            break;
        default: 
            printf ("Valore errato!");
    }
    return 0; 
}