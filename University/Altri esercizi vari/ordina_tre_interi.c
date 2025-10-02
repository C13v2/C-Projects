#include<stdio.h>

int main(void) {
	int n1, n2, n3, t=0;

	printf("Inserisci 3 numeri\n");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	//porto il numero minore in n1
	if((n1<=n2)&&(n1<=n3)){
    	// n1 è già il minore dei tre, non faccio nulla
    }

    if((n2<=n1)&&(n2<=n3)){
		t=n2;
		n2=n1;
		n1=t;
	}

	if((n3<=n2)&&(n3<=n1)){
		t=n3;
		n3=n1;
		n1=t;
	}

	// Verifico se n2 e n3 sono in ordine altrimenti li scambio
	if(n3<n2) {
	    t=n2;
	    n2=n3;
	    n3=t;
	}

	printf("(n1 < n2 < n3) -> (%d < %d < %d)\n", n1, n2, n3);
	return 0 ;
}