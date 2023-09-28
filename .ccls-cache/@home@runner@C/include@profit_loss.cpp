#include <iostream>
using namespace std;

int profit_loss() {
  int sp, cp;
  float profit, loss;
  cout << "Enter selling price: ";
  cin >> sp;
  cout << "Enter cost price: ";
  cin >> cp;
  if (sp > cp) {
    profit = sp - cp;
    cout << "The profit will be: " << profit;
  } else if (sp == cp) {
    cout << "The profit and loss is 0";
  } else {
    loss = cp - sp;
    cout << "The loss will be: " << loss;
  }

  return 0;
}