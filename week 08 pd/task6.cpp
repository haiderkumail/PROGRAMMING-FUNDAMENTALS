#include<iostream>
using namespace std;
int main()
{
    int arraySize=0;
    cout<<"enter the arraySize:";
    cin>>arraySize;
    int transform[arraySize];
    int number;
    int output;
    cout<<"enter the number of times you need to transform even odd :";
    cin>>number;
    for(int index=0;index<arraySize;index++)
    {
        cout<< "enter the number:";
        cin>>transform[index];
    }
    for(int index=0;index<arraySize;index++)
    {
        if(transform[index]%2==0)
        {
            output=transform[index]-(number*2);
        }
        if(transform[index]%2!=0)
        {
            output=transform[index]+(number*2);
        }
        cout<<output<<endl;
    }
}