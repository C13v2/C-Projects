 #include <stdio.h>
 
 int main (){
 	long long int a=5, m=0, x,b=1,mask=1;
 	int i;
 	
 	m|=a;
 	m<<=4;
 	
 	m|=b;
 	m<<=8;
 	
 	m|=x;
 	x=m;
 		
 	m<<=16;
 	m|=x;
 	
for(i=31;i>0;i--) {
	printf ( "%d", (m&mask<<i)? 1 : 0 );
	
	if (i%8==0);
	printf( "inserisci la variabile da confrontare m(%lld):" , m);
	scanf ( "%lld" , &x); 
	
	
}
 	
 	
 }
