#include <iostream>
using namespace std;
float checkCost(string city, string product, int quantity);
main() {
  string city;
  string product;
  int quantity;
  cout << "enter the city:";
  cin >> city;
  cout << "enter the product:";
  cin >> product;
  cout << "enter the quantity:";
  cin >> quantity;
  float result = checkCost(city, product, quantity);
  cout << result;
}
float checkCost(string city, string product, int quantity) {
  float cost;
  if (product == "coffee") {
    if (city == "sofia") {
      cost = 0.50 * quantity;
    }
    if (city == "plovdiv") {
      cost = 0.40 * quantity;
    }
    if (city == "verna") {
      cost = 0.45 * quantity;
    }
  }
  if (product == "water") {
    if (city == "sofia") {
      cost = 0.80 * quantity;
    }
    if (city == "plovdiv") {
      cost = 0.70 * quantity;
    }
    if (city == "verna") {
      cost = 0.75 * quantity;
    }
  }
  if (product == "beer") {
    if (city == "sofia") {
      cost = 1.20 * quantity;
    }
    if (city == "plovdiv") {
      cost = 1.15 * quantity;
    }
    if (city == "verna") {
      cost = 1.10 * quantity;
    }
  }
  if (product == "sweets") {
    if (city == "sofia") {
      cost = 1.45 * quantity;
    }
    if (city == "plovdiv") {
      cost = 1.30 * quantity;
    }
    if (city == "verna") {
      cost = 1.35 * quantity;
    }
  }
  if (product == "peanuts") {
    if (city == "sofia") {
      cost = 1.60 * quantity;
    }
    if (city == "plovdiv") {
      cost = 1.50 * quantity;
    }
    if (city == "verna") {
      cost = 1.55 * quantity;
    }
  }
  return cost;
}
