#include <stdio.h>

const double PI = 3.141593;

double fVolumen(double hoehe, double durchmesser);


int main() {

	double hoehe = 0, durchmesser = 0, volumen = 0;

	printf("Bitte geben Sie die Hoehe des Zylinders in cm ein: ");
	scanf("%lf", &hoehe);
	printf("Bitte geben Sie den Durchmesser des Zylinders in cm ein: ");
	scanf("%lf", &durchmesser);
	volumen = fVolumen(hoehe, durchmesser);
	printf("Das Volumen des Zylinders betraegt %.2lf ccm.\n", volumen);

	return 0;
}

double fVolumen(double hoehe, double durchmesser) {

	double volumen = PI * durchmesser* durchmesser * hoehe / 4;

	return volumen;
}