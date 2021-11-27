// c++-Demoprojekt fuer den Ploymorphismus

#include "cGewitterWolke.h"
#include "cSchleierWolke.h"
#include "cBrotWolke.h"

int main() {
	//cWolke wo1;	// Instanziierung geht nicht, weil abstrakt
	//cWolke* wop1;
	/*cGewitterWolke gewo1, gewo2;
	cSchleierWolke schlewo1;
	cBrotWolke browo1, browo2, browo3;
	cWolke* wolkenhimmel[6] = { &gewo1, &browo2, &browo1, &schlewo1, &gewo2, &browo3 };*/

	cWolke* wolkenhimmel[6] = { new cGewitterWolke, new cBrotWolke, new cBrotWolke,
								new cSchleierWolke, new cGewitterWolke, new cBrotWolke}; // Version ohne lokale Objekte

	/*wop1 = &gewo1;
	wop1->regnen(7);

	wop1 = &schlewo1;
	wop1->regnen(3);

	wop1 = &browo1;
	wop1->regnen(42);*/

	for (int i = 0; i < 6; i++) {			// Array im Polymorphen Modus durchlaufen
		wolkenhimmel[i]->regnen(i + 1);
	}

	return 0;
}