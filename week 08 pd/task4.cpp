#include <iostream>
using namespace std;
int main()
{
    int arraySize = 0;
    cout << "enter the array size";
    cin >> arraySize;
    int array[arraySize];
    int number;
    int mode;
    for (int x = 0; x < arraySize; x++)
    {

        cout << "enter the number:";
        cin >> array[arraySize];
        mode = array[arraySize] % 10;
    }
    for (int x = 0; x < arraySize; x++)
    {
        if (mode == 7)
        {

            cout << "Boom!";
            break;
        }

        else
        {
            cout << "there is no 7 in array";
            break;
        }
    }
}