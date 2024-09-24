#include<iostream>

using namespace std;

main () {

	string name;
	int adult,child,nadult,nchild,percent,total,donation,left;

	cout << "Enter The Movie Name";
	cin >> name;
	cout << "Enter the adult ticket price: ";
	cin >> adult;
	cout << "Enter the child ticket price: ";
	cin >> child;
	cout << "Enetr the number of adult tickets sold: ";
	cin >> nadult;
	cout << "Enetr the number of adult tickets sold: ";
	cin >> nchild;
	cout << "Percentage of amount to be donated to charity: ";
	cin >> percent;

	total = (adult * nadult) + (child * nchild);
	donation = (total * percent)/100;
	left = total - donation;

	cout << "Movie: " << name << endl;
	cout << "Total amount generated from ticket sales: $" << total <<endl;
	cout << "Donation to Charity (" << percent << "): " << donation << endl;
	cout << "Remaining amount after donation: " << left;
}