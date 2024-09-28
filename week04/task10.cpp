#include<iostream>

using namespace std;

void Reverse(string);


main () {

	string a;

	cout << "Enter 'true' or 'false': ";
	cin >> a;

	Reverse(a);

}


void Reverse(string a) {
	
	cout << (a == "false" ? "True" : "False");

	}