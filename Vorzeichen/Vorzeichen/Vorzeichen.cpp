#include <stdio.h>

int main() {


	int zahl = 0;

	printf("Geben Sie eine Zahl ein: ");
	scanf("%i", &zahl);

	if (zahl >= 0) {
		printf("Die Zahl ist positiv\n");
	} else {
		printf("Die Zahl ist negativ\n");
	}


	return 0;
}