#include <iostream>
using namespace std;
float calculateMoney(int age, float price, float toyPrice);
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    float machinePrice;
    cout << "Enter price of washing Machine: ";
    cin >> machinePrice;
    float toyPrice;
    cout << "Enter price of toy: ";
    cin >> toyPrice;
    float result = calculateMoney(age, machinePrice, toyPrice);
    if (result >= machinePrice)
    {
        cout << "Yes! " << endl
             << result - machinePrice;
    }
    if (result < machinePrice)
    {
        cout << "NO! " << endl
             << machinePrice - result;
    }
}
float calculateMoney(int age, float machinePrice, float toyPrice)
{
    float totalMoney = 0.00;
    float totalMoney1 = 0.00;
    float totalMoney2 = 0.00;
    int counter = 0;
    for (int x = 2; x <= age; x = x + 2)
    {
        counter = counter + 1;
        totalMoney1 = totalMoney1 + (10.00 * counter);
    }
    for (int x = 1; x <= age; x = x + 2)
    {
        totalMoney2 = totalMoney2 + toyPrice;
    }
    float totalMoney3 = (totalMoney1 - counter) + totalMoney2;
    return totalMoney3;
}