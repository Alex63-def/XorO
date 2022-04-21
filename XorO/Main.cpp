#include <iostream>
#include "SwitchMenuGame.h"
#include "Field.h"
#include <Windows.h>

using namespace std;

SizeField Field;

bool ExitGame = false;
int Paragraph = 0;

int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SwitchMainMenu();
	
	return 0;
}