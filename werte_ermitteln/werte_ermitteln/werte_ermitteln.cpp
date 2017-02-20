#include <stdio.h>


int main() {

	for (int i = 1; i < 101; i++) {
		printf("%i", i);
		if (i % 3 == 0 && i % 5 == 0) {
			printf(" ist durch 3 und 5 teilbar");
		} else if (i % 3 == 0) {
			printf(" ist durch 3 teilbar");
		} else if (i % 5 == 0) {
			printf(" ist durch 5 teilbar");
		}
		printf("\n");
	}

	return 0;
} 