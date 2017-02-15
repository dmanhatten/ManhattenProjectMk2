#include <stdio.h>

int main() {

	float nettoBetrag = 0, bruttoBetrag = 0;
	int steuersatz = 0;

	printf("---------------Brutto Rechner---------------\n\n");
	printf("Geben Sie einen Netto Betrag an: ");
	scanf("%f", &nettoBetrag);

	printf("\nGeben Sie einen Steuersatz als Ganzzahl ein: ");
	scanf("%i", &steuersatz);

	bruttoBetrag = nettoBetrag * (1 + (float)steuersatz / 100);
	printf("\nDer Bruttobetrag lautet: %.2f\n", bruttoBetrag);

	
	return 0;
}