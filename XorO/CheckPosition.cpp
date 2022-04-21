#include "CheckPosition.h"

void Position_X(int& x, int& y, bool& move) {

	if (x >= 1 && x <= Field.width && y >= 1 && y <= Field.height) {

		if (Field.fieldGame[y - 1][x - 1] != X && Field.fieldGame[y - 1][x - 1] != O) {
			Field.fieldGame[y - 1][x - 1] = X;
			//exit = true;
			move = false;
		}
		else {
			system("cls");
			cout << endl;
			cout << "\tЭта клетка уже занята" << endl;
		}
	}
	else {
		system("cls");
		cout << endl;
		cout << "\tТакой клетки нет" << endl;
	}
}

void Position_O(int& x, int& y, bool& move) {

	if (x >= 1 && x <= Field.width && y >= 1 && y <= Field.height) {

		if (Field.fieldGame[y - 1][x - 1] != X && Field.fieldGame[y - 1][x - 1] != O) {
			Field.fieldGame[y - 1][x - 1] = O;
			//exit = true;
			move = false;
		}
		else {
			system("cls");
			cout << endl;
			cout << "\tЭта клетка уже занята" << endl;
		}
	}
	else {
		system("cls");
		cout << endl;
		cout << "\tТакой клетки нет" << endl;
	}
}