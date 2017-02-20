#include <stdio.h>

int main() {

	unsigned int uZahl = 0, q = 1;

	printf("Bitte geben Sie eine Ganzzahl ein.\n");
	scanf("%u", &uZahl);

	while (q * q < uZahl) {
		q++;
	}

	if (q * q == uZahl) {
		printf("%u ist die Quadratzahl von %u.\n", uZahl, q);
	} else {
		printf("%u ist keine Quadratzahl.\n", uZahl);
	}

}