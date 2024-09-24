#include<iostream>

using namespace std;

main () {

	int sides,degree;

	cout << "Enter The Number Of sides of the Polygon: ";
	cin >> sides;

	degree = (sides - 2) * 180;

	cout << endl << "The sun of internal angles of a " << sides << "-sided polygon is: " << degree << " degrees";

}