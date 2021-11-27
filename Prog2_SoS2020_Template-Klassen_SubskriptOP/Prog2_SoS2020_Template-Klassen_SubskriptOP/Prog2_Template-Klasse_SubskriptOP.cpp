// C++-Programm fuer die Ueberladung des Subskript-Operators ("sichere Arrays")
// fuer beliebige Klassen (mit Template)

#include "cAllArr.h"
#include "cT1.h"
#include "cBruch.h"

#include <iostream>
using namespace std;

int main() {
	try {
		cAllArr<cBruch> allArr(10);					// Instanziierung eines Objekts, welches das Array kapselt

		for (int i = 0; i < 10; i++) {
			allArr[i] = i * i;				// Beispiel-Werte setzen (Quadratzahlen) 
		}

		for (int i = 0; i <= 20; i++) {
			cout << "allArr[" << i << "] = " << allArr[i] << endl;
		}
	}
	catch (char* errstr) {
		cerr << "catching char * event: " << errstr << endl;
		return 22;							// error code illegal parameter
	}
	catch (bad_alloc&) {
		cerr << "catching bad allocation error" << endl;
		return 7;
	}
	catch (...) {							// generische Ueberladung aller restlichen Signaturen ("Lumpensammler")
		cerr << "catching unknown error" << endl;
		return 2;
	}
	return 0;
}