#include <iostream>
using namespace std;
int dots(int number);
main()
{
    int number;
    cout << "enter the number:";
    cin >> number;
    int result = dots(number);
    cout << result;
}
int dots(int number)
{
    int n1 = 1;
    int n2 = 2;
    int sum =0;
    for (int x = 1; x <= number; x++)
    {
        sum = sum+x;
        
        
        
        
    }

    return sum;
}