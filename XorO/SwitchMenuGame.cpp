#include "SwitchMenuGame.h"
#include "ShowMenuGame.h"
#include "InitField.h"
#include "CleaningPositions.h"
#include "StartGame.h"
#include "ShowField.h"
#include "SaveGame.h"
#include "LoadGame.h"

void SwitchMainMenu() {

	while (!ExitGame) {

		ShowMainMenu();
		cin >> Paragraph;
		INPUT_VALIDATION;

		switch (Paragraph) {
		case Start:
			system("cls");
			SwitchStartMenu();
			break;
		case Loading:
			Load();
			StartGame();
			break;
		case Exit:
			exit(0);
		default:
			system("cls");
			cout << endl;
			cout << "\tТакого пункта в меню нет!" << endl;
		}
	}
}

void SwitchStartMenu() {

	while (!ExitGame) {

		ShowStartMenu();
		cin >> Paragraph;
		INPUT_VALIDATION;

		switch (Paragraph) {
		case PandP:
			system("cls");
			SwitchSettingMenu();
			break;
		/*case PandPC:
			SwitchSettingMenu();
			break;*/
		case Back1:
			system("cls");
			return;
			//SwitchMainMenu();
			//break;
		default:
			system("cls");
			cout << endl;
			cout << "\tТакого пункта в меню нет!" << endl;
		}
	}
}

void SwitchSettingMenu() {

	while (!ExitGame) {

		ShowSettingMenu();
		cin >> Paragraph;
		INPUT_VALIDATION;

		switch (Paragraph) {
		case DefaultSetting:
			system("cls");
			InitDefaultField();
			break;
		case MySetting:
			system("cls");
			SwitchMySettingField();
			break;
		case RandSetting:
			system("cls");
			InitRandField();
			break;
		case Back2:
			system("cls");
			SwitchStartMenu();
			break;
		default:
			system("cls");
			cout << endl;
			cout << "\tТакого пункта в меню нет!" << endl;
		}
	}
}

void SwitchMySettingField() {

	string inputString;

	cout << endl << endl;
	cout << "\tВернуться в меню - (М)" << endl;
	cout << "\tСвоя настройка поля:" << endl << endl;

	bool Temp = true;
	while (Temp)
	{
		cout << "\tВведите высоту: ";
		cin >> inputString;
	
		if (strcmp(inputString.c_str(), "М") == 0) {
			system("cls");
			SwitchSettingMenu();
		}
		else if (!(Field.height = atoi(inputString.c_str())))
		{
			cout << "\tДля вызова меню введите - \"М\"\n";
		}
		else
		{
			Field.height = atoi(inputString.c_str());
			Temp = false;
		}
	}

	Temp = true;
	while (Temp)
	{
		cout << "\tВведите ширину: ";
		cin >> inputString;

		if (strcmp(inputString.c_str(), "М") == 0) {
			system("cls");
			SwitchSettingMenu();
		}
		else if (!(Field.height = atoi(inputString.c_str())))
		{
			cout << "\tДля вызова меню введите - \"М\"\n";
		}
		else {
			Field.width = atoi(inputString.c_str());
			Temp = false;
			system("cls");
			InitMyField();
		}
	}
}

void SwitchPauseMenu() {

	while (!ExitGame) {

		ShowPauseMenu();
		cin >> Paragraph;
		INPUT_VALIDATION;

		switch (Paragraph) {
		case ContinueGame:
			system("cls");
			ShowField();
			return;
			//StartGame();
			//break;
		case SaveGame:
			system("cls");
			Save();
			cout << "\n\tИгра Сохранена!" << endl;
			break;
		case NewGame:
			system("cls");
			SwitchStartMenu();
			break;
		case Restart:
			system("cls");
			CleaningPositions();
			StartGame();
			break;
		case MainMenu:
			system("cls");
			SwitchMainMenu();
		default:
			system("cls");
			cout << endl;
			cout << "\tТакого пункта в меню нет!" << endl;
		}
	}
}