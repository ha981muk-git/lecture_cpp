#include "cIntArr.h"

#include <iostream>
#include <strstream>
using namespace std;

cIntArr::cIntArr(const int& anz_in) {
	anz = anz_in < 0 ? 1 : anz_in;		// negative Werte ausschliessen

	if (!(p = new int[anz])) {			// Speicher fuer das Array besorgen
		anz = 0;						// Im Fehlerfall ist das Array leer
	}
}

bool cIntArr::enhanceArray(const int& index) {
	if (index < 0 || index > limit - 1) {
		return false;
	}

	int* phelp = new int[index + 1];	// neues Array holen
	if (!phelp) {
		return false;
	}

	for (int i = 0; i < anz; i++) {
		phelp[i] = p[i];				// Arrayelement-Inhalt umspeichern
	}

	delete[] p;							// altes Array loeschen
	p = phelp;							// neues Array aktivieren durch Umsetzung von p und anz
	anz = index + 1;
	return true;
}

int& cIntArr::operator [] (const int& index) {
	if (index >= 0 && index < anz) {
		return p[index];				// gewuenschtes Array-Element als Referenz zurueckgeben
	}

	// Version 4 der Fehlerbearbeitung: automatisches Wachsen des Arrays bei Bedarf

	cerr << "enhancing array to size " << index+1 << endl;
	if (enhanceArray(index)) {
		return p[index];				// Element des erweiterten Arrays zurueckgegeben
	}

	// Fehlerfall: Erweiterung des Arrays ist gescheitert
	ostrstream errstring;
	errstring << "cIntArr: Fehlindizierung, index = " << index << " (korrekt: 0 bis " << anz - 1 << "); Erweiterung gescheitert" << ends;
	throw(errstring.str());				// String als Ereignis werfen

	//// Version 3 der Fehlerbearbeitung: Ereignis werfen
	//ostrstream errstring;
	//errstring << "cIntArr: Fehlindizierung, index = " << index << " (korrekt: 0 bis " << anz - 1 << ")" << ends;
	//throw(errstring.str());				// String als Ereignis werfen

	//// Version 2 der Fehlerbearbeitung: Substitut-Variable (the show must go on)
	//static int opfer;					// Substitut fuer ein gueltiges Array-Element
	//cerr << "cIntArr: Fehlindizierung, index = " << index << " (korrekt: 0 bis " << anz - 1 << "); verwende Substitut" << endl;
	//return opfer;

	//// Version 1 der Fehlerbearbeitung: harter Abbruch
	//cerr << "cIntArr: Fehlindizierung, index = " << index << " (korrekt: 0 bis " << anz - 1 << ")" << endl;
	//if (p) {							//vor dem exit() noch aufraeumen
	//	delete[] p;						// Array loeschen, Speicher freigeben
	//	p = 0;							// "sauberen Zustand herstellen" (Aesthetik)
	//	anz = 0;
	//}
	//exit(1);							// harter Programmabbruch
}


cIntArr::~cIntArr() {
	if (p) {
		delete[] p;						// Array loeschen, Speicher freigeben
		p = 0;							// "sauberen Zustand herstellen" (Aesthetik)
		anz = 0;
	}

	// irgendwas kommt hier vielleicht noch und koennte p oder anz verwenden
}