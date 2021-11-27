// C++-Demo fuer virtuelle Methoden

#include <iostream>
using namespace std;

class AT {
public:

	virtual void Doit() { cout << "AT::Doit aufgerufen" << endl; }
};

class BT : public AT {
public:

	virtual void Doit() override { cout << "BT::Doit aufgerufen" << endl; }
};

int main() {
	AT* a;
	BT* b = new BT;
	a = b;
	a->Doit();
	delete b;

	return 0;
}