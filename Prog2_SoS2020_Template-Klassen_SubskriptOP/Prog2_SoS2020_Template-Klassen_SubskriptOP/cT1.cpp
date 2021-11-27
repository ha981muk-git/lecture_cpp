#include "cT1.h"

cT1::cT1(double x_in) : x(x_in) {}

cT1& cT1::operator * (const cT1& rhs) {
	static cT1 helpme;

	helpme.x = x * rhs.x;
	return helpme;
}

ostream& operator << (ostream& o, const cT1& ct) {
	o << "x: " << ct.x;
	return o;
}

