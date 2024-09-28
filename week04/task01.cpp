#include<iostream>
#include<windows.h>


using namespace std;

void gotoxy(int,int);

main() {
	
	system("cls");

	gotoxy(3,3);

	cout << "My Name is Tasawar";

}









void gotoxy(int x, int y) {

	COORD coordinates;

	coordinates.X = x;
	coordinates.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
