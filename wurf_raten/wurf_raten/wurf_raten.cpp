#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

	int wurf = 0, uZahl = 0, i = 0;

	srand(time(NULL));
	

	do {
		do {
			printf("Bitte raten Sie eine Zahl zwischen 1 und 6\n");
			scanf("%i", &uZahl);
		} while (uZahl < 1 || uZahl > 6);
		wurf = rand() % 6 + 1; // 1 - 100
		printf("Es wurde ein %i gewuerfelt.\n", wurf);
		printf("Du hast ein %i gerraten\n", uZahl);

		if (wurf != uZahl) {
			printf("Du hast falsch geraten!\n\n");
		}

		i++;		
	} while (wurf != uZahl);
	
	printf("Du hast die Zahl erraten und %i Versuche gebraucht.\n\n", i);

	return 0;
}