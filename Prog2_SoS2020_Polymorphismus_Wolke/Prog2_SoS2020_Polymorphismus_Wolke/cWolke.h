#pragma once

#include <iostream>
using namespace std;

class cWolke			// abstrakte Klasse
{
public:
	virtual void regnen(int) = 0;		// abstrakte Methode ==> macht cWolke abstrakt
};

