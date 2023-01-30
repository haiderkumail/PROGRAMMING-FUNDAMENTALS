#include<iostream>
using namespace std;
int digitSum(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    int result = digitSum(number);
    cout <<result;
}
int digitSum(int number)
{
    int counter = 0;
   while(number!=0)
    {
        int digit = number % 10;
        number = number /10;
        counter = counter + digit;
    }
    return counter;
}