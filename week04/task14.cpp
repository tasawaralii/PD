#include <iostream>
using namespace std;


void longestTime(int,int);

int main() {
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    longestTime(hours, minutes);

}




void longestTime(int h, int m) {
    cout << (h * 60 > m ? h : m);
}
