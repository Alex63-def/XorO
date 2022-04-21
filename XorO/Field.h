#pragma once
#ifndef _FIELD_H_
#define _FIELD_H_

extern struct SizeField {
	int height;
	int width;
	char** fieldGame;
};

extern SizeField Field;

extern enum SymbolsField { Empty = '_', X = 'X', O = 'O' };

#endif // !_FIELD_H_
