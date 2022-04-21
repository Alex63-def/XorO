#include "StartGame.h"
#include "ShowField.h"
#include "SwitchMenuGame.h"
#include "CheckPosition.h"
#include "VictoryGame.h"

void StartGame() {

	string VictoryPlayer{};

	while (!ExitGame) {
		int x;
		int y;
		string inputString;
		bool Temp = true;
		bool moveX = true;
		bool moveY = true;

		while (!ExitGame) {

			moveX = true;
			while (moveX)
			{
				ShowField();

				Temp = true;
				while (Temp)
				{
					cout << endl;
					cout << "\t������� ���� - �" << endl;
					cout << "\t    ��� �" << endl << endl;

					x = 0;
					cout << "\t���������� �� ��� �: ";

					cin >> inputString;
					if (strcmp(inputString.c_str(), "�") == 0) {
						system("cls");
						SwitchPauseMenu();
					}
					else
					{
						x = atoi(inputString.c_str());
						Temp = false;
					}
				}

				Temp = true;
				while (Temp)
				{
					y = 0;
					cout << "\t���������� �� ��� �: ";

					cin >> inputString;
					if (strcmp(inputString.c_str(), "�") == 0) {
						system("cls");
						SwitchPauseMenu();
					}
					else
					{
						y = atoi(inputString.c_str());
						Temp = false;
					}
				}

				//cout << endl << endl;
				Position_X(x, y, moveX);
			}

			VictoryGame();
			if (ExitGame)
			{
				VictoryPlayer = "X ��������";
				break;
			}

			moveY = true;
			while (moveY)
			{
				ShowField();

				Temp = true;
				while (Temp)
				{
					cout << endl;
					cout << "\t������� ���� - �" << endl;
					cout << "\t    ��� �" << endl << endl;

					x = 0;
					cout << "\t���������� �� ��� �: ";

					cin >> inputString;
					if (strcmp(inputString.c_str(), "�") == 0) {
						system("cls");
						SwitchPauseMenu();
					}
					else
					{
						x = atoi(inputString.c_str());
						Temp = false;
					}
				}

				Temp = true;
				while (Temp)
				{
					y = 0;
					cout << "\t���������� �� ��� �: ";

					cin >> inputString;
					if (strcmp(inputString.c_str(), "�") == 0) {
						system("cls");
						SwitchPauseMenu();
					}
					else
					{
						y = atoi(inputString.c_str());
						Temp = false;
					}
				}

				//cout << endl << endl;
				Position_O(x, y, moveY);
			}

			VictoryGame();
			if (ExitGame)
			{
				VictoryPlayer = "O ��������";
				break;
			}
		}
		ShowField();
	}
	cout << "\n\t" << VictoryPlayer << "\n";
}


