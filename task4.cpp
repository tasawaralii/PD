#include<iostream>

using namespace std;

main () {

	float imposter,player,chance;

	cout << endl << "Enter Imposter Count: " ;
	cin >> imposter;

	cout << endl << "Enter Player Count: " ;
	cin >> player;

	chance = (imposter/player) * 100;
	cout << endl << "Chance Of Being imposter: " << chance << "%" ;

}