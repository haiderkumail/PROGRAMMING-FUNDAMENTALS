#include <iostream>
using namespace std;
void countryname(string country, float price);
main(){
while(true){
 string country;
 float price;
  cout<<"enter the country=";
  cin>>country;
  cout<<"enter ticket price in $=";
  cin>>price;
  countryname(country,price);
}
  
}
void countryname(string country,float price){
  if(country=="pakistan"){
    
    int discount1;
    discount1=0.95*price;
    cout<<"price of pakistani ticket=" << discount1 << endl;
}
  if(country=="ireland"){
  int discount2;
  discount2=0.9*price;
  cout<<"price of ireland ticket=" << discount2 << endl;
}
   if(country=="india"){
  int discount3;
  discount3=0.8*price;
  cout<<"price of india ticket=" << discount3 << endl;
}
 if(country=="england"){
  int discount4;
  discount4=0.7*price;
  cout<<"price of england ticket=" << discount4 << endl;
}
 if(country=="canada"){
  int discount5;
  discount5=0.55*price;
  cout<<"price of canada ticket=" << discount5 << endl;
}







}
