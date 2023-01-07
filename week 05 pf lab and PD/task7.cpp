#include<iostream>
#include<cmath>
using namespace std;
void time(int hours, int minutes);
main()
{
int hours,minutes;
cout<<"enter the hours = ";
cin>>hours;
cout<<"enter the minutes  = ";
cin >> minutes;



time (hours,minutes);

}
void time( int hours,int minutes)
{
 minutes = minutes + 15;
if(minutes>60)
{
minutes = minutes - 60;
hours = hours + 1 ;
}

if(hours>23)
{
    hours = hours - 24;
}
cout<<"the time is ="<<hours <<":"<<minutes;
}
