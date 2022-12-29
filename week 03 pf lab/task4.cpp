#include <iostream>
using namespace std;
main(){

string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
int sum;
float percentage;
float totalpercentage;
cout << "enter your name:";
cin >> name;
cout << "enter marks of first subject:";
cin >> subject1;
cout << "enter marks of second subject:";
cin >> subject2;
cout << "enter marks of third subject:";
cin >> subject3;
cout << "enter marks of forth subject:";
cin >> subject4;
cout << "enter marks of fifth subject:";
cin >> subject5;
sum = subject1 + subject2 + subject3 + subject4 + subject5;
cout << "the sum is=" << sum;

percentage = sum * 100;
totalpercentage = percentage / 500;

cout << "your percentage is :" << totalpercentage;

} 