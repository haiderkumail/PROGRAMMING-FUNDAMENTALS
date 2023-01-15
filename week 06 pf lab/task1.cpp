#include<iostream>
using namespace std;
main()
{
    int price;
    cout<<"enter the price of suit:";
    cin>>price;
    string brand;
    cout<<"enter the brand:";
    cin>>brand;
    if(price<=1500 && brand=="breakout")
    {
        cout<<"buy the dress!";
    } 
}