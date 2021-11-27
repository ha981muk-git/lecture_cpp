#pragma once

#include "cGeoPos.h"

#include <string>
using namespace std;

class cBoot
{
private:
	double laenge;		// Attribut
	double tiefgang;	// dto.
	string name;
	cGeoPos pos;		// geografische Position als Aggregation
public:
	cBoot(string = "-", double = 14.4, double = 0.7, double = -5.832, double = 58.674);	// universeller Konstruktor (nur Prototyp)
	void ausgabe();		// Methode (nur Prototyp)
	~cBoot();			// Destruktor (nur Prototyp)
};

