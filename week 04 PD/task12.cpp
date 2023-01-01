#include<iostream>
using namespace std;
void flower(float discount,float price);
main(){
  int redroses,whiteroses,tulips;
  cout<<"enter number of redroses=";
  cin>>redroses;
  cout<<"enter number of white roses=";
  cin>>whiteroses;
  cout<<"enter number of tulips=";
  cin>>tulips;
 float price1,price2,price3,price,discount; 
  price1=redroses*2.00;
  price2=whiteroses*4.10;
  price3=tulips*2.50;
  price=price1+price2+price3;
  cout<<"your original bill is =" <<price <<endl;
  flower(discount,price);
}
void flower(float discount,float price){
   
  if(price>200){
  discount=price*0.8;
  cout<<"your discounted bill is = " <<discount << endl;
}



}