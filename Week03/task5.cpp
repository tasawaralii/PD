#include<iostream>

using namespace std;

main () {

	string name;	
	float days,kg;

	cout << endl << "Enter the Name of the Person: ";
	cin >> name;

	cout << endl << "Enter the target weight loss in kilogram: ";
	cin >> kg;

	days = kg * 15;

	cout << endl << name << " will need "  << days << " to loss " << kg << " of weight.";

}