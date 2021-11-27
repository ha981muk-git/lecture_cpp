// C++ Einstiegsprogramm

#include "cBoot.h"

#include <iostream>
using namespace std;

int main() {
	cBoot esmeralda ("Esmeralda", 32.7, 3.1);		// Instanz definieren
	cBoot kontiki("Kontiki", 12.8);
	cBoot santamaria("Santa Maria die Koenigliche");
	cBoot noname;									// Instanziierung mit Standardkonstruktor

	cout << "Hi! Viele Gruesse" << endl;

	esmeralda.ausgabe();	// Methodenaufruf
	kontiki.ausgabe();
	santamaria.ausgabe();
	noname.ausgabe();

	return 0;
}