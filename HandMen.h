#pragma once
#include <iostream>
#include "World.h"
#include <conio.h>


using namespace std;

class HandMen
{
	World world;
	int wrongAnswer;
	int rightAnswer;
public:
	void chekTrueForDraw(int test,int rightLetters);
	void checkTrueGame();
	void showMasMinus(char *p);
	void menu();
	void game();
	void rules();
	HandMen(void);
	~HandMen(void);
};

