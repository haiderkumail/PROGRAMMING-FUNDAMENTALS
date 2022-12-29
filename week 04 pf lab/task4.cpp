#include <iostream>
using namespace std;

void calculatebill (string day , int amount);
main(){
  string day;
  int amount;
  cout << "enter day=";
  cin >> day;
  cout << "enter amount=";
  cin >> amount;
 
 calculatebill (day ,amount);
}
void calculatebill (string day , int amount){
 float discount1, discount2;
 discount1= 0.9*amount;
 discount2=0.95*amount;

  if (day=="sunday"){
  cout << "the discounted bil is" << discount1 << endl;
}
  if (day!="sunday"){
  cout << "the bill is=" << discount2 << endl;
}

}