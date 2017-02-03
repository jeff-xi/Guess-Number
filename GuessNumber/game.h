#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

#ifndef GAME
#define GAME

class Game{
private:
	int correctNumber;
	int tries;
public:
	Game();//constructor
	void StartGame();
	void testNumber(int num);
	void NormalGame();
	void HardGame();
};
#endif