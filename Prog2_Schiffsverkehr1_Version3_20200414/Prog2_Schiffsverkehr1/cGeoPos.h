#pragma once
class cGeoPos
{
private:
	double longitude;	// geografische Laenge
	double latitude;	// geografische Breite
public:
	cGeoPos(double = 0.0, double = 0.0);
	void ausgabe();
};

