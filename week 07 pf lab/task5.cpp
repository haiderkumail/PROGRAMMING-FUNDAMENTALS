#include<iostream>
using namespace std;
void printTable(int number);
main()
{  
    int number;
    cout<<"enter the number:";
    cin>>number;
    printTable(number);
}
void printTable(int number)
{
    int multiply;
    for(int count = 0;count<=10;count++)
    {
        multiply = count * number;
        cout<< number<<" * "<<count<<" = "<<multiply<<endl;
    }
}