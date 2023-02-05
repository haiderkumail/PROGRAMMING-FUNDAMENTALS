#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter the word:";
    cin>>word;
    for(int idx=0;word[idx]!='\0';idx++)
    {
        cout<<word[idx-1]<<" ";
    }  
}