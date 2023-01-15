#include<iostream>
using namespace std;
float totalIncome(string screens,float rows, float columns);
main()
{
    string screens;
    cout<<"enter the screen type =";
    cin >>screens;
    int rows,columns;
    cout<<"enter the number of rows=";
    cin >>rows;
    cout<<"enter the number of columns=";
    cin >> columns;
    float result = totalIncome(screens,rows,columns);
    cout<<result;
}
float totalIncome(string screens,float rows, float columns)
{
    float income;
    if(screens == "premiere")
    {
       income = 12.00 * (rows * columns);
    }
    if(screens == "normal")
    {
        income = 7.50 * (rows * columns);
    }
    if(screens == "discount")
    {
        income = 5.00 * (rows * columns);
    }
    return income;
}