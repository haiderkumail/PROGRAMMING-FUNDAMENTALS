#include <iostream>
using namespace std;
main()
{
    int packets;
    cout << "enter the packets:";
    cin >> packets;
    float tons;
    int percent;
    float bus, truck, train;
    float percent1, percent2, percent3;
    for (int x = 1; x <= packets; x++)
    {
        cout << "enter the tons of cargo:";
        cin >> tons;

        if (tons <= 3)
        {
            bus = bus+tons;
            cout << "by bus=" << bus << endl;
        }
        if (tons > 3 && tons <= 11)
        {
            truck = tons;
            cout << "by truck =" << truck << endl;
        }
        if (tons > 11)
        {
            train = tons;
            cout << "by train = " << train << endl;
        }
    }
    int sum = bus + truck + train;
    percent1 = (bus * 100) / sum;
    percent2 = (truck * 100) / sum;
    percent3 = (train * 100) / sum;
    cout << "percentage by bus=" << percent1 << endl;
    cout << "percentage by truck=" << percent2 << endl;
    cout << "percentage by train=" << percent3 << endl;
    float average;
    average = (bus * 200 + truck * 175 + train * 120) / sum;
    cout << "average price=" << average << endl;
}