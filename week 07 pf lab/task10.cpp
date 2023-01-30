#include <iostream>
using namespace std;
void printPercentage(int number);
main()
{
    int number;
    cout << "enter the number:";
    cin >> number;
    printPercentage(number);
}
void printPercentage(int number)
{
    float percent1 = 0, percent2 = 0, percent3 = 0, percent4 = 0, percent5 = 0;
    int integer, integer1, integer2, integer3, integer4, integer5;

    for (int x = 1; x <= number; x++)
    {
        cout << "enter the integers:";
        cin >> integer;
        if (integer <= 200)
        {
            integer = integer + 1;
            integer1 = integer;
            percent1 = (integer1 * 100) / number;
            cout << "the percent of p1=" << percent1 << endl;
        }
        if (integer > 200 && integer <= 399)
        {
            integer = integer + 1;
            integer2 = integer;
            percent2 = (integer2 * 100) / number;
            cout << "the percent of p2=" << percent2 << endl;
        }
        if (integer > 399 && integer <= 599)
        {
            integer = integer + 1;
            integer3 = integer;
            percent3 = (integer3 * 100) / number;
            cout << "the percent of p3=" << percent3 << endl;
        }
        if (integer > 599 && integer <= 799)
        {
            integer = integer + 1;
            integer4 = integer;
            percent4 = (integer4 * 100) / number;
            cout << "the percent of p4=" << percent4 << endl;
        }
        if (integer > 799)
        {
            integer = integer + 1;
            integer5 = integer;

            percent5 = (integer5 * 100) / number;
            cout << "the percent of p5=" << percent5 << endl;
        }
    }
    float sum = integer1 + integer2 + integer3 + integer4 + integer5;
}