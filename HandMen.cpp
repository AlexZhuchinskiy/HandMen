#include "HandMen.h"
#include "HandMaenDrawer.h"
#include "World.h"

HandMen::HandMen(void)
{
	wrongAnswer = 0;
}


HandMen::~HandMen(void)
{
}

void HandMen :: menu(){
	cout << " HANDMEN 2014 " << endl;
	cout <<" 1.Play" << endl;
	cout <<" 2.Rules" << endl;
	cout <<" 3.Exit" << endl;
	char answer ;
	answer = getch();
	switch(answer){
	case '1':
		system("cls");
		game();
		break;
	case '2':
		system("cls");
		rules();
		break;
	case '3':
		exit(0);
		break;
	default:
		system("cls");
		menu();
	}
}

void HandMen :: game(){
	world.initsialisationWorld();
	char *worldMasMinus = new char[world.counterWorld];
	int counter = 0;
	int test = 0;
	wrongAnswer = 0;
	int counterForRightLetters = 0;
	while(true){
	    cout<<"Your field :"<<endl;
		HandMaenDrawer :: draw(wrongAnswer);
		cout<<"Your WORLD :"<<endl;
		showMasMinus(worldMasMinus);
		world.alphavit();
		checkTrueGame();
		cout<<"Your answer :"<<endl;
		char answer;
		cin>>answer;
		while (counter < world.counterWorld){
			if ( int(answer) == int(world.world_1[counter]) ){
				worldMasMinus[counter] = world.world_1[counter];
			counterForRightLetters++;
			test++;
			}
		 counter++;
		}
		chekTrueForDraw(test,counterForRightLetters);
		test = 0;
		counter = 0;
		system("cls");
	}
	
}

void HandMen :: rules(){
	cout << "rules you can read at google.com !" << endl;
	system("pause");
	system("cls");
	menu();
}

void HandMen :: showMasMinus(char *p){
	for ( int i = 0 ; i < world.counterWorld ; i++ ){
			cout<<p[i];
	}
	cout<<endl;
}

void HandMen :: chekTrueForDraw(int test,int rightLetters){
	if( test == 0 ){
		wrongAnswer++;
	}

	if ( rightLetters == world.counterWorld ){
		system("cls");
		cout << "YOU WIN !!!" << endl;
		system("pause");
		system("cls");
		menu();
	}
}

void HandMen :: checkTrueGame(){
	if ( wrongAnswer == 5 ){
		cout << " YOU LOSED !!! " << endl;
		system("pause");
		system("cls");
		menu();
	}
}