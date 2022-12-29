#include <iostream>
using namespace std;
main(){

int number;
cout << "enter four digit number:";
cin >> number;

int num1;
num1 = number%10;
cout << num1 << endl;

int num2,num3;
num2 = number/10;
num3 = num2%10;
cout << num3 << endl;
 
int num4,num5;
num4 = num2/10;
num5 = num4%10;
cout << num5 << endl;

int num6,num7;
num6=num4/10;
num7=num6%10;
cout << num7 << endl;

int sum1;
sum1 = num7+num3;
cout << "the sum is=" << sum1 << endl;

int multiply;
multiply=num1*num5;
cout << "the multilication is=" << multiply << endl;

int sum2;
sum2=sum1+multiply;
cout << "the total sum is=" << sum2 ;

























}