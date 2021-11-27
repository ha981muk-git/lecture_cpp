#pragma once
#include "cBoot.h"
class cSegelboot :
	public cBoot
{
private:
	double segelFlaeche;	// zusaetzliches Attribut in der Spezialisierung
public:
	cSegelboot(string = "-", double = 20.5, double = 2.85, double = -5.832, double = 58.674, double = 120.5);
	void ausgabe();			// Ueberschreibung der Methode der Basisklasse
	void anlegen();			// dto.
	void anlegen(int);		// Ueberladung von anlegen()
	~cSegelboot();
};

