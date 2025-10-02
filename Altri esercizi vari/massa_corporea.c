#include<stdio.h>

int main() {
	double peso, altezza, BMI;
	
	printf("Inserire peso\n");
	scanf("%lf", &peso);

	printf("Inserire altezza\n");
	scanf("%lf", &altezza);

	BMI = peso / (altezza*altezza);

	printf("BMI: %.3lf\n", BMI);

	return 0;
}