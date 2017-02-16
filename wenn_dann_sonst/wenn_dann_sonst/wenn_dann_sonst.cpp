#include <stdio.h>


int main() {

	int a = 18, b = 20;


	if (a == 18) {
		printf("Du bist genau 18\n");
	} else if (a == 20) {
		printf("Du bist genau 20\n");
	} else {
		printf("Keine Bedingung ist wahr\n");
	}

	if (a < 18 && a > 13) {
		printf("Dann bin ich jugendlich\n");
	}

	if (a < 14) {
		printf("Dann bin ich ein Kind\n");
	}

	return 0;
}