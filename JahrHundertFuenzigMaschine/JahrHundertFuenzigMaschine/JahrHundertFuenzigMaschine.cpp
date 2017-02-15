#include <stdio.h>

int main() {

	int alter = 0, partner = 0, tv = 0;
	int restZeit = 150;
	float bitcoin = 0;

	printf("++++++++++++++++++JahrHundertF\x81nzigMaschine+++++++++++++++\n\n");
	printf("Jeder der dieses Programm startet wird 150 Jahre alt!\n"
		"Geben sie ihr Alter in Jahren ein und best\x84tigen sie mit Enter\n"
		"Alter in Jahren : ");
	scanf("%i", &alter);
	restZeit -= alter;
	printf("\nPrima sie haben noch %i Jahre vor sich!\n", restZeit);
	printf("Nun wie viele Ehepartner, Freunde oder Freundinnen hatten sie bis jetzt?\n"
		"Geben sie die Anzahl der Ehepartner, Freunde oder Freundinnen ein und\n"
		"best\x84tigen sie mit Enter.\n\n"
		"Anzahl Partner: ");
	scanf("%i", &partner);
	restZeit -= partner * 10;
	printf("%i ist ok, weniger ist manchmal mehr.\n\n"
		"Leider muss ich ihnen f\x81r Ihre %i Partner %i Jahre abziehen.\n\n"
		"Ihre aktuelle zu erwartende Lebenszeit betr\x84gt %i Jahre\n\n", partner, partner,  partner * 10, restZeit);
	printf("Wieviel Stunden sitzen sie am Tag vor dem Monitor oder TV?\n\n"
		"Geben sie die Anzahl der Medien Stunden ein und best\x84tigen sie mit Enter\n"
		"Anzahl der Medien Stunden: ");
	scanf("%i", &tv);
	restZeit += tv * 100;
	printf("Das ist normal %i Stunden genau richtig und gesund, dadurch erhöht sich Ihre\n"
		"Lebenszeit erneut um %i Jahre.\n\n", tv, tv * 100);
	printf("Ihre aktuell zu erwartende Lebenszeit betr\x84gt jetzt: %i Jahre\n\n", restZeit);
	printf("Die Differenz zu Ihrem aktuellen Alter betr\x84gt daher %i Jahre\n\n", restZeit - alter);
	bitcoin = (restZeit - alter) * 0.95f;
	printf("Bitte \x81\x62\erweisen sie 0.95 Bitcoin pro Jahr, gesamt %.2f Bitcoin an\n"
		"euroguenther@euro.de damit das l\x84uft.\n\n"
		"Vielen Dank Ihr Guenther\n", bitcoin);



	return 0;
}