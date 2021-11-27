// C++-Demoprogramm fuer Referenzen und Kopierkonstruktor

#include "cBruch.h"

int main() {
	cBruch b1, b2(4, 6), b3(3, 4);

	b2.print();
	b3.print();

	cout << "Jetzt wird addiert1 !" << endl;
	b1 = add(b2, b3);				// Addition von b2 und b3
	cout << "Addition1 fertig" << endl;
	b1.print();

	cout << "Jetzt wird addiert2 !" << endl;
	b1 = add(b2, b3);				// Addition von b2 und b3
	cout << "Addition2 fertig" << endl;
	b1.print();

	return 0;
}

