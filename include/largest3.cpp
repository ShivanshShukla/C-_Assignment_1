#include <iostream>
using namespace std;

int largest3() {
  int a, b, c;
  cout << "Enter three numbers to check the largest: ";
  cin >> a >> b >> c;
  if ((a > b) && (a >> c)) {
    cout << "The number 'a' is greater: " << a;
  } else if ((b > c) && (b >> a)) {
    cout << "The number 'b' is greater: " << b;
  } else if ((c > a) && (c > b)) {
    cout << "The number 'c' is greater: " << c;
  }
  return 0;
}