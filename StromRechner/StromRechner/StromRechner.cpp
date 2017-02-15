#include <stdio.h>

int main() {

	double U = 0, R = 0, I = 0, P = 0;


	printf("---------------Strom-Rechner--------------------\n");
	printf("Geben Sie die Spannung in Volt an: ");
	scanf("%lf", &U);
	printf("\nGeben Sie den Widerstand in Ohm an: ");
	scanf("%lf", &R);

	I = U / R;
	P = U * I;



	printf("\nEs flie\xe1t ein Strom %.lf mA bei einer Leistung von %.2lf Watt\n", I * 1000, P);

	return 0;
}