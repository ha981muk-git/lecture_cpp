#pragma once

#include <iostream>
using namespace std;

class cBruch
{
private:
	int zaehl;
	int nenn;
	int ggT(int x, int y);
	void kuerzen();
	friend cBruch& add(const cBruch&, const cBruch&);	// Freund-Funktion add()
public:
	cBruch(int = 0, int = 1);
	cBruch(const cBruch&);
	~cBruch();
	void print();
};

