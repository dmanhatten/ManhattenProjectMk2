#include <stdio.h>

int main() {

	float wechselkurs = 0;
	float betrag = 0;
	float neuerBetrag = 0;

	printf("---------------Wechselkurs---------------\n\n");
	printf("Geben Sie den Wechselkurs f\x81r Euro In Dollar an.\n\n");
	printf("Wechselkurs: ");
	scanf("%f", &wechselkurs);
	printf("\nGeben Sie den Betrag zur Umrechnung ein: ");
	scanf("%f", &betrag);

	neuerBetrag = betrag * wechselkurs;

	printf("Das Ergebnis lautet: %.2f\n", neuerBetrag);


	return 0;
}