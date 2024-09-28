#include<iostream>

using namespace std;

void IsEqual(int,int);


main () {

	int a,b;

	cout << "Enter Number 1: ";
	cin >> a;

	cout << "Enter Number 2: ";
	cin >> b;

	IsEqual(a,b);

}


void IsEqual(int a,int b) {
	
	cout << (a == b ? "True" : "False");

	}