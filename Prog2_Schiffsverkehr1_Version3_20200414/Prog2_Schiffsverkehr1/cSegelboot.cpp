#include "cSegelboot.h"

#include <iostream>
using namespace std;

cSegelboot::cSegelboot(string name_in, double laenge_in, double tiefgang_in, double lon_in, double lat_in, double segFl_in) :
	cBoot(name_in, laenge_in, tiefgang_in, lon_in, lat_in) {	// Implementierung Konstruktor mit Kaskade in die Basisklasse
	segelFlaeche = segFl_in;									// Attribut der Spezialisierung selbst verarbeiten
	cout << "constructing: "; ausgabe();
}

void cSegelboot::ausgabe() {		// Implementierung der Methode als Ueberschreibung
	cout << "cSegelboot: ";
	cBoot::ausgabe();				//Wiederverwendung von bereits geschriebenem Code
	cout << "  Segelflaeche: " << segelFlaeche << endl;
}

void cSegelboot::anlegen() {		// Implementierung der Methode
	cout << get_name() << ": wir ziehen das Schwert hoch, schalten auf Motorantrieb, legen an und gehen von Bord" << endl;
}

void cSegelboot::anlegen(int drunkenSailors) {		// Implementierung der Methode
	anlegen();						// Wiederverwendung
	cout << "    dort bringen wir die " << drunkenSailors << " betrunkenen Matrosen zu Bett" << endl;
}

cSegelboot::~cSegelboot() {
	cout << "destructing: "; ausgabe();
}