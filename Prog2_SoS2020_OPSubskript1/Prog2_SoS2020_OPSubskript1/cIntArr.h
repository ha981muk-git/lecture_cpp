#pragma once
class cIntArr
{
	int* p;			// Zeiger auf das gekapselte Array
	int	anz;		// Anzahl der Elemente des Arrays
	bool enhanceArray(const int&);		// Array dynamisch vergroessern bei Bedarf
public:
	cIntArr(const int&);
	int& operator [] (const int&);
	~cIntArr();
};

const int limit = 1000000;				// Limit fuer das Wachstum: eine Million Elemente

