#include<iostream>
using namespace std;

void tpChecker(int,int);

main () {

	int people,tp;

	cout << "Enter Number of people in the household: ";
	cin >> people;

	cout << "Enter Number Of Rolls: ";
	cin >> tp;

	tpChecker(people,tp);

}

void tpChecker(int people, int tp) {

	int days = (tp * 500) / (people * 57);

	if(days >= 14) {

	cout << "Your TP will last " << days << " days, no need to panic.";
	

	} else {

	cout << "Your TP will last only " << days << " days, buy more!";

	}


}