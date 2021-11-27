#pragma once

#include	<iostream>
using namespace std;

class complexT {
	friend complexT operator  --  (complexT& c1); 	// Praefix-Dekr.
	friend complexT operator  --  (complexT& c1, int); // Postfix-Dekr.
	double re, im;
public:
	complexT(void) { re = im = 0.0; }
	complexT(double re_in) { re = re_in; im = 0.0; }
	complexT(double re_in, double im_in) { re = re_in; im = im_in; }

	complexT operator ++ (void);		// Praefix-Inkrement (++x)
	complexT operator ++ (int);		// Postfix-Inkrement (x++)

	void write(const char*);
};
