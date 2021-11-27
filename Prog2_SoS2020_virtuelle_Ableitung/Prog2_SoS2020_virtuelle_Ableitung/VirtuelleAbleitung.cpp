// C++-Demo fuer die Mehrfachvererbung und die virtuelle Ableitung

class AT {		// Basisklasse
	int i, j, k;
public:
	void Doit(void) {}
};


class BT : virtual public AT { // einfache Vererbung
	float x, y;
public:
	void Calculate(float arg1, int arg2) {}
//	void Doit(void) {}			// Ueberschreibung ist notwendig, damit die Ueberladung erkannt wird
	long Doit(const char* str) { return 1L; }	// Ueberladung
};


class CT : virtual public AT { // einfache Vererbung
	char* z;
};


class DT : public BT, public CT {	// Mehrfachvererbung
	int u, v;
};

int main() {
	DT d;

	d.Doit();
	d.Doit("Hi");

	return 0;
}