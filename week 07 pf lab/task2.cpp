#include <iostream>
using namespace std;
void printFabonacci(int number);
main()
{
    int number;
    cout<<"enter the number:";
    cin>>number;
     printFabonacci(number);
}
void printFabonacci(int number)
{
    int n1 = 0;
    int n2 = 1;
    int result = 0;
    cout<<"fabonacci series:"<<n1<<" "<<n2<<" ";
    for(int count= 1;count<=number-2;count++)
    {
        
        result = n1+n2;
        n1 = n2;
        n2 = result; 
        cout<< result << " " ;
        
    }
}