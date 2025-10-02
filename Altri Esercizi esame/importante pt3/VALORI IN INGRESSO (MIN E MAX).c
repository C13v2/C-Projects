#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void minmax(int num1,int num2,int *min,int*max);
int main(){
	int a,b,M,m;
	printf("Inserisci 2 numeri:\n");
	scanf("%d %d",&a,&b);
	
	minmax(a,b,&M,&m);
	printf("Il massimo è:%d\n\n Il minimo è %d",M,m);
	}
	voidminmax(int num1,int num2,int *max,int *min){
		int tmp;
		if(num1<num2){
			*max=num1; *min=num2;
		}	
		else {
			*max=num2; *min=num1;
		}
	
}

