#include<iostream>

using namespace std;

main () {

	int ini_vel, acc, time, fin_vel;

	cout << endl << "Enter Initial Velocity (m/s): ";

	cin >> ini_vel;

	cout << endl << "Enter Acceleration (m/s^2): ";

	cin >> acc;

	cout << endl << "Enter Time (s): ";

	cin >> time;

	fin_vel = (acc * time) + ini_vel;

	cout << endl << "Final Velocity (m/s): " << fin_vel;

}