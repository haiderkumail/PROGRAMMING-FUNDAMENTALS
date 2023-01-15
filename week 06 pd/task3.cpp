#include <iostream>
using namespace std;
string zodiacSign(int date, string month);
main() {
  int date;
  string month;
  string month2;
  cout << "enter the date:";
  cin >> date;
  cout << "enter the month:";
  cin >> month;

  string result = zodiacSign(date, month);
  cout << result;
}
string zodiacSign(int date, string month) {
  string sign;
   if((month == "march" && date >= 21) || (month == "april" && date <= 19))
  {
        sign = "aries"; 
  }
  
   if((month=="april" && date>=20) || (month=="may" && date<=20))
    {
      sign = "taurus";
    }
  if((month=="may" && date>=21) || (month=="june" && date<=20))
    {
      sign = "gemini";
    }
    if((month=="june" && date>=21) || (month=="july" && date<=22))
    {
      sign = "cancer";
    }
  if((month=="july" && date>=23) || (month=="august" && date<=22))
    {
      sign = "leo";
    }
  if((month=="august" && date>=23) || (month=="september" && date<=22))
    {
      sign = "virgo";
    }
  if((month=="september" && date>=23) || (month=="october" && date<=22))
    {
      sign = "libra";
    }
  if((month=="october" && date>=23) || (month=="november" && date<=21))
    {
      sign = "scorpio";
    }
  if((month=="november" && date>=22) || (month=="december" && date<=21))
     {
      sign = "sagittious"; 
     }
     if((month=="december" && date>=22) || (month=="january" && date<=19))  
    {
      sign = "capricorn";
    }
    if((month=="january" && date>=20) || (month=="february" && date<=18))
    { 
    sign = "aquarius";
    }
  if((month=="february" && date>=19) || (month=="march" && date<=20))
    {
      sign = "pisces";
    }

  return sign;
}