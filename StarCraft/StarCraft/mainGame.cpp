#include "unit.h"

int main() {
	MARINE m1("marine 1");
	MARINE m2("marine 2");
	cout << m1.Getatk() << endl;
	for (int i = 0; i < 10; i++) {

		m1.Attack(m2);
		cout << m2.Gethp() << endl;
	}
}