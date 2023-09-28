#include <iostream>
using namespace std;

int largest2() {
  int a, b;
  cout << "Enter two numbers to check the largest among them: ";
  cin >> a >> b;
  if (a > b) {
    cout << "The 'a' is greater: " << a;
  } else {
    cout << "The 'b' is greater: " << b;
  }

  return 0;
}