#include "one/all_header_file.h"
#include <iostream>
using namespace std;
int main() {
  int stop = 0;
  while (stop == 0) {
    cout << "\nEnter '0' to continue or 1 to end: ";
    cin >> stop;
    if (stop == 1) {
      cout << "\nProgram terminates, Bye \n";
      break;
    } else {
      int num;
      cout << "\n Welcome to C++ Assignment 1";
      cout << "\nThis is a menu driven assignment please select any program of "
              "the "
              "following: ";
      cout
          << "\n 1) Enter two number to use bitwise operations: \n 2)Enter a "
             "number to check whether it is odd | even: \n 3)Enter a number to "
             "check whether it is positive or negative: \n 4) Enter radius and "
             "print its area: \n 5)Take 2 number and print the largest: \n "
             "6)Take "
             "3 number to print the largest: \n 7)Print profit or loss: \n "
             "8)Month and the number of days: \n 9)To check whether the "
             "character "
             "is vowel or not: \n 10)Number divisible by 7 or not: \n 11)Print "
             "month name when number is entered: ";

      cout << "\n Enter a number from between 1 to 11: ";
      cin >> num;

      switch (num) {
        // bitwise operators
      case 1:
        cout << "\nBitwise\n";
        bitwise();
        break;
      case 2:
        cout << "\nODD OR EVEN\n";
        // odd even
        odd_even();
        break;
      case 3:
        // pos_neg
        cout << "\nPositive or negative\n";
        pos_neg();
        break;
      case 4:
        cout << "\nRadius of a cirlce\n";
        // radius
        radius();
        break;
      case 5:
        cout << "\nLargest among the 2\n";
        // largest of two numbers
        largest2();
        break;
      case 6:
        cout << "\nLarges among the 3\n";
        // largest of three numbers
        largest3();
        break;
      case 7:
        cout << "\nProfit or Loss\n";
        // profit and loss
        profit_loss();
        break;

      case 8:
        cout << "\nMonth and it's number of days\n";
        // month and its days
        month();
        break;
      case 9:
        cout << "\nWheter the character is vowel or not\n";
        // vowel
        vowel();
        break;
      case 10:
        cout << "\nNumber is divisible by 7\n";
        // divisible by 7
        divisible();
        break;
      case 11:
        cout << "\nMonth and it's name\n";
        // month and it's name
        month1();
        break;
      default:
        cout << "\nEnter a valid number\n";
      }
    }
  }

  return 0;
}