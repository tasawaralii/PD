#include<iostream>

using namespace std;

void FindDiscount(string,int);


main () {

	int price;
	string country;


	cout << "Enter Country Name (lowercase): ";
	cin >> country;

	cout << "Enter Price : ";
	cin >> price;

	FindDiscount(country,price);

}


void FindDiscount(string country,int price) {
	
	float disc;

    if (country == "pakistan") {
        disc = price * 0.95;
    } 
    else if (country == "ireland") {
        disc = price * 0.90;
    } 
    else if (country == "india") {
        disc = price * 0.80;
    } 
    else if (country == "england") {
        disc = price * 0.70;
    } 
    else if (country == "canada") {
        disc = price * 0.55;
    } 
    else {
        cout << "No discount available for your country." << endl;
        disc = price;
    }

    cout << "The final price after discount is: " << disc << endl;


	}