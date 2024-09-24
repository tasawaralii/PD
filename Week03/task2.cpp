#include<iostream>

using namespace std;

main () {

	int minutes,frate,frames;

	cout << "Number Of minutes: ";
	cin >> minutes;


	cout << endl << "Frames per second: ";
	cin >> frate;

	frames = minutes * 60 * frate;
	
	cout << endl << "Total Number Of Frames " << frames;

}