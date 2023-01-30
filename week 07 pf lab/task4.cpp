#include<iostream>
using namespace std;
int frequencyChecker(int number,int digit);
main()
{
    int number;
    int digit;
    cout<<"enter the number:";
    cin>>number;
    cout<<"enter the digit:";
    cin>>digit;
    int result = frequencyChecker(number,digit);
    cout<<result;
}
int frequencyChecker(int number,int digit)
{
    int counter = 0;
    while(number!=0)
    {
         int digit1 = number % 10;
        
        if(digit1 == digit)
        {
            counter = counter + 1;

        }
         number = number / 10;
         
    }
    return counter;
}