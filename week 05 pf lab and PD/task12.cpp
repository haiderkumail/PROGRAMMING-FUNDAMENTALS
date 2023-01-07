#include <iostream>
using namespace std;
float taxcalculator(char type, float price, float totalamount);
main()
{
    float price;
    cout << "enter the price =";
    cin >> price;
    int tax;
    cout<<"enter the tax rate =";
    cin>>tax;
    cout<<"the tax rate =" <<tax <<"%"<<endl;
    
    char type;
    cout << "enter type =";
    cin >> type;
    float totalamount;
    if (type == 'M')
    {
        totalamount = (price * tax) / 100;
        cout << "total tax =" << totalamount << endl;
    }
    if (type == 'E')
    {
        totalamount = (price * tax) / 100;
        cout << "total tax =" << totalamount << endl;
    }
    if (type == 'S')
    {
        totalamount = (price * tax) / 100;
        cout << "total tax =" << totalamount << endl;
    }
    if (type == 'V')
    {
       totalamount = (price * tax) / 100;
        cout << "total tax =" << totalamount << endl;
    }
    if (type == 'T')
    {
        totalamount = (price * tax) / 100;;
        cout << "total tax =" << totalamount << endl;
    }
    float result;
    result = taxcalculator(type, price, totalamount);
}
float taxcalculator(char type, float price, float totalamount)
{
    float finalprice = price + totalamount;
    cout << "final price =" << finalprice;
    float result;
    return result;
}