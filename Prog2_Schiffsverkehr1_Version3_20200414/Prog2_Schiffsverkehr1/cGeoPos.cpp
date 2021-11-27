#include "cGeoPos.h"

#include <iostream>
using namespace std;

cGeoPos::cGeoPos(double lon_in, double lat_in) {
	longitude = lon_in;
	latitude = lat_in;
}

void cGeoPos::ausgabe() {
	cout << "  Longitude: " << longitude << ", Latitude: " << latitude << endl;
}

