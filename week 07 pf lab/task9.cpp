#include <iostream>
using namespace std;
float calculatePrice(float money, int year);
int main()
{
    float money;
    cout << "Enter inherited  money:";
    cin >> money;
    int year;
    cout << "Enter year: ";
    cin >> year;
    float result = calculatePrice(money, year);
    if (result <= money)
    {
        cout << "yes! He will live a carefree life and will have " << money - result << " dollars left";
    }
    if (result > money)
    {
        cout << "He will need " << result - money << " dollars to survive";
    }
}
float calculatePrice(float money, int year)
{
    float price1;
    float price2;
    float totalPrice1 = 0;
    float totalPrice2 = 0;
    float totalPrice;
    for (int i = 1800; i <= year; i = i + 2)
    {
        price1 = 12000;
        totalPrice1 = totalPrice1 + price1;
    }
    for (int i = 1801; i <= year; i = i + 2)
    {
        price2 = 12000 + 50.00 * (18.00 + (year - 1800));
        totalPrice2 = totalPrice2 + price2;
    }
    totalPrice = totalPrice1 + totalPrice2;
    return totalPrice;
}