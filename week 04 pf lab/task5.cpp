#include <iostream>
using namespace std;
void add (int num1,int num2);
void multiply (int num1,int num2);
void divide (int num1,int num2);
void subtract(int num1,int num2);
main(){
int num1,num2;
char operation;
while (true){
cout << "enter 1st number=";
cin >> num1;
cout << "enter 2nd number=";
cin >> num2;

cout << "enter operation(+,-,*,/):";
cin >> operation;
if (operation=='+'){
add(num1,num2);
}
if  (operation=='-'){
subtract(num1,num2);
}
if (operation=='*'){
multiply(num1,num2);
}
if (operation=='/'){
divide(num1,num2);
}
}
} 
void add (int num1,int num2){
  int sum = num1+num2;
cout << "sum is=" << sum << endl;
}
void multiply (int num1,int num2){
int multiply= num1*num2;
cout << "multiply is=" << multiply << endl;
}
void divide (int num1,int num2){
int divide = num1/num2;
cout << "divide is=" << divide <<endl;
}
void subtract (int num1,int num2){
int subtract = num1-num2;
cout << "subtract is=" << subtract << endl;
}
