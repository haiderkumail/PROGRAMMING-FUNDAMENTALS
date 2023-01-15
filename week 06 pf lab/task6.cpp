#include<iostream>
using namespace std;
float discount(string day,string month,float amount);
main()
{
  int amount;
  cout<<"enter the amount =";
  cin>>amount;
  string day,month;
  cout<<"enter the day=";
  cin>>day;
  cout<<"enter the month = ";
  cin>>month;
  float purchase = discount(day, month,amount);
  cout<<"payable amount=" <<purchase;
}
float discount(string day,string month,float amount)
{
    float purchase = amount;
    if(day == "sunday")
    {
        if(month == "october")
        {
           purchase = amount * 10 / 100;
           purchase = amount - purchase;
        }
        else
        {
            purchase =amount * 5/100;
            purchase = amount - purchase;
        }
    }
    return purchase;
}