#include <stdio.h>

int main() {

	unsigned short alter = 0;

	printf("Alter eingeben: ");
	scanf("%hi", &alter);

	if (alter >= 21) {
		printf("Erwachsener\n");
	} else if (alter >= 18) {
		printf("Heranwachsender\n");
	} else if (alter >= 14) {
		printf("Jugendlicher\n");
	} else {
		printf("Kind\n");
	}

	return 0;
}