#include <cmath>
#include <iostream>

using namespace std;

main() {

  int a = 5, b = 6, c = 1;
  int num = 2;
  float exp = pow(b, num);
  float exp1 = 4 * a * c;
  float exp2 = exp - exp1;
  float exp3 = sqrt(exp2);
  float exp4 = -b + exp3;
  float exp5 = exp4 / (2 * a);

  cout << "the answer is=" << exp5;

  int d = 5, e = 6, f = 1;
  int num1 = 2;
  float exp6 = pow(e, num1);
  float exp7 = 4 * e * f;
  float exp8 = exp6 - exp7;
  float exp9 = sqrt(exp8);
  float exp10 = -e - exp9;
  float exp11 = exp10 / (2 * d);

  cout << "the answer is=" << exp11;
}