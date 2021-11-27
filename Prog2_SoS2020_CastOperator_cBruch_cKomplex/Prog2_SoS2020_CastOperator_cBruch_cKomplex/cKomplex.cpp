#include "cKomplex.h"
#include "cBruch.h"

cKomplex::cKomplex(double re_in, double im_in) : re(re_in), im(im_in) {}

cKomplex::operator cBruch() {
	return cBruch((int)re, (int)im);	// cBruch-Objekt mit Ganzzahlwerten erzeugen, re wir Zaehler, im wird Nenner
}

ostream& operator << (ostream& o, const cKomplex& c) {
	o << "re: " << c.re << ", im: " << c.im;
	return o;
}
