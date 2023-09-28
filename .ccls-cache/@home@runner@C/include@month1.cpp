#include <iostream>
using namespace std;

int month1() {
  int num;
  cout << "Enter a number to get it's month name: ";
  cin >> num;
  switch (num) {
  case 1:
    cout << "January";
    break;
  case 2:
    cout << "February";
    break;
  case 3:
    cout << "March";
    break;
  case 4:
    cout << "April";
    break;
  case 5:
    cout << "May";
    break;
  case 6:
    cout << "June";
    break;
  case 7:
    cout << "July";
    break;
  case 8:
    cout << "August";
    break;
  case 9:
    cout << "September";
    break;
  case 10:
    cout << "October";
    break;
  case 11:
    cout << "November";
    break;
  case 12:
    cout << "December";
    break;
  default:
    cout << "Enter the correct month number";
    break;
  }

  return 0;
}