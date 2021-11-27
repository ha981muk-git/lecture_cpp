// C++-Demoprogramm fuer Referenzen und Kopierkonstruktor

#include "cBruch.h"
#include "cKomplex.h"

int main() {
	cBruch b1(3, 4);
	cKomplex k1(10.4, 15.3);

	cout << "1):  b1 = " << b1 << " -- k1 = " << k1 << endl;

	b1 = (cBruch)k1;

	cout << "2):  b1 = " << b1 << " -- k1 = " << k1 << endl;

	k1 = (cKomplex)b1;

	cout << "3):  b1 = " << b1 << " -- k1 = " << k1 << endl;

	return 0;
}
