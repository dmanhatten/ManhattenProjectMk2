#include <stdio.h>
#include <string.h>

int main() {

	float a, b, e;
	char c;
	char d[40];

	// Alternative zu Wenn dann sonst bei Fragen des Vergleiches

	printf("Bitte geben Sie die erste Zahl ein\n");
	scanf("%f", &a);
	printf("Bitte geben Sie die zweite Zahl ein\n");
	scanf("%f", &b);
	printf("Bitte geben Sie die Art der Berechung ein (+, -, *, /)\n");
	scanf(" %c", &c);
	switch (c) {
	case '+':
		e = a + b;
		strcpy(d, "Addition");
		break;
	case '-':
		e = a - b;
		strcpy(d, "Subtraktion");
		break;
	case '*':
		e = a * b;
		strcpy(d, "Multiplikation");
		break;
	case '/':
		e = a / b;
		strcpy(d, "Division");
		break;
	default:
		strcpy(d, "Keine gueltige Operation");
		e = 0, a = 0, b = 0, c = 0;
	}

	printf("Operation = %s\n%5.2f %c %5.2f ist %5.2f.\n", d, a, c, b, e);


	return 0;
}