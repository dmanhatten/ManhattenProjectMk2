#include <stdio.h>


int main() {

	int groesse = 0, bmi = 0;
	int gewicht = 0;
	char geschlecht = 0;

	printf("Geben Sie Ihr Geschlecht ein (m oder w): ");
	scanf("%c", &geschlecht);
	printf("Geben Sie Ihre Groesse in cm ein: ");
	scanf("%i", &groesse);
	printf("Geben Sie Ihr Gewicht in kg ein: ");
	scanf("%i", &gewicht);

	bmi = gewicht / ((groesse / 100.f) * (groesse / 100.f));

	printf("Ihr BMI ist %i. ", bmi);

	if (geschlecht == 'm' || geschlecht == 'M') {

		if (bmi >= 26 && bmi <= 30) {
			printf("Sie haben Uebergewicht.\n");
		} else if (bmi >= 20 && bmi <= 25) {
			printf("Sie haben Normalgewicht.\n");
		} else if (bmi < 20) {
			printf("Sie haben Untergewicht.\n");
		}

	} else {
		if (bmi >= 25 && bmi <= 30) {
			printf("Sie haben Uebergewicht.\n");
		} else if (bmi >= 19 && bmi <= 24) {
			printf("Sie haben Normalgewicht.\n");
		} else if (bmi < 19) {
			printf("Sie haben Untergewicht.\n");
		} 
	}

	return 0;
}