#include <stdio.h>
#include <math.h>

int main() {

	unsigned int okt1, okt2, okt3, okt4, uMaske, uMaskeBit, anzahlMoeglicherNetze, benutzerNetze;
	unsigned int anzahlHostsProNetz, anzahlHostsGesamt;

	printf("Bitte geben Sie eine Basisadresse ohne Hostanteil an.\n");
	scanf("%u.%u.%u.%u", &okt1, &okt2, &okt3, &okt4);
	printf("Bitte geben Sie eine Subnetmaske als CIDR an.\n");
	scanf("%u", &uMaske);
	uMaskeBit = 30 - uMaske;
	anzahlMoeglicherNetze = pow(2, uMaskeBit);
	printf("\nSie haben die Moeglichkeit bei einer Subnetzmaske von %u,\n"
		"maximal %u Netze zu erstellen, wobei jedes Netz mindestens 2 Rechner beinhaltet.\n", uMaske, anzahlMoeglicherNetze);

	do {
		printf("Geben Sie die gewuenschte Zahl an Subnetzen an.\n");
		scanf("%u", &benutzerNetze);
	} while (benutzerNetze > anzahlMoeglicherNetze);


	// zus�tzliche Bits berechnnen f�r Subnetze
	int neueBits = 0;
	while (benutzerNetze > pow(2, neueBits)) {
		neueBits++;
	}

	// neue Subnetzmaske
	uMaske += neueBits;
	// Schrittweite
	anzahlHostsProNetz = pow(2, 32 - uMaske) - 2;
	anzahlHostsGesamt = anzahlHostsProNetz * benutzerNetze;




	return 0;
}