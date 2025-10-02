#include<stdio.h>

int main() {
    char blocks[3] = {'A','B','C'};
    char *ptr = &blocks[0];
    char temp;
    
    temp = blocks[0];
    printf("%c\n", temp);
    temp = *(blocks + 2);
    printf("%c\n", temp);
    temp = *(ptr + 1);
    printf("%c\n", temp);
    temp = *ptr;
    printf("%c\n", temp);
    
    printf("\n");

    ptr = blocks + 1;
    temp = *ptr;
    printf("%c\n", temp);
    temp = *(ptr + 1);
    printf("%c\n", temp);
    
    printf("\n");

    ptr = blocks;
    temp = *++ptr;
    printf("%c\n", temp);
    temp = ++*ptr;
    printf("%c\n", temp);
    temp = *ptr++;
    printf("%c\n", temp);
    temp = *ptr;
    printf("%c\n", temp);
    
    return 0;
}