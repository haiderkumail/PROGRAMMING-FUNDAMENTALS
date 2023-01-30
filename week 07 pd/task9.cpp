#include <iostream>
using namespace std;

void printShape(int number);
main()
{
    int number;
    cout << "enter the number of rows:";
    cin >> number;
    printShape(number);
}

void printShape(int number)
{

    char asteric = '*';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << asteric;
        }
        for (int k = number - i; k >= 1; k--)
        {
            cout << " ";
        }
        for (int k = number - i; k >= 1; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << asteric;
        }
        cout << endl;
    }
}