#include "HandMaenDrawer.h"
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

HandMaenDrawer::HandMaenDrawer(void)
{
}


HandMaenDrawer::~HandMaenDrawer(void)
{
}

void HandMaenDrawer :: draw(int wrongAnswer){
	switch(wrongAnswer){
	case 5 :
		drawFifth();
	case 4 :
		drawFourth();
	case 3:
	    drawThird();
	case 2:
		drawSecond();
	case 1:
		drawFirst();
	default:
		break;
	}
}

void HandMaenDrawer :: drawFirst(){
	SetConsoleTextAttribute(h, FOREGROUND_RED);
	cout<<" |"<<endl;
	cout<<" |"<<endl;
	cout<<" |"<<endl;
	cout<<" |"<<endl;
	SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);
}

void HandMaenDrawer :: drawSecond(){
	SetConsoleTextAttribute(h, FOREGROUND_RED);
	goToXY(1,1);
	cout<<" ____"<<endl;
	SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);
}

void HandMaenDrawer :: drawThird(){
	SetConsoleTextAttribute(h, FOREGROUND_RED);
	goToXY(3,2);
	cout<<"   |"<<endl;
	SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);
}

void HandMaenDrawer :: drawFourth(){
	SetConsoleTextAttribute(h, FOREGROUND_RED);
	goToXY(3,3);
	cout<<"   "<<char(2);
	SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);
}

void HandMaenDrawer :: drawFifth(){
	SetConsoleTextAttribute(h, FOREGROUND_RED);
	goToXY(1,4);
	cout<<"    *O*"<<endl;
	cout<<"     * *";
	SetConsoleTextAttribute(h, FOREGROUND_INTENSITY);

}

void HandMaenDrawer :: goToXY(int x , int y){ 
	 COORD c={x,y};
	 SetConsoleCursorPosition(h,c);
}