#include "cBoot.h"

#include <iostream>
using namespace std;

cBoot::cBoot(string name_in, double laenge_in, double tiefgang_in) {			// Implementierung Konstruktor
	laenge = laenge_in;
	tiefgang = tiefgang_in;
	name = name_in;
}

void cBoot::ausgabe() {		// Implementierung der Methode
	cout << "cBoot: name = " << name << ", laenge = " << laenge << ", tiefgang = " << tiefgang << endl;
}