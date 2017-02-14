#include <stdio.h>
#include <math.h>

int main() {

	double kreditbetrag = 0, zinssatz = 0;
	int laufzeit = 0;
	double belastung = 0, q = 0;

	printf("Kreditbetrag: ");
	scanf("%lf", &kreditbetrag);
	printf("Laufzeit in Monaten: ");
	scanf("%i", &laufzeit);
	printf("Zinssatz: ");
	scanf("%lf", &zinssatz);

	q = 1 + (zinssatz / 100) / 12;
	belastung = kreditbetrag * pow(q, laufzeit) * (q - 1) / (pow(q, laufzeit) - 1);
	printf("Monatliche Belastung: %.2lf\n", belastung);

	return 0;
}