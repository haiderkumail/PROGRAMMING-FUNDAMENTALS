#include <iostream>
using namespace std;
void printAmplify(int number);
main()
{
    int number;
    cout << "enter the number:";
    cin >> number;
    printAmplify(number);
}
void printAmplify(int number)
{
    
         cout<<1;
        for (int x = 2; x <= number; x++)
        {
            if (x % 4 == 0)
            {
                cout <<"," << x * 10;
                continue;
            }
            
            
                cout<<"," << x;
            
        }
    
}