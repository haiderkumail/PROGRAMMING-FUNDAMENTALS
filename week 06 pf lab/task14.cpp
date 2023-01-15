#include <iostream>
using namespace std;
float leftMoney(float budget, string category, int group);
main() {
  float budget;
  string category;
  int group;
  cout << "enter the budget=";
  cin >> budget;
  cout << "enter the category=";
  cin >> category;
  cout << "enter the number of people in group=";
  cin >> group;
  float result = leftMoney(budget, category, group);
  cout << result;
}
float leftMoney(float budget, string category, int group) {
  float money;
  float transport;
  if (category == "vip") {
    if (group >= 1 && group <= 4) {
      transport = (budget * 75) / 100;
      money = budget - transport;
    }

    if (group >= 5 && group <= 9) {
      transport = (budget * 60) / 100;
      money = budget - transport;
    }
    if (group >= 10 && group <= 24) {
      transport = (budget * 50) / 100;
      money = budget - transport;
    }
    if (group >= 25 && group <= 49) {
      transport = (budget * 40) / 100;
      money = budget - transport;
    }
    if (group >= 50) {
      transport = (budget * 25) / 100;
      money = budget - transport;
    }
  }
  if (category == "normal") {
    if (group >= 1 && group <= 4) {
      transport = (budget * 75) / 100;
      money = budget - transport;
    }

    if (group >= 5 && group <= 9) {
      transport = (budget * 60) / 100;
      money = budget - transport;
    }
    if (group >= 10 && group <= 24) {
      transport = (budget * 50) / 100;
      money = budget - transport;
    }
    if (group >= 25 && group <= 49) {
      transport = (budget * 40) / 100;
      money = budget - transport;
    }
    if (group >= 50) {
      transport = (budget * 25) / 100;
      money = budget - transport;
    }
  }
  if (category == "vip" && money >= 499.99) {
    money = money - (group * 499.99);
    if (money > 0) {
      cout << "yes! you have" << money << "leva left";
    } else {
      money = (2 * money) - money;
      cout << "you dont have enough money!you need" << money << "leva";
    }
  }
  if (category == "normal" && money >= 249.99) {
    money = money - (group * 249.99);
    if (money > 0) {
      cout << "yes!you have" << money << "leva left";
    } else {
      money = (2 * money) - money;
      cout << "you dont have enough money!you need" << money << "leva";
    }
  }
  return 0;
}