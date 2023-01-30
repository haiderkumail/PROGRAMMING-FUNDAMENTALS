#include<iostream>
using namespace std;
int printDigits(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    int result = printDigits(number);
    cout<<result;
    
}
int printDigits(int number)
{  
     int counter = 0;
    while(number!=0)
    {
       number = number / 10;
       counter = counter +1;   
          
    }     
    return counter;
}
