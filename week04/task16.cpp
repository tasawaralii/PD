#include<iostream>
using namespace std;

void pet(int);
void minToHour(int);
main () {

	int holidays;

	cout << "Enter The Number Of Holidays: ";
	cin >> holidays;

	pet(holidays);

}

void pet(int holidays) {

int TimeForGames,DifferenceFromNorm;

TimeForGames = (365 - holidays) * 63 + holidays * 127;
DifferenceFromNorm = 30000 - TimeForGames;

	if(DifferenceFromNorm > 0) {

	cout << "Tom sleeps Well." << endl;
	minToHour(DifferenceFromNorm);
	cout << " less for play";

	} else {

	cout  << "Tom Will run away." << endl;
	minToHour(DifferenceFromNorm * -1);
	cout << " More to Play";
	}
	
	
}

void minToHour(int min) {

cout << (min / 60) << " hours and " << (min % 60) << " mintues" ;

}