#include <iostream>
using namespace std;
string aggregate(string name, float percentage, string grade, int sum,
                 float percent);
main() {
  float percentage;
  string grade;
  int marks;
  string name;
  cout << "enter the name of student:";
  cin >> name;
  int subject1, subject2, subject3, subject4, subject5;
  cout << "enter the subject1 marks:";
  cin >> subject1;
  cout << "enter the subject2 marks:";
  cin >> subject2;
  cout << "enter the subject3 marks:";
  cin >> subject3;
  cout << "enter the subject4 marks:";
  cin >> subject4;
  cout << "enter the subject5 marks:";
  cin >> subject5;
  int sum = subject1 + subject2 + subject3 + subject4 + subject5;
  cout << "total obtain marks=" << sum;
  float percent;
  percent = (sum * 100) / 500;
  cout << "the percentage is=" << percent << endl;
  string result = aggregate(name, percentage, grade, sum, percent);
  cout << result;
}
string aggregate(string name, float percentage, string grade, int sum,
                 float percent) {
  string grade1;

  if (percent >= 90 && percent <= 100) {
    grade1 = "A+";
  }
  if (percent >= 80 && percent <= 89) {
    grade1 = "A";
  }
  if (percent >= 70 && percent <= 79) {
    grade1 = "B+";
  }
  if (percent >= 60 && percent <= 69) {
    grade1 = "B";
  }
  if (percent >= 50 && percent <= 59) {
    grade1 = "C";
  }
  if (percent >= 40 && percent <= 49) {
    grade1 = "D";
  }
  if (percent > 40) {
    grade1 = "F";
  }
  return grade1;
}