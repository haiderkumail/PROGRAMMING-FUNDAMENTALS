#include<iostream>
using namespace std;
int conversion(char check);
main()
{
    int dance;
    bool valid;
    string moves[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string pin;
    cout<<"Enter your Pin (Four Digits): ";
    cin>>pin;
    for(int x=0; x<4; x++)
    {
        if(pin[x]=='0' || pin[x]=='1' || pin[x]=='2' || pin[x]=='3' || pin[x]=='4' || pin[x]=='5' || pin[x]=='6' || pin[x]=='7' || pin[x]=='8' || pin[x]=='9')
        {
            valid=true;
        }
        else
        {
            cout<<"Invalid Input!";
            
        }
    }
    for(int x=0; x<4; x++)
    {
        dance=x+conversion(pin[x]);
        if(dance<10)
        {
            cout<<moves[dance]<<"\t ";
        }
        else
        {
            dance=dance-10;
            cout<<moves[dance]<<" \t";
        }
    }
}

int conversion(char check)
{
    if (check=='1')
    {
        return 1;
    }
    if (check=='2')
    {
        return 2;
    }
    if (check=='3')
    {
        return 3;
    }
    if (check=='4')
    {
        return 4;
    }
    if (check=='5')
    {
        return 5;
    }
    if (check=='6')
    {
        return 6;
    }
    if (check=='7')
    {
        return 7;
    }
    if (check=='8')
    {
        return 8;
    }
    if (check=='9')
    {
        return 9;
    }
    if (check=='0')
    {
        return 0;
    }
}