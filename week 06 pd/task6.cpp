#include <iostream>
using namespace std;
float totalrent(string month, int stay, string room);
main() {
  string month;
  int stay;
  string room;
  cout << "enter the month:";
  cin >> month;
  cout << "enter the total stay:";
  cin >> stay;
  cout << "enter the type of room:";
  cin >> room;

  float result = totalrent(month, stay, room);
  cout << result;
}
float totalrent(string month, int stay, string room) {
  float rent;
  if (month == "may" || month == "october") {
    if (room == "appartment") {
      if (stay >= 14) {
        rent = stay * 65;
        float discount = (rent * 10) / 100;
        rent = rent - discount;
      } else {
        rent = stay * 65;
      }
    }
  }
  if (room == "studio") {
    if (stay >= 7) {
      rent = stay * 50;
      float discount = (rent * 5) / 100;
      rent = rent - discount;
    }
    if (stay >= 14) {
      rent = stay * 50;
      float discount = (rent * 30) / 100;
      rent = rent - discount;
    }
  }

  if (month == "june" || month == "september") {
    if (room == "appartment") {
      if (stay >= 14) {
        rent = stay * 68.7;
        float discount = (rent * 10) / 100;
        rent = rent - discount;
      } else {
        rent = stay * 68.7;
      }
    }
  }
  if (room == "studio") {
    if (stay >= 14) {
      rent = stay * 75.2;
      float discount = (rent * 20) / 100;
      rent = rent - discount;
    }
  }

  if (month == "july" || month == "august") {
    if (room == "appartment") {
      if (stay > 14) {
        rent = stay * 77;
        float discount = (rent * 10) / 100;
        rent = rent - discount;
      }
      if (stay < 14) {
        rent = stay * 77;
      }
    }
  }
  if (room == "studio") {
    rent = stay * 76;
  }

  return rent;
}