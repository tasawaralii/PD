#include<iostream>

using namespace std;

main () {
	
	int n,n1,n2,n3,n4,sum;

	cout << "Eneter a 4-digit number: ";
	cin >> n;

	n1 = (n/1000);
	n2 = (n/100) % 10;
	n3 = (n/10) % 10;
	n4 = n % 10;
	sum = n1+n2+n3+n4;

	cout << "Sum of individual digits: " << sum;

}