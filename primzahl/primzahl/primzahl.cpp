#include <stdio.h>

int main() {

	int uZahl = 0, i = 2;

	printf("Geben Sie eine Zahl ein.\n");
	scanf("%i", &uZahl);


	for (i = 2; i <= uZahl / 2; i++) {
		if (uZahl % i == 0) {
			break;
		}
	}

	if ((uZahl % i == 0 || uZahl == 1) && uZahl != 2) {
		printf("%i ist keine Primzahl.\n", uZahl);
	} else {
		printf("%i ist eine Primzahl.\n", uZahl);
	}




	return 0;
}