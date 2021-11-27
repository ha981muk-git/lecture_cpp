// C++-Demoprogramm fuer ueberladene Operatoren
//    Die Operatoren "++" und "--" werden fuer complexT ueberladen
//    Postfix und Praefix moeglich,
//    "--" als Freundfunktionen,
//    "++" als Mitgliedsfunktionen.

#include "complexT.h"

int main(void) {
	complexT x1(10, 11);
	complexT x2;
	complexT x3;

	x1.write("x1 neu");

	x1++;
	x1.write("x1 nach x1++");

	x2 = x1++;

	x1.write("x1 nach x2 = x1++");
	x2.write("x2 nach x2 = x1++");

	x3 = ++x2;
	x2.write("x2 nach x3 = ++x2");
	x3.write("x3 nach x3 = ++x2");

	--x1;
	x1.write("x1 nach --x1");

	x2 = x1--;

	x1.write("x1 nach x2 = x1--");
	x2.write("x2 nach x2 = x1--");

	return 0;
}