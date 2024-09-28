#include<iostream>
#include<windows.h>

using namespace std;

void gotoxy(int,int);

main () {

int x = 90,y = 1;


system("cls");

gotoxy(x,y);

cout << "Tasawar";

}

void gotoxy(int x,int y) {

COORD coordinates;

coordinates.X = x;
coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
