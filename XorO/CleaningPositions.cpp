#include "CleaningPositions.h"

void CleaningPositions() {

	for (int Oy = 0; Oy < Field.height; Oy++)
		for (int cell = 0; cell < Field.width; cell++)
			Field.fieldGame[Oy][cell] = Empty;
}