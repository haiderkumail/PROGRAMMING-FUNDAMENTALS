#include <iostream>
using namespace std;
int isGcd(int num1, int num2);
int isLcm(int num1, int num2);
int main()
{
    int num1;
    int num2;
    cout << "Enter two numbers: ";
    cin >> num1;
    cin >> num2;
    int result = isGcd(num1, num2);
    cout << "HCF = " << result << endl;
    int result1 = isLcm(num1, num2);
    cout << "LCM = " << result1;
}
int isGcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
            // n1=n1-n2
            num1 -= num2;
        else
            num2 -= num1;
    }
    return num1;
}
int isLcm(int num1, int num2)
{
    int LCM = (num1 * num2) /
              isGcd(num1, num2);
    return LCM;
}