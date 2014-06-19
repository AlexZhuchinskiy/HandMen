#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>
using namespace std;

class World
{
	int previousRand;
	int random;
public:
	char world_1[10];
	int counterWorld;
	void alphavit();
	void initsialisationWorld();
	World(void);
	~World(void);
};

