#include "SwitchMenuGame.h"
#include "ShowMenuGame.h"
#include "InitField.h"
#include "CleaningPositions.h"
#include "StartGame.h"
#include "ShowField.h"

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
		//case Loading:
		case Exit:
			system("cls");
			ExitGame = true;
			break;
		default:
			system("cls");
			cout << endl;
			cout << "\t������ ������ � ���� ���!" << endl;
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
		//case PandPC:
		case Back1:
			system("cls");
			return;
			//SwitchMainMenu();
			//break;
		default:
			system("cls");
			cout << endl;
			cout << "\t������ ������ � ���� ���!" << endl;
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
			cout << "\t������ ������ � ���� ���!" << endl;
		}
	}
}

void SwitchMySettingField() {

	string inputString;

	cout << endl << endl;
	cout << "\t��������� � ���� - (�)" << endl;
	cout << "\t���� ��������� ����:" << endl << endl;

	bool Temp = true;
	while (Temp)
	{
		cout << "\t������� ������: ";
		cin >> inputString;
	
		if (strcmp(inputString.c_str(), "�") == 0) {
			system("cls");
			SwitchSettingMenu();
		}
		else if (!(Field.height = atoi(inputString.c_str())))
		{
			cout << "\t��� ������ ���� ������� - \"�\"\n";
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
		cout << "\t������� ������: ";
		cin >> inputString;

		if (strcmp(inputString.c_str(), "�") == 0) {
			system("cls");
			SwitchSettingMenu();
		}
		else if (!(Field.height = atoi(inputString.c_str())))
		{
			cout << "\t��� ������ ���� ������� - \"�\"\n";
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
			cout << "\t������ ������ � ���� ���!" << endl;
		}
	}
}