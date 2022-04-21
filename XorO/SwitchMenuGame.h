#pragma once
#ifndef _SWITCH_MENU_GAME_H_
#define _SWITCH_MENU_GAME_H_

#define INPUT_VALIDATION if (cin.fail()) { cin.clear(); cin.ignore(32767, '\n');}

extern bool ExitGame;
extern int Paragraph;

enum MainMenu { Start = 1, Loading, Exit };
enum StartMenu1 { PandP = 1, PandPC, Back1 };
enum SettingMenu { DefaultSetting = 1, MySetting, RandSetting, Back2 };
enum PauseMenu { ContinueGame = 1, SaveGame, NewGame, Restart, MainMenu };

void SwitchMainMenu();
void SwitchStartMenu();
void SwitchSettingMenu();
void SwitchMySettingField();
void SwitchPauseMenu();

#endif // !_SWITCH_MENU_GAME_H_
