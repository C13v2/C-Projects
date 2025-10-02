#include<stdio.h>

int main(void){
	int n;
	printf("Inserire il numero di corridori\n");
	scanf("%d", &n);

	unsigned int i = 0;
	float player_time;
	
	unsigned int first, second;
	float minTime1=999, minTime2=999;

	while(i<n){
		printf("Inserire tempo impiegato dall'atleta %d: \n", i);
		scanf("%f", &player_time);

		if(player_time <= minTime2){
			if (player_time < minTime1){
				minTime2 = minTime1;
				minTime1 = player_time;
				second = first;
				first = i; 
			} else {
				minTime2 = player_time;
				second = i;
			}
		}
		i++;
	}

	printf("Il primo classificato è l'atleta %d con un tempo di %f\n", first, minTime1);
	printf("Il secondo classificato è l'atleta %d con un tempo di %f \n", second, minTime2);
	
	return 0;
}