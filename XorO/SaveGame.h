#pragma once
#ifndef _SAVE_GAME_H_
#define _SAVE_GAME_H_

#include "Dependencies/json/single_include/nlohmann/json.hpp"
#include "Field.h"

void Save();
void Player();

extern bool PlayerMove;

static int QuantityX{};
static int QuantityY{};

#endif // !_SAVE_GAME_H_
