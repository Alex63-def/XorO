#include "InitField.h"
#include "StartGame.h"

void InitDefaultField() {
	
	Field.height = 3;
	Field.width = 3;
	Field.fieldGame = new char*[Field.height];
	for (int i = 0; i < Field.height; i++)
		Field.fieldGame[i] = new char[Field.width];

	for (int Oy = 0; Oy < Field.height; Oy++)
		for (int cell = 0; cell < Field.width; cell++)
			Field.fieldGame[Oy][cell] = Empty;
		
	StartGame();

	for (int i = 0; i < Field.height; i++)
		delete[] Field.fieldGame[i];
	delete[] Field.fieldGame;
}

void InitMyField() {

	Field.fieldGame = new char* [Field.height];
	for (int i = 0; i < Field.height; i++)
		Field.fieldGame[i] = new char[Field.width];
		
	for (int Oy = 0; Oy < Field.height; Oy++)
		for (int cell = 0; cell < Field.width; cell++)
			Field.fieldGame[Oy][cell] = Empty;
			
	StartGame();

	for (int i = 0; i < Field.height; i++)
		delete[] Field.fieldGame[i];
	delete[] Field.fieldGame;
}

void InitRandField() {

	srand(time(NULL));

	Field.height = rand() % 15 + 1;
	Field.width = rand() % 15 + 1;
	Field.fieldGame = new char* [Field.height];
	for (int i = 0; i < Field.height; i++)
		Field.fieldGame[i] = new char[Field.width];

	for (int Oy = 0; Oy < Field.height; Oy++)
		for (int cell = 0; cell < Field.width; cell++)
			Field.fieldGame[Oy][cell] = Empty;
					
	StartGame();

	for (int i = 0; i < Field.height; i++)
		delete[] Field.fieldGame[i];
	delete[] Field.fieldGame;
}