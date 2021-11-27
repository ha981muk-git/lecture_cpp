// C++ Einstiegsprogramm

#include "cBoot.h"

#include <iostream>
using namespace std;

int main() {
	cBoot esmeralda ("Esmeralda", 32.7, 3.1, -123.76, 4.3);		// Instanz definieren
	cBoot kontiki("Kontiki", 12.8);
	cBoot santamaria("Santa Maria die Koenigliche");
	cBoot noname;									// Instanziierung mit Standardkonstruktor
	cBoot* pMayflower = new cBoot("MayFlower", 25.2, 3.12, 61.34, 23.78);

	cout << "Hi! Viele Gruesse" << endl;

	esmeralda.ausgabe();	// Methodenaufruf
	kontiki.ausgabe();
	santamaria.ausgabe();
	noname.ausgabe();
	pMayflower->ausgabe();

	delete pMayflower;		// Wer new sagt muss auch delete sagen

	return 0;
}