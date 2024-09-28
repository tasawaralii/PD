#include<iostream>
#include<windows.h>

using namespace std;

void gotoxy(int,int);
void movePlayer(bool&,int&,int&,int&);
void printPlayer(int,int);

main () {

int x = 1,y = 1,limit = 20;
bool up = true;


system("cls");

	while(true) {
	up = !up;
	movePlayer(up,x,y,limit);

	}

}

void movePlayer(bool& up,int& x,int& y,int& limit) {

	while(true) {

		if (up) {
		
		x--; y--;

		} else {
	
		x++; y++;
	
		}

		if(x == limit || x == 1)
		break;

		printPlayer(x,y);	


	}
}


void gotoxy(int x,int y) {

COORD coordinates;

coordinates.X = x;
coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void printPlayer(int x,int y) {

	gotoxy(x,y);
	cout << "Player";
	Sleep (200);
	gotoxy(x,y);
	cout << "      ";
}