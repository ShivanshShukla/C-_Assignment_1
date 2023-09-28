#include <iostream>
using namespace std;

int divisible() {
  int num;
  cout << "Enter a number to check whether divisible by 7 or not: ";
  cin >> num;
  if (num % 7 == 0) {
    cout << "Yes the number is divisible: " << num / 7;
  } else {
    cout << "No the number is not divisible";
  }
  return 0;
}