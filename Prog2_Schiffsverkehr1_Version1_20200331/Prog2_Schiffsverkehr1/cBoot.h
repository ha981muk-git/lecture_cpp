#pragma once

#include <string>
using namespace std;

class cBoot
{
private:
	double laenge;		// Attribut
	double tiefgang;	// dto.
	string name;
public:
	cBoot(string name_in = "-", double laenge_in = 14.4, double tiefgang_in = 0.7);	// universeller Konstruktor (nur Prototyp)
	void ausgabe();		// Methode (nur Prototyp)
};

