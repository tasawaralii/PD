#include <iostream>
using namespace std;

void checkSpeed(int);

main() {

    int speed;
    cout << "Enter the speed of the car: ";
    cin >> speed;

    checkSpeed(speed);

}


void checkSpeed(int speed) {
    if (speed > 100) {
        cout << "Halt... YOU WILL BE CHALLENGED!!!" << endl;
    } else {
        cout << "Perfect! You're going good." << endl;
    }
}