#include <iostream>
using namespace std;

int vowel() {
  char c;
  cout << "Enter a character: ";
  cin >> c;
  switch (c) {
  case 'a':
    cout << "Vowel";
    break;
  case 'e':
    cout << "Vowel";
    break;
  case 'i':
    cout << "Vowel";
    break;
  case 'o':
    cout << "Vowel";
    break;
  case 'u':
    cout << "Vowel";
    break;
  default:
    cout << "Not a Vowel";
  }

  return 0;
}