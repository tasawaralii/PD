#include<iostream>

using namespace std;

main () {

	float pvegetables,pfruits;
	int nvegetables,nfruits,total;

	cout << "Enter vegetable price per kilogram (in coins): ";
	cin >> pvegetables;

	cout << "Enter fruit price per kilogram (in coins): ";
	cin >> pfruits;

	cout << "Enter Total Kilogram of vegetables: ";
	cin >> nvegetables;

	cout << "Enter total kilogram of fruits: ";
	cin >> nfruits;

	total = ((pvegetables*nvegetables) + (pfruits*nfruits)) / 1.94;
	cout << "Total earnings in Rupees (Rps): " << total;
}