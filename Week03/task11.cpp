#include<iostream>

using namespace std;

main () {

	int age,times,avg;
	
	cout << "Enter the persons's age: ";
	cin >> age;
	
	cout << "Enter the number of times they've moved: ";
	cin >> times;
	
	avg = age/(times+1);

	cout << endl << "Average number of years lived in same house: " << avg;

}