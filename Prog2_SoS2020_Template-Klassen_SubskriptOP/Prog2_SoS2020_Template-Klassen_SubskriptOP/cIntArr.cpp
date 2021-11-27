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



int& cIntArr::operator [] (const int& index) {
	if (index >= 0 && index < anz) {
		return p[index];				// gewuenschtes Array-Element als Referenz zurueckgeben
	}

	// Fehlerfall: Erweiterung des Arrays ist gescheitert
	ostrstream errstring;
	errstring << "cIntArr: Fehlindizierung, index = " << index << " (korrekt: 0 bis " << anz - 1 << ")" << ends;

	if (p) {							//vor dem exit() noch aufraeumen
		delete[] p;						// Array loeschen, Speicher freigeben
		p = 0;							// "sauberen Zustand herstellen" (Aesthetik)
		anz = 0;
	}

	throw(errstring.str());				// String als Ereignis werfen
}


cIntArr::~cIntArr() {
	if (p) {
		delete[] p;						// Array loeschen, Speicher freigeben
		p = 0;							// "sauberen Zustand herstellen" (Aesthetik)
		anz = 0;
	}

	// irgendwas kommt hier vielleicht noch und koennte p oder anz verwenden
}