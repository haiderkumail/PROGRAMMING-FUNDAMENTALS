#include <iostream>
using namespace std;
float charges(string service, string time, int minutes);
main() {
  string service;
  string time;
  int minutes;
  cout << "enter the type of cutomer service(r,p):";
  cin >> service;
  cout << "enter the period of time(d,n):";
  cin >> time;
  cout << "enter the minutes=";
  cin >> minutes;
  float result = charges(service, time, minutes);
  cout << result;
}
float charges(string service, string time, int minutes) {
  float bill;
  if (service == "r") {
    if (minutes > 50) {
      float bill1 = minutes - 50;
      bill1 = bill1 * 0.20;
      bill = bill1 + 10.00;
    }
  }
  if (service == "p") {
    if (time == "d") {
      if (minutes > 75) {
        int bill2 = minutes - 75;
        bill2 = bill2 * 0.10;
        bill = bill2 + 25.00;
      } else {
        bill = 25.00;
      }
    }
    if (time == "n") {
      if (minutes > 100) {
        float bill3 = minutes - 100;
        bill3 = bill3 * 0.05;
        bill = bill3 + 25.00;
      } else {
        bill = 25.00;
      }
    }
  }
  return bill;
}