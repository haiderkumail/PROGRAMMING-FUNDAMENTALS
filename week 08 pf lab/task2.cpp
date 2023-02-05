#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter the word:";
    cin>>word;
    int sum;
    for(int idx =1;word[idx]!='\0';idx++)
    {
         sum = word[idx]++;
        
    }   
    if(sum%2==0)
        {
            cout<<"true";
        }
        else{
            cout<<"false";
        } 

}