//0011 0011 0011 0011 0011 0011 0011 0011

#include<stdio.h>
int main(){

long long int a=3, m ,mask=1, x;
int i;
 m<<4; m|=a;
 
 printf("%lld", m);
 
 for(i=31;i>0;i--){
 	printf("%d", (m&mask<<i) ? 1 : 0);
 	if(i%8==0)
 		printf(" ");
	  }
do{
	
	printf("inserisci variabile");
	scanf("%lld", &x);
	printf("la variabile inserita", (m^x) ? "e" : "non e");
}while((x&m)!=m);

}
