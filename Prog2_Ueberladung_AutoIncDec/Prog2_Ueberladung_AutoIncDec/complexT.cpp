#include "complexT.h"

complexT operator -- (complexT& c) {	// Praefix-Dekrement (--x) als Friend-F.
	c.re -= 1.0;
	c.im -= 1.0;
	return c;
}

complexT operator -- (complexT& c, int) {// Postfix-Dekrement (x--) als Friend-F.
	complexT tmp = c;
	c.re -= 1.0;
	c.im -= 1.0;
	return tmp;
}

complexT complexT::operator ++ (void) { // Praefix-Inkrement (++x) als Methode
	re += 1.0;
	im += 1.0;
	return *this;
}

complexT complexT::operator ++ (int) {	// Postfix-Inkrement (x++) als Methode
	complexT tmp = *this;
	re += 1.0;
	im += 1.0;
	return tmp;
}

void complexT::write(const char* text) {
	cout << "Realteil: " << re << " Imaginaerteil: " <<
		im << "  (" << text << ") \n\n";
}