#include<iostream>
#include<windows.h>

using namespace std;

void gotoxy(int,int);
void printmaze();
void movePlayer(int,int);

main () {

int x = 3,y = 4;


system("cls");

printmaze();

	while(true) {

		movePlayer(x,y);
		
		x = (x == 30 ? 4 : ++x);
	}

}




void movePlayer(int x,int y) {

	gotoxy(x,y);

	cout << "P";

	Sleep(100);

	gotoxy(x,y);

	cout << " ";


}
void gotoxy(int x,int y) {

COORD coordinates;

coordinates.X = x;
coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}


void printmaze() {


cout << "#################################" << endl;
cout << "##                             ##" << endl;
cout << "##                             ##" << endl;
cout << "##                             ##" << endl;
cout << "##                             ##" << endl;
cout << "##                             ##" << endl;
cout << "##                             ##" << endl;
cout << "##                             ##" << endl;
cout << "#################################" << endl;

}

