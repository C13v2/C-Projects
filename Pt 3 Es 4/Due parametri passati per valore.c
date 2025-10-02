#include<stdio.h>
#include<stdlib.h>
int inc (int n) {
	
	n++;
	printf("i interno: %d", n);
	return n;
}

int main(void) {
	int i = 0;
	printf("i: %d", i);
	inc (i);
	printf("i: %d", i);
	
	return 0;
}
