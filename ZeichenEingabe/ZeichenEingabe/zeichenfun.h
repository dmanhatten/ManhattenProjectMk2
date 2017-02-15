#pragma once

#include <stdio.h>


void zeichenEingeben() {

	char zeichen = 0;
	float f = 0;
	int oktal = 0;
	int hexa = 0;

	printf("Geben Sie ein Zeichen ein: ");
	scanf("%c", &zeichen);

	printf("Geben Sie ein Float ein: ");
	scanf("%f", &f);

	printf("Geben Sie eine Oktalzahl ein: ");
	scanf("%o", &oktal);

	printf("Geben Sie eine Hexadezimalzahl ein: ");
	scanf("%x", &hexa);

	printf("\nIhre Eingabe: %c, %.2f, %o, %X\n\n", zeichen, f, oktal, hexa);

	printf("Der int Wert des Zeichens: %i\n", zeichen);
	printf("Die Oktalzahl als Hexadezimalzahl: %x\n", oktal);
	printf("Der Float Wert mit der Form 00.00: %05.2f\n", f);

}