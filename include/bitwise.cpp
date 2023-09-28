#include <iostream>
using namespace std;

int bitwise() {
  int a, b;
  cout << "Enter the values of a & b respectively: ";
  cin >> a >> b;
  cout << "\nValues of a & b :" << a << b;
  cout << "\na<<1 : " << (a << 1);
  cout << "\nb<<1: " << (b << 1);
  cout << "\na>>1 : " << (a >> 1);
  cout << "\nb>>1 : " << (b >> 1);
  cout << "\na & b: " << (a & b);
  cout << "\na | b: " << (a | b);
  cout << "\n~a: " << (~a);
  return 0;
}