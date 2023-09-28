#include <iostream>
using namespace std;

int month() {
  int num;
  int n1 = 31, n2 = 30;
  cout << "Enter a month number to find number of days: ";
  cin >> num;
  if (num == 2) {
    cout << "The number of days is 28";
  } else if ((num >= 1) && (num <= 7)) {
    if (num % 2 == 0) {
      cout << "the number of days will be " << n2;
    } else {
      cout << "the numbe of days will be " << n1;
    }
  } else {
    if (num % 2 == 0) {
      cout << "the number of days will be " << n1;
    } else {
      cout << "the number of days will be " << n2;
    }
  }
  return 0;
}