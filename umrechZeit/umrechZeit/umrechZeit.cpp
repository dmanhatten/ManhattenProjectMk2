#include <stdio.h>

int umrechZeit();

int main() {

	umrechZeit();

	return 0;
}

int umrechZeit() {
	int sekunden = 0;
	int minuten = 0;
	int stunden = 0;
	int tage = 0;

	printf("Bitte Sekunden eingeben: ");
	scanf("%i", &sekunden);

	minuten = sekunden / 60;
	sekunden = sekunden % 60;
	stunden = minuten / 60;
	minuten = minuten % 60;
	tage = stunden / 24;
	stunden = stunden % 24;

	printf("%i Tage %i Stunden %i Minuten %i Sekunden\n", tage, stunden, minuten, sekunden);

	return 0;
}