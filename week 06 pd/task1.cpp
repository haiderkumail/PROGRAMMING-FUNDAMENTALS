#include <iostream>
using namespace std;
string game(string temperature, string humidity);
main() {
  string temperature, humidity;
  cout << "enter the temperature:";
  cin >> temperature;
  cout << "enter the humidity:";
  cin >> humidity;
  string result = game(temperature, humidity);
  cout << result;
}
string game(string temperature, string humidity) {
  string play;
  if (temperature == "warm") {
    if (humidity == "dry") {
      play = "play tennis";
    }
    if (humidity == "humid") {
      play = "swim";
    }
  }
  if (temperature == "cold") {
    if (humidity == "dry") {
      play = "play basketball";
    }
    if (humidity == "humid") {
      play = "watch tv";
    }
  }
  return play;
}
