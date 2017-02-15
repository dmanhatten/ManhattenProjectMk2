#include <stdio.h>

int main() {

	unsigned int n = 0;

	printf("Bitte geben Sie eine dreistellige Zahl ein: ");
	scanf("%u", &n);
	
	n = n % 256; // nur Codes bis 256 zulassen

	printf("Das Zeichen %c\n", n);
	printf("Die Hexdezimalzahl %x\n", n);

	return 0;
}