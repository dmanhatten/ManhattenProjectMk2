#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <complex.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <inttypes.h>

#define mwst 0.19
#define pi 3.14987

int main() {

	int i = 10, a = 20, b = 30, c = 40, d = 50, e = i;

	// eigener Datentyp
	typedef double geld;
	typedef unsigned short alter;

	alter volljaehrig = 18;
	geld gehaltBrutto = 4711.23;
	alter jugendlich = 15;
	geld gehaltNetto = 3011.25;

	// Konstante in Main

	// const int x = 20;

	// Was ist eine Variable
	// max Zeichen für Bezeichner ist 31
	// Bezeichner dürfen nicht mit einer Zahl beginnen

	printf("+++++++++++++++Ganzzahlen+++++++++++++++\n\n");


	printf("Der Datentyp int hat die Dateigroesse von %i Bit\n"
		"Min Wert: %i Max Wert: %i\n", sizeof(int) * 8, INT_MIN, INT_MAX);

	printf("Der Datentyp long hat die Dateigroesse von %i Bit\n"
		"Min Wert: %li Max Wert: %li\n", sizeof(long) * 8, LONG_MIN, LONG_MAX);

	printf("Der Datentyp long long hat die Dateigroesse von %i Bit\n"
		"Min Wert: %lli Max Wert: %lli\n", sizeof(long long) * 8, LLONG_MIN, LLONG_MAX);

	printf("Der Datentyp unsigned int hat die Dateigroesse von %i Bit\n"
		"Max Wert: %ui\n", sizeof(unsigned int) * 8, UINT_MAX);

	printf("Der Datentyp unsigned long hat die Dateigroesse von %i Bit\n"
		"Max Wert: %ui\n", sizeof(unsigned long) * 8, ULONG_MAX);

	printf("Der Datentyp unsigned long long hat die Dateigroesse von %i Bit\n"
		"Max Wert: %llu\n", sizeof(unsigned long long) * 8, ULLONG_MAX);

	printf("Der Datentyp short hat die Dateigroesse von %i Bit\n"
		"Min Wert: %i Max Wert: %i\n", sizeof(short) * 8, SHRT_MIN, SHRT_MAX);

	printf("Der Datentyp char hat die Dateigroesse von %i Bit\n"
		"Min Wert: %i Max Wert: %i\n", sizeof(char) * 8, CHAR_MIN, CHAR_MAX);

	printf("Der Datentyp unsigned char hat die Dateigroesse von %i Bit\n"
		"Max Wert: %i\n\n", sizeof(unsigned char) * 8, UCHAR_MAX);

	// Macro

/*	int_fast32_t i32;
	printf("int_fast32 Wert eingeben: \n");
	scanf("%" SCNdFAST32, &i32);
	printf("i32 : " "%10" PRIdFAST32 "\n\n", i32);
*/
	printf("+++++++++++++++Gleitkomma+++++++++++++++\n\n");

	printf("Der Float Datentyp hat die Dateigroesse %i in Bit\n"
		"Max Wert: %E\nKleinster positiver Wert: %E\nGenauigkeit: %d in Stellen\n", sizeof(float) * 8, FLT_MAX, FLT_MIN, FLT_DIG);

	printf("Der Double Datentyp hat die Dateigroesse %i in Bit\n"
		"Max Wert: %E\nKleinster positiver Wert: %E\nGenauigkeit: %d in Stellen\n", sizeof(double) * 8, DBL_MAX, DBL_MIN, DBL_DIG);

	printf("Der Long Double Datentyp hat die Dateigroesse %i in Bit\n"
		"Max Wert: %E\nKleinster positiver Wert: %E\nGenauigkeit: %d in Stellen\n", sizeof(long double) * 8, LDBL_MAX, LDBL_MIN, LDBL_DIG);

	float x = 0.939717f;
	float dollarFloat = 100000.22f;
	double ergF;

	double y = 0.939717;
	double dollarDouble = 100000.22;
	double ergD;

	printf("%f Euro in Float\n", ergF = dollarFloat * x);
	printf("%f Euro in Double\n\n", ergD = dollarDouble * y);

	// Komplexe Gleitpunkte

	_Dcomplex dc1 = { 3.0, 2.0 };
	_Fcomplex fc1 = { 20.00, 30.00 };
	_C_double_complex lc1 = { 200.00, 300.00 };

	printf("%f %f\n\n", creal(dc1), cimag(dc1));

	printf("+++++++++++++++Zeichen+++++++++++++++\n\n");

	char zeichen = 'H';
	char hallo[6] = "Hallo";

	printf("Der Datentyp char hat die Dateigroesse von %i Bit\n"
		"Min Wert: %i Max Wert: %i\n", sizeof(char) * 8, CHAR_MIN, CHAR_MAX);

	printf("Der Datentyp unsigned char hat die Dateigroesse von %i Bit\n"
		"Max Wert: %i\n\n", sizeof(unsigned char) * 8, UCHAR_MAX);

	bool b3 = false;


	return 0;
}