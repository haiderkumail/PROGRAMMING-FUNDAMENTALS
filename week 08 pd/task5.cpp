#include<iostream>
using namespace std;
int main()
{
    int arraySize=4;
    string character[arraySize];
    for(int index=0;index<4;index++)
    {
        cout<<"enter the symbols or number:";
        cin>>character[index];
        
    }
    if(character[0]==character[1]&&character[1]==character[2]&&character[2]==character[3])
        {
            cout<<"true";
        }
        else{
            cout<<"false";
        }
}