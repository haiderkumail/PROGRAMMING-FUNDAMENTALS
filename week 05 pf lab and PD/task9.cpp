#include <iostream>
#include <cmath>
using namespace std;
void separate(int number,int num1);
    main()
{
    int num1,number;
    cout << "enter the number(1..99) = ";
    cin >> num1;
    separate(number,num1);
}
void separate(int number,int num1)
{
int num2 = num1%10;
int num3 = num1/10;
int num4 = num3%10;
string firstDigit,secondDigit;
if(num4==0)
{
    cout<< " ";
}
if(num4==2)
{
    cout<<"twenty";
}
if(num4==3)
{
    cout<<"thirty";
}
if(num4==4)
{
    cout<<"forty";
}
if(num4==5)
{
    cout<<"fifty";
}
if(num4==6)
{
    cout<<"sixty";
}
if(num4==7)
{
    cout<<"seventy";
}
if(num4==8)
{
    cout<<"eighty";
}
if(num4==9)
{
    cout<<"ninety";
}

if(num2==0)
{
    cout<<" ";
}
if(num2==1)
{
    cout<<"one ";
}
if(num2==2)
{
    cout<<"two ";
}
if(num2==3)
{
    cout<<"three ";
}
if(num2==4)
{
    cout<<"four ";
}
if(num2==5)
{
    cout<<"five ";
}
if(num2==6)
{
    cout<<"six ";
}
if(num2==7)
{
    cout<<"seven ";
}
if(num2==8)
{
    cout<<"eight ";
}
if(num2==9)
{
    cout<<"nine ";
}










}