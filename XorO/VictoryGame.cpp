#include "VictoryGame.h"

int VictoryGame() {
		
	for (int victory_condition = 0; victory_condition < 6; ++victory_condition) {
		if (victory_condition == 0)
			for (int i = 0; i < Field.height; ++i) {
				int a = 1;
				for (int j = 0; j < Field.width - 1; ++j) {
					if (Field.fieldGame[i][j] == Field.fieldGame[i][j + 1] && Field.fieldGame[i][j] != Empty)
						++a;
					if (a == Field.width)
						ExitGame = true;
				}
			}

		if (victory_condition == 1)
			for (int i = 0; i < Field.width; ++i) {
				int a = 1;
				for (int j = 0; j < Field.height - 1; ++j) {
					if (Field.fieldGame[j][i] == Field.fieldGame[j + 1][i] && Field.fieldGame[j][i] != Empty)
						++a;
					if (a == Field.height)
						ExitGame = true;
				}
			}

		if (victory_condition == 2)
			if (Field.height < Field.width || Field.height == Field.width) {
				int a = 1;
				for (int i = 0, j = 0; i < Field.height - 1; ++i, ++j)
					if (Field.fieldGame[i][j] == Field.fieldGame[i + 1][j + 1] && Field.fieldGame[i][j] != Empty)
						++a;
				if (a == Field.height)
					ExitGame = true;
			}
			else if (Field.width < Field.height) {
				int a = 1;
				for (int i = 0, j = 0; i < Field.width - 1; ++i, ++j)
					if (Field.fieldGame[i][j] == Field.fieldGame[i + 1][j + 1] && Field.fieldGame[i][j] != Empty)
						++a;
				if (a == Field.width)
					ExitGame = true;
			}

		if (victory_condition == 3)
			if (Field.height < Field.width) {
				int a = 1;
				for (int i = Field.height - 1, j = Field.width - 1; i >= 1; --i, --j)
					if (Field.fieldGame[i][j] == Field.fieldGame[i - 1][j - 1] && Field.fieldGame[i][j] != Empty)
						++a;
				if (a == Field.height)
					ExitGame = true;
			}
			else if (Field.width < Field.height) {
				int a = 1;
				for (int i = Field.height - 1, j = Field.width - 1; j >= 1; --i, --j)
					if (Field.fieldGame[i][j] == Field.fieldGame[i - 1][j - 1] && Field.fieldGame[i][j] != Empty)
						++a;
				if (a == Field.width)
					ExitGame = true;
			}

		if (victory_condition == 4)
			if (Field.height < Field.width || Field.height == Field.width) {
				int a = 1;
				for (int i = Field.height - 1, j = 0; i >= 1; --i, ++j)
					if (Field.fieldGame[i][j] == Field.fieldGame[i - 1][j + 1] && Field.fieldGame[i][j] != Empty)
						++a;
				if (a == Field.height)
					ExitGame = true;
			}
			else if (Field.width < Field.height) {
				int a = 1;
				for (int i = Field.height - 1, j = 0; j <= Field.width - 1; --i, ++j)
					if (Field.fieldGame[i][j] == Field.fieldGame[i - 1][j + 1] && Field.fieldGame[i][j] != Empty)
						++a;
				if (a == Field.width)
					ExitGame = true;
			}

		if (victory_condition == 5)
			if (Field.height < Field.width) {
				int a = 1;
				for (int i = 0, j = Field.width - 1; i < Field.height - 1; ++i, --j)
					if (Field.fieldGame[i][j] == Field.fieldGame[i + 1][j - 1] && Field.fieldGame[i][j] != Empty)
						++a;
				if (a == Field.height)
					ExitGame = true;
			}
			else if (Field.width < Field.height) {
				int a = 1;
				for (int i = 0, j = Field.width - 1; j >= 1; ++i, --j)
					if (Field.fieldGame[i][j] == Field.fieldGame[i + 1][j - 1] && Field.fieldGame[i][j] != Empty)
						++a;
				if (a == Field.width)
					ExitGame = true;
			}
	}
	return 0;
}