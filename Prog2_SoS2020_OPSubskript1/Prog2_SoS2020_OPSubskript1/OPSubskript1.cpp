// C++-Programm fuer die Ueberladung des Subskript-Operators ("sichere Arrays")

#include "cIntArr.h"

#include <iostream>
using namespace std;

int main() {
	try {
		cIntArr intArr(10);					// Instanziierung eines Objekts, welches das Array kapselt
		//cIntArr intArr(1000000000);		// Instanziierung eines zu grossen Objekts ==> bad allocation error

		for (int i = 0; i <= 15; i++) {
			intArr[i] = i * i;				// Beispiel-Werte setzen (Quadratzahlen)
		}

		//throw((char *)"Hi, here is ralphi");	// der erste Spassvogel
		//intArr[-7] = 42;					// zweiter Spassvogel!
		intArr[234186] = 17;				// noch einer!
		intArr[2341865] = 23;				// noch einer!

		for (int i = 0; i <= 20; i++) {
			cout << "intArr[" << i << "] = " << intArr[i] << endl;
		}

		cout << "intArr[234186] = " << intArr[234186] << endl;
		cout << "intArr[2341865] = " << intArr[2341865] << endl;
	}
	catch (char * errstr) {
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