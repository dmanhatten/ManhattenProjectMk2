#include <stdio.h>

int nettoRechner();

int main() {

	nettoRechner();

	return 0;
}

int nettoRechner() {
	double brutto = 0.0, mwst = 0.0, netto = 0.0;

	printf("----------------Netto Rechner---------------\n");
	printf("Geben Sie den Brutto Betrag ein: ");
	scanf("%lf", &brutto);
	printf("Geben Sie den Mehrwertsteuersatz ein: ");
	scanf("%lf", &mwst);
	netto = brutto / (1 + (mwst / 100));
	printf("Bruttobetrag: %.2lf\n"
		"Steuersatz: %.2lf\n"
		"Nettobetrag: %.2lf\n", brutto, mwst, netto);

	return 0;
}