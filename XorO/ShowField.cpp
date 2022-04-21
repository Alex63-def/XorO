#include "ShowField.h"

void ShowField() {

	cout << endl << endl;
	cout << "\t  _";
	for (int Ox = 1; Ox <= Field.width; Ox++) {
		if (Ox < 9)
			cout << Ox << "_";
		else
			cout << Ox << '.';
	}
	cout << endl;
	for (int Oy = 0; Oy < Field.height; Oy++) {
		if (Oy < 9) {
			cout << "\t ";
			cout << Oy + 1;
		}
		else
			cout << "\t" << Oy + 1;
		for (int cell = 0; cell < Field.width; cell++) {
			if (cell < 9)
				cout << "|" << Field.fieldGame[Oy][cell];
			else
				cout << "|" << Field.fieldGame[Oy][cell] << "_";
		}
		cout << "|" << endl;
	}
}