#include <stdio.h>

int main() {

	float zahl = 0;
	int divisior = 0;
	int rest = 0;

	printf("---------------Modulo Rechner---------------\n\n");
	printf("Geben Sie eine Zahl ein: ");
	scanf("%f", &zahl);
	printf("\nGeben Sie einen Divisor < Zahl ein: ");
	scanf("%i", &divisior);
	
	rest = (int)zahl % divisior;

	printf("\nDer Rest is %i\n", rest);

	return 0;
}