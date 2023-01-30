#include <iostream>
using namespace std;
int printCounting(int num);
main()
{
    int num;
    cout << "enter a number";
    cin >> num;
    printCounting(num);
    int result = printCounting(num);
    cout << result;
}
int printCounting(int num)
{
    int sum = 0;
    for (int count = 1; count <= num; count++)
    {
        sum = sum + count;
    }
    return sum;
}