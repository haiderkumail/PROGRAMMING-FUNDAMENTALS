#include<iostream>
#include<cmath>
using namespace std;
void isCapital(char alphabet);
main()
{
char alphabet;
cout<<"enter the alphabet = ";
cin>>alphabet;
isCapital(alphabet);
}
void isCapital(char alphabet)
{
    
    if(alphabet=='A')
    {
        cout<<"you enter capital A";
    }
    if(alphabet!='A')
    {
      cout<<"you enter small a";

    }
}