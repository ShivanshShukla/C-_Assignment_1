#include <iostream>
using namespace std;

int radius() {
  float r, area;
  const float pi = 3.14;
  cout << "Enter the radius: ";
  cin >> r;
  area = pi * r * r;
  cout << "The area of the circle is: " << area;
  return 0;
}