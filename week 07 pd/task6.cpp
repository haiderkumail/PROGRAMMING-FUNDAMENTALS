#include<iostream>
using namespace std;
main()
{
    int days;
    cout<<"enter the days:";
    cin>>days;
    int number;
    int doctor = 7;
    int treated = 0;
    int untreated=0;
    for(int x =1;x<=days;x++)
    {
        cout<<"enter the coming patients:";
        cin>>number;
        if(x%3==0 && untreated>treated)
        {
             doctor = doctor + 1;
        }
        if(number>doctor)
        {
            untreated = untreated + (number - doctor);
            treated = treated + doctor;
        }
        if(number<=doctor)
        {
            untreated = untreated +0;
            treated = treated +number;
        }
         cout<<"treated are:"<<treated<<endl;
         cout<<"untreated are:"<<untreated<<endl;
    }   
        
            
}