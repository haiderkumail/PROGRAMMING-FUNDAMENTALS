#include <iostream>
using namespace std;
void pyramid(float length,float width, float height);
main()
{
    float length, width, height;
    cout << "enter length =";
    cin >> length;
    cout << "enter width =";
    cin >> width;
    cout << "enter height =";
    cin >> height;
    string units;
    cout << "enter units =";
    cin>>units;
    float centimeter, milimeter, kilometer;
    if (units=="centimeter")
    {
        length = length * 100;
        width = width * 100;
        height = height * 100;
    }
    if (units=="milimeter")
    {
        length = length * 1000;
        width = width * 1000;
        height = height * 1000;
    }
    if(units=="kilometer")
    {
        length = length / 1000;
       width = width / 1000;
       height = height / 1000;

    }
 pyramid(length,width,height);
}
void pyramid(float length, float width, float height)
{
    float volume;
    volume = (length * width * height) / 3 ;
    cout<<"volume is =" <<volume;
}