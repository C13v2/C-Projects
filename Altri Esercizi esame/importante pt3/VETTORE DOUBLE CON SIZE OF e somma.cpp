#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	srand(time(NULL));
	int dim = rand()%30;
	double sum=0 ;
	double *pv=calloc(dim,sizeof(double));
	printf("verranno creati %d elementi",dim);
	
	for(dim>=0;dim--){
		*(pv+dim)=rand()%100/1.1;
		sum+=*(pv+dim);
		printf("%d)%.3lf\t%p\n",dim,*(pv+dim),(pv+dim));
	}
	printf("La somma dei numeri è %.3lf",sum);
}
