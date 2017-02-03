#include <iostream>
#include <string>
#include "game.h"

using namespace std;

#ifndef MENU
#define MENU

class Menu{
private:
	int choice;
public:
	void displayOptions();
	void HowToPlay();
	void SelectDifficulty();
	void doGame();
};
#endif