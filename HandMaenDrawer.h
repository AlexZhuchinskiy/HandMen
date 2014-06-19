#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class HandMaenDrawer
{
	static void goToXY(int x , int y);
	static void drawFirst();
    static void drawSecond();
	static void drawThird();
	static void drawFourth();
	static void drawFifth();

public:
	
	static void draw(int wrongAnswer);
	HandMaenDrawer(void);
	~HandMaenDrawer(void);
};

