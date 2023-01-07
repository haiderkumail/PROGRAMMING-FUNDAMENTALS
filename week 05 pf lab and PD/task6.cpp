#include<iostream>
#include<cmath>
using namespace std;
string isEven(int number, string result);

main()
{
int number;
cout << "enter a five digit number = ";
cin >> number;
string result;
result = isEven(number,result);

}


string isEven( int number, string result)
{
int num1 = number % 10;
int num2 = number / 10;
int num3 = num2 % 10;
int num4 = num2 / 10;
int num5 = num4 % 10;
int num6 = num4 / 10;
int num7 = num6 % 10;
int num8 = num6 / 10;
int num9 = num8 % 10;
int sum = num1+num3+num5+num7+num9;



if (sum%2==0)
{
    cout<<"evenish" <<endl;
}
if (sum%2!=0)
{
    cout<<"oddish" <<endl;
}
return result;
}

