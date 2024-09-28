#include <iostream>
using namespace std;


void possibleBonus(int,int);

main() {
    int yourPosition, friendPosition;
    cout << "Enter your position: ";
    cin >> yourPosition;
    cout << "Enter your friend's position: ";
    cin >> friendPosition;

    possibleBonus(yourPosition, friendPosition);

}



void possibleBonus(int a, int b) {
    if (b - a >= 1 && b - a <= 6) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
