#include <iostream>
using namespace std;

main()
{
    int arraysize;
    int count = 0;
    int coloringEach = 0;
    int switches = 0;
    int output = 0;

    cout << "Enter array size: ";
    cin >> arraysize;
    string color[arraysize];

    for(int index= 0 ; index < arraysize ; index++)
    {
        cout << "Enter color: ";
        cin >> color[index];
        count++;
    }
    coloringEach = count * 2;
    for(int y = 0 ; y < arraysize ; y++)
    {
        if (color[y] == color [y+1])
        {
            continue;
        }
        if(color[y] != color[y + 1])
        {
            switches++;
        }
    }
    output = switches + coloringEach - 1;
    cout << output << endl;

}