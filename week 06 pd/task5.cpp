#include <iostream>
using namespace std;
float payablePrice(string fruit, string day, float quantity);

main() {
  string fruit;
  string day;
  float quantity;
  cout << "enter the fruit name:";
  cin >> fruit;
  cout << "enter the day:";
  cin >> day;
  cout << "enter the required quantity:";
  cin >> quantity;
  float result = payablePrice(fruit, day, quantity);
  cout << result;
}
float payablePrice(string fruit, string day, float quantity) {
  float amount;
  if (day == "sunday") {
    if (fruit == "bnana") {
      amount = quantity * 2.70;
    }
    if (fruit == "apple") {
      amount = quantity * 1.25;
    }
    if (fruit == "orange") {
      amount = quantity * 0.90;
    }
    if (fruit == "grapefruit") {
      amount = quantity * 1.60;
    }
    if (fruit == "kiwi") {
      amount = quantity * 3.00;
    }
    if (fruit == "pineapple") {
      amount = quantity * 5.60;
    }
    if (fruit == "grapes") {
      amount = quantity * 4.20;
    }
  } else {
    if (fruit == "bnana") {
      amount = quantity * 2.50;
    }
    if (fruit == "apple") {
      amount = quantity * 1.20;
    }
    if (fruit == "orange") {
      amount = quantity * 0.85;
    }
    if (fruit == "grapefruit") {
      amount = quantity * 1.45;
    }
    if (fruit == "kiwi") {
      amount = quantity * 2.70;
    }
    if (fruit == "pineapple") {
      amount = quantity * 5.50;
    }
    if (fruit == "grapes") {
      amount = quantity * 3.85;
    }
  }
  return amount;
}