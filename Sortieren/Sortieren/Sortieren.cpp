#include <stdio.h>

int main() {

	int a = 0, b = 0, c = 0;
	int tmp = 0;

	printf("Eingabe a: ");
	scanf("%i", &a);
	printf("Eingabe b: ");
	scanf("%i", &b);
	printf("Eingabe c: ");
	scanf("%i", &c);
	
	if (a > b) {
		tmp = b;
		b = a;
		a = tmp;
	}
	if (a > c) {
		tmp = c;
		c = a;
		a = tmp;
	}
	if (b > c) {
		tmp = c;
		c = b;
		b = tmp;
	}

	printf("a = %i\n"
		"b = %i\n"
		"c = %i\n", a, b, c);

	return 0;
}