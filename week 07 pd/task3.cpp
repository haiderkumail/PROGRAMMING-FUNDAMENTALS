#include<iostream>
using namespace std;
void printUpper(int number);
void printLower(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
    printUpper(number);
    printLower(number);
   
}
void printUpper(int number)
{    
        char asteric = '*';
        for (int x = 1; x<=number ; x++)
        {
            for(int j=number-x;j>=1;j--)
            {
                cout<<" ";
            }
            for(int i =1;i<=x;i++)
            {
                cout<<asteric;
            }
            cout<<endl;
        }
}       
    

void printLower(int number)
{
    char asteric = '*';
        for (int x = number; x >=1; x = x-1)
        {
            for(int j=number-x;j>=1;j=j-1)
            {
                cout<<" ";
            }
            for(int i =1;i<=x;i++)
            {
                cout<<asteric;
            }
            cout<<endl;
        }
       
        
}

