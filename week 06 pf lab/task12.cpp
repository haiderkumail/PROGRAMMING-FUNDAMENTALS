#include <iostream>
using namespace std;
float lowestPrice(int kilometers, string time);
main() {
  int kilometers;
  cout << "enter the required distance in kilometers=";
  cin >> kilometers;
  string time;
  cout << "enter the period of time=";
  cin >> time;
  float result = lowestPrice(kilometers, time);
  cout << "the cheapest fare =" << result << endl;
}
float lowestPrice(int kilometers, string time) {
  float price;
  if (kilometers < 20 && time == "day") {
    price = (0.79 * kilometers) + 0.70;
  } else {
    price = (0.90 * kilometers) + 0.70;
  }
  if (kilometers >= 20) {
    price = 0.09 * kilometers;
  }
  if (kilometers >= 100) {
    price = 0.06 * kilometers;
  }

  return price;
}