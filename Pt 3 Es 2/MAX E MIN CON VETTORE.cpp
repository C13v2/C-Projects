#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int i=0,dim,min,max;
	printf("Inserisci la dimensione del vettore\t");
	scanf("%d",&dim);
	int vettore[dim];
	do{
		printf("inserisci gli elementi\t");
		scanf("%d",&vettore[i]);
		i++;
	}
	while(i<dim);
	printf("\tElementi inseriti\t");
		for(i=0;i<dim;i++){
			printf("%d",vettore[i]);
					}
					for(i=0;i<dim;i++){
						if(i==0){
							min=vettore[i];
							max=vettore[i];
						}
						if(vettore[i]<min){
							min=vettore[i];
							
						}
						if(vettore[i]>max){
							max=vettore[i];
						}
					}printf("\n Il minimo è %d\n Il massimo è%d\n",min,max);
}
