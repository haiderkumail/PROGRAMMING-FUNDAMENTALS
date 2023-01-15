#include<iostream>
using namespace std;
float numbers(int num1,int num2,int num3);
main()
{
int result =numbers(4,3,1) ;
cout<< result;
}
float numbers(int num1,int num2,int num3)
{

int greatest;
if(num1>num2 && num1>num3 )
{
    greatest = num1;
}
if(num2>num1 && num2>num3 )
{
    greatest = num2;
}
if(num3>num1 && num3>num2 )
{
    greatest = num3;
}
return greatest;
}
