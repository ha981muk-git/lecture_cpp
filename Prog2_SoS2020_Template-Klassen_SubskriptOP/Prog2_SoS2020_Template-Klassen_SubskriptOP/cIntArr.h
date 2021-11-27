#pragma once
class cIntArr
{
	int* p;			// Zeiger auf das gekapselte Array
	int	anz;		// Anzahl der Elemente des Arrays
public:
	cIntArr(const int&);
	int& operator [] (const int&);
	~cIntArr();
};
