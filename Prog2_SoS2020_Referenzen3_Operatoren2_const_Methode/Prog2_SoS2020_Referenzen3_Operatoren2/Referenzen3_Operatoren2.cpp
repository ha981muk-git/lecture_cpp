// C++-Demoprogramm fuer Referenzen und Kopierkonstruktor

#include "cBruch.h"

int main() {
	cBruch b1, b2(4, 6), b3(3, 4);

	b2.print();
	b3.print();

	cout << "Jetzt wird addiert1 !" << endl;
	b1 = add(b2, b3);	// Addition von b2 und b3 mit add()-Funktion
	cout << "Addition1 fertig" << endl;
	cout << "1) Werte von b1: " << b1 << endl;	// Ausgabe mit dem Ausgabeoperator

	//cout << "Jetzt wird addiert2 !" << endl;
	//b1 = b2 + b3;		// Addition von b2 und b3 mit Additionsoperator
	//cout << "Addition2 fertig" << endl;
	//cout << "2) Werte von b1: " << b1 << endl;	// Ausgabe mit dem Ausgabeoperator

	//cout << "Jetzt wird aubtrahiert1 !" << endl;
	//b1 = b2 - b3;		// Subtraktion von b2 und b3 mit Subtraktionsmethode
	//cout << "Subtraktion1 fertig" << endl;
	//cout << "3) Werte von b1: " << b1 << endl;	// Ausgabe mit dem Ausgabeoperator

	cout << "Jetzt wird autoinkrementiert !" << endl;
	b1++;
	cout << "Autoinkrement 1 fertig" << endl;
	cout << "2) Werte von b1: " << b1 << endl;	// Ausgabe mit dem Ausgabeoperator
	cout << "3) Werte von b1: " << ++b1 << endl;	// Ausgabe mit dem Ausgabeoperator
	cout << "4) Werte von b1: " << b1++ << endl;	// Ausgabe mit dem Ausgabeoperator
	cout << "5) Werte von b1: " << b1 << endl;	// Ausgabe mit dem Ausgabeoperator





	return 0;
}

