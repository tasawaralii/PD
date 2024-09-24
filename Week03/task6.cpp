#include<iostream>

using namespace std;

main () {

	int fpound,bagcost,areapbag,fcost,fcostpfoot;

	cout << endl << "Enter size of fertilizer bag in pounds: ";
	cin >> fpound;

	cout << endl << "Enter The cost of bag: ";
	cin >> bagcost;

	cout << endl << "Enter the area in square feet that can be covered by the bag: ";
	cin >> areapbag;

	fcost = bagcost / fpound;
	cout << endl << "Cost of fertilizer per pound: " << fcost;

	fcostpfoot = fpound * areapbag;
	cout << endl << "Cost of fertilizer per square foot: " << fcostpfoot;

}