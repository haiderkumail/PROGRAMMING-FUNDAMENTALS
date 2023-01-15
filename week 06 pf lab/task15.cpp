#include <cmath>
#include <iostream>

using namespace std;
float plays(string year, float holidays, float weekends);
main() {
  string year;
  float holidays, weekends;
  cout << "enter the year type=";
  cin >> year;
  cout << "enter the number of holidays=";
  cin >> holidays;
  cout << "enter the weekends in which he goes to hometown=";
  cin >> weekends;
  int output = plays(year, holidays, weekends);
  cout << output;
}
float plays(string year, float holidays, float weekends) {
  float output1, output2, output3, output4;
  float output;
  if (year == "leap") {
    output1 = (48 * 3) / 4;
    output2 = (holidays * 2) / 3;
    output3 = output1 + output2;
    output4 = output3 * 0.15;
    output = output3 + output4;
  }
  if (year == "normal") {
    output1 = (48 * 3) / 4;
    output2 = (holidays * 2) / 3;
    output = output1 + output2;
  }
  return output;
}