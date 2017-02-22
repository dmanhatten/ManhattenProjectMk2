#include <stdio.h>

int main() {

	/*
	int i = 1;
	while (i <= 100) {
		printf("Quadratzahl von %i ist %i\n", i, i * i);
		i++;
	}
	*/
	
	double f = 1;
	int n = 0;

	printf("Bitte geben Sie eine Ganzzahl ein: ");
	scanf("%i", &n);

	for (int i = 1; i <= n; i++) {

		f *= i;
	}

	printf("%i != %.f\n", n, f);

}