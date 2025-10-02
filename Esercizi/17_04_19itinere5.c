#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int dims=20, dimv, i, dimtot=0;
    printf("Quante parole?");
    scanf("%d", &dimv);

    char *vs[dimv];
    char *strtot;

    for(i=0; i<dimv; i++)
    {
        vs[i]=calloc(dims, sizeof(char));
    }

    puts("Inserisci una frase\n");

    for(i=0; i<dimv; i++)
    {
        scanf("%s", vs[i]);
        dimtot+=strlen(vs[i]);
    }
    dimtot+=dimv;
    //printf("%d\n", dimtot);
    strtot=calloc(dimtot, sizeof(char));


    for(i=0; i<dimv; i++)
    {
        strcat(strtot, vs[i]);
        strcat(strtot, " ");
    }
    puts(strtot);
}

