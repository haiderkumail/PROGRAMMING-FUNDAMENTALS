#include<iostream>
using namespace std;
string isEven(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>> number;
    string result = isEven(number);
    cout<<"entered number is:"<<result;
    
}
string isEven(int number)
{   
    string result;
    
    if(number%2==0)
    {
      result = "even";
    }
    else
    {
        result = "odd";

    }
    return result;
}