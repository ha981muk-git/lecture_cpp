#include "cBoot.h"

#include <iostream>
using namespace std;

cBoot::cBoot(string name_in, double laenge_in, double tiefgang_in, double lon_in, double lat_in) :
							pos(lon_in, lat_in) {	// Implementierung Konstruktor mit Kaskade in den Bestandteil pos
	laenge = laenge_in;
	tiefgang = tiefgang_in;
	name = name_in;
	cout << "constructing: "; ausgabe();
}

void cBoot::ausgabe() {		// Implementierung der Methode
	cout << "cBoot: name = " << name << ", laenge = " << laenge << ", tiefgang = " << tiefgang << endl;
	pos.ausgabe();
}

cBoot::~cBoot() {
	cout << "destructing: "; ausgabe();
}