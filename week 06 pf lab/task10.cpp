#include<iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    int speed;
    cout<<"enter the speed=";
    cin >> speed;
    string result = checkSpeed(speed);
    cout<<result;
}
string checkSpeed(float speed)
{
    string motion;
    if(speed<=10)
    {
       motion = "slow";

    }
    if(speed>10 && speed<=50)
    {
        motion = "average";
    }
    if(speed>50 && speed<=150)
    {
        motion = "fast";
    }
    if(speed>150 && speed<=1000)
    {
        motion = "ultra fast";
    }
    if(speed>1000)
    {
        motion = "extremely fast";
    }
    return motion;
    
    
}