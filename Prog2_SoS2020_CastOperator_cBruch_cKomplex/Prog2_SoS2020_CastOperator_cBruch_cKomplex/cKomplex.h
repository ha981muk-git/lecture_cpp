#pragma once

#include <iostream>
using namespace std;

class cBruch;		// Prototyp der Klasse cBruch fuer den Cast-Operator nach cBruch

class cKomplex
{
	double re, im;
	friend ostream& operator << (ostream&, const cKomplex&);
public:
	cKomplex(double, double);

	operator cBruch();	// Cast-Operator aus cKomplex nach cBruch
};

