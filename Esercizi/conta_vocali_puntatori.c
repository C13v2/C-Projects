#include <stdio.h>

int main(){
    
    int capacità = 100;
    char str1[capacità];

    printf("Inserire una stringa: ");
    scanf("%[^\n]", str1);

    char *ptr = str1;
    
    int vocali=0, altri=0;
    while(*ptr!='\0'){
        if(*ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U') 
            vocali++;
        else if (*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u')
            vocali++;
        else
            altri++;
        ++ptr;
    }
     
    printf("Numero di vocali: %d\nAltri caratteri: %d\n", vocali, altri);    

    return 0;
}