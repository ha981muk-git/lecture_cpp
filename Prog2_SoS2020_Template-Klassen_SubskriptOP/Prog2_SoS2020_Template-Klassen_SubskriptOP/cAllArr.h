#pragma once

template <class T>
class cAllArr
{
	T * p;			// Zeiger auf das gekapselte Array
	int	anz;		// Anzahl der Elemente des Arrays
public:
	cAllArr(const int&);
	T& operator [] (const int&);
	~cAllArr();
};

// aufgrund Compiler-Lader-Uneindeutigkeiten Implementierung in der Header-Datei

#include <iostream>
#include <strstream>
using namespace std;

template <class T> cAllArr<T>::cAllArr(const int& anz_in) {
	anz = anz_in < 0 ? 1 : anz_in;		// negative Werte ausschliessen

	if (!(p = new T[anz])) {			// Speicher fuer das Array besorgen
		anz = 0;						// Im Fehlerfall ist das Array leer
	}
}



template <class T> T& cAllArr<T>::operator [] (const int& index) {
	if (index >= 0 && index < anz) {
		return p[index];				// gewuenschtes Array-Element als Referenz zurueckgeben
	}

	// Fehlerfall: Erweiterung des Arrays ist gescheitert
	ostrstream errstring;
	errstring << "cAllArr: Fehlindizierung, index = " << index << " (korrekt: 0 bis " << anz - 1 << ")" << ends;

	if (p) {							//vor dem exit() noch aufraeumen
		delete[] p;						// Array loeschen, Speicher freigeben
		p = 0;							// "sauberen Zustand herstellen" (Aesthetik)
		anz = 0;
	}

	throw(errstring.str());				// String als Ereignis werfen
}


template <class T>cAllArr<T>::~cAllArr() {
	if (p) {
		delete[] p;						// Array loeschen, Speicher freigeben
		p = 0;							// "sauberen Zustand herstellen" (Aesthetik)
		anz = 0;
	}

	// irgendwas kommt hier vielleicht noch und koennte p oder anz verwenden
}

