#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
   
    
        char asteric = '*';
        for (int i = number; i >=1; i= i-1)
        {
            for(int j=i;j>=1;j=j-1)
            {
                cout<<asteric;
            }
            cout<<endl;
        }
        
    
}