#pragma once

#include <stdio.h>

void volumenRechner() {

	double laenge = 0, breite = 0, hoehe = 0;
	double volumen = 0;

	printf("Eingabe der Laenge [cm]: ");
	scanf("%lf", &laenge);
	printf("Eingabe der Breite [cm]: ");
	scanf("%lf", &breite);
	printf("Eingabe der Hoehe [cm]: ");
	scanf("%lf", &hoehe);

	volumen = laenge * breite * hoehe;

	printf("Das Volumen des Quaders betraegt %.2lf ccm\n", volumen);
}