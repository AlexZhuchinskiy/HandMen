#include "World.h"


World::World(void)
{
	 random = 0;
	 previousRand = 0;
}


World::~World(void)
{
}


void World :: initsialisationWorld(){
	srand(time(NULL));
	random = rand()%6;
	if ( previousRand == random){
		random = rand()%6;
	}
	previousRand = random;
	switch(random){
	case 1:
		strcpy(world_1,"menu");
		break;
	case 2:
		strcpy(world_1,"test");
		break;
	case 3:
		strcpy(world_1,"mother");
		break;
	case 4:
		strcpy(world_1,"bus");
		break;
	case 5:
		strcpy(world_1,"continue");
		break;
	}
	counterWorld = strlen(world_1);
}

void World :: alphavit(){
	for ( int i = 97 ; i < 123 ; i++){
		cout<<char(i)<<" ";
	}
	cout<<endl;
}



