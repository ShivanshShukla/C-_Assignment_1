#include <iostream>
using namespace std;
int pos_neg() {
  int num;
  cout << "\nEnter a number:";
  cin >> num;
  if (num > 0) {
    cout << "Entered number is positive: " << num;
  } else if (num < 0) {
    cout << "Entered number is negitive: " << num;
  } else {
    cout << "Entered number is 0";
  }
  return 0;
}
