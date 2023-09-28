#include <iostream>
using namespace std;

int odd_even() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  if (n % 2 == 0) {
    cout << "Entered number is even: " << n;
  } else {
    cout << "Entered number is odd:  " << n;
  }
  return 0;
}
