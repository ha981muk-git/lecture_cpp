#pragma once

#include <iostream>
using namespace std;

class cT1
{
    double x;
    friend ostream& operator << (ostream&, const cT1&);
public:
    cT1(double x1 = 0.0);
    cT1& operator * (const cT1&);
};

