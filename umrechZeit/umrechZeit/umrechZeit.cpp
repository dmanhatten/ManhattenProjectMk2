#include <stdio.h>

int umrechZeit();

int main() {

	umrechZeit();

	return 0;
}

int umrechZeit() {
	unsigned int sekunden = 0, minuten = 0, stunden = 0, tage = 0;

	printf("Bitte Sekunden eingeben: ");
	scanf("%u", &sekunden);

	minuten = sekunden / 60;
	sekunden = sekunden % 60;
	stunden = minuten / 60;
	minuten = minuten % 60;
	tage = stunden / 24;
	stunden = stunden % 24;

	printf("%u Tage %u Stunden %u Minuten %u Sekunden\n", tage, stunden, minuten, sekunden);

	return 0;
}