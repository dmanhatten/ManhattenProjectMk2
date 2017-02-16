#include <stdio.h>

int main() {

	char art = ' ';
	int betrag = 0;
	float endBetrag = 0;


	printf("Typ der Ware (L = Lebensmittel, K = Kleidung): ");
	scanf("%c", &art);
	printf("Betrag: ");
	scanf("%i", &betrag);	


	if (art == 'L' || art == 'l') {
		endBetrag = betrag * 1.07f;
	} else if (art == 'K' || art == 'k') {
		endBetrag = betrag * 1.19f;
	} else {
		printf("Ungueltige Eingabe\n");
		return 0;
	}

	printf("Betrag: %.2f\n", endBetrag);

	return 0;
}