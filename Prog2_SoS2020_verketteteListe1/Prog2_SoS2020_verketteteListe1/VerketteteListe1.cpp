// C++-Demprogramm fuer die verkettete Liste aus Objekten

#include <iostream>
using namespace std;

#define NIL (cElement*)0

class cElement {
	int a;				// "Nutzlast-Attribut" Ganzzahl
	double x;			// "Nutzlast-Attribut" Gleitkommazahl

	cElement* prev;		// Zeiger auf das Vorgaengerelement in der Liste
public:
	cElement(int a_in, double x_in, cElement * prev_in = NIL) : a(a_in), x(x_in), prev(prev_in) {
		cout << "Konstruktor: a = " << a << ", x = " << x << endl;
	}

	cElement* newEl(int a_in, double x_in) { return new cElement(a_in, x_in, this); } // sich selbst als Vorgaenger eintragen lassen

	void printList() {	// rekursive Ausgabe der Liste
		//cout << "Listenelement: a = " << a << ", x = " << x << endl;
		if (prev != NIL) {
			prev->printList();
		}
		cout << "Listenelement: a = " << a << ", x = " << x << endl;	// Reihenfolge der Liste folgen

	}

	~cElement() {		// rekursive Destruktion der Liste
		if (prev != NIL) {
			delete prev;
		}
		cout << "Destruktor: a = " << a << ", x = " << x << endl;
	}
};

int main() {
	cElement* p_act = new cElement(42, 1.2345);		// Zeiger auf das aktuelle Listenelement (Listenende)

	p_act = p_act->newEl(27, 765.432);				// Mit dem aktuell letzten Objekt das neue starten und Listenende weiterschalten
	p_act = p_act->newEl(-54325, 0.4321);			// Mit dem aktuell letzten Objekt das neue starten und Listenende weiterschalten
	p_act = p_act->newEl(1, 0.111);					// Mit dem aktuell letzten Objekt das neue starten und Listenende weiterschalten


	p_act->printList();								// Liste rekursiv ausgeben

	delete p_act;									// Liste rekursiv loeschen

	return 0;
}