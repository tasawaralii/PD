#include<iostream>
using namespace std;

main() {

  int sqmeter,width,height,n;
  
  cout << "Number of square metres you can paint:";
  cin >> sqmeter;

  
  cout << "Width of single wall (in meters):";
  cin >> width;

  
  cout << "Height of single wall in (in meters):";
  cin >> height;

  n = sqmeter/(width*height);
  cout << "Number of Walls you can paint: " << n;
}
