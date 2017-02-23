#include <stdio.h>
#include <math.h>

const double PI = 3.141593;

double fHoehe(double schattenlaenge, double winkel);

int main() {

	double schattenlaenge = 0, winkel = 0, turmhoehe = 0;

	printf("Bitte geben Sie die Schattenlaenge in m ein: ");
	scanf("%lf", &schattenlaenge);
	printf("Bitte geben Sie den Winkel, den die Sonne zur Ebene bildet in Grad ein: ");
	scanf("%lf", &winkel);
	turmhoehe = fHoehe(schattenlaenge, winkel);
	printf("Der Turm ist %.2lf m hoch.\n", turmhoehe);

	return 0;
}

double fHoehe(double schattenlaenge, double winkel) {

	double winkelImBogenmass = winkel * (PI / 180);
	double turmhoehe = schattenlaenge * tan(winkelImBogenmass);

	return turmhoehe;
}