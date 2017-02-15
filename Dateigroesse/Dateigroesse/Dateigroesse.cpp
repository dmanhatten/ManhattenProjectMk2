#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

	printf("---------------Dateigrößen---------------\n\n");
	printf("Der Datentyp int hat die Dateigr\x99\xe1\e von %i Bit.\n"
		"Min Wert: %i\n"
		"Max Wert: %i\n\n", sizeof(int), INT_MIN, INT_MAX);

	printf("Der Datentyp float hat die Dateigr\x99\xe1\e von %i Bit.\n"
		"Min Wert: %e\n"
		"Max Wert: %e\n"
		"Genauigkeit: %i\n", sizeof(float), FLT_MIN, FLT_MAX, FLT_DIG);

	return 0;
}