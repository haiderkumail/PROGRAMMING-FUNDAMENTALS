#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    int integers;
    int n2=0;
    int n3=0;
    int n4=0;
    int percent1,percent2,percent3;

    for(int x = 1;x<=number;x++)
    {
        cout<<"enter the integers:";
        cin>>integers;
        if(integers%2==0)
        {
           n2=n2+1;
            
           
        }
        if(integers%3==0)
        {
           n3=n3+1;
                       
        }
        if(integers%4==0)
        {
           n4=n4+1;
            
           
        }
    }
    percent1 = (n2 *100) / number ;
    percent2 = (n3 *100) / number ;
    percent3 = (n4 *100) / number ;
    cout<<"percentage of p1="<<percent1<<endl;
    cout<<"percentage of p2="<<percent2<<endl;
    cout<<"percentage of p3="<<percent3<<endl;
}