#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int i, dim=8;
	double v[dim];
	double *pv=&v[0];
	srand(time(NULL));
	for (i=0;i<dim;i++){
		*(pv+i) = rand ()%13/1.1;
		}
		for(i=0;i<dim;i++){
			printf("%d)%3lf\t%p\n",i+1,*(pv+i),(pv+i));
		}
}
