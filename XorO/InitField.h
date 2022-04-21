#pragma once
#ifndef _INIT_FIELD_H_
#define _INIT_FIELD_H_

//struct SizeField {
//	int height;
//	int width;
//	char** fieldGame;
//} Field;

#include <ctime>
#include "Field.h"

void InitDefaultField();
void InitMyField();
void InitRandField();
void InitLoadField();

#endif // !_INIT_FIELD_H_
