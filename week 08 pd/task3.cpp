#include<iostream>
using namespace std;
int main()
{
    string fruitName;
    cout<<"enter the fruit name:";
    cin>>fruitName;
    int len = fruitName.length();
    
    if(len%2==0)
    {
        cout<<"true";

    }
    else{
        cout<<"false";
    }

}