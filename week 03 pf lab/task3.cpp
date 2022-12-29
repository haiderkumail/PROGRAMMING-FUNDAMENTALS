#include <iostream>
using namespace std;
main(){

int initialvelocity;
int acceleration;
int time;
int finalvelocity;

cout<< "enter initialvelocity of car:";
cin >> initialvelocity;
cout << "enter acceleration of car:";
cin >> acceleration;
cout << "enter time of car:";
cin >> time;
finalvelocity = (acceleration * time) - initialvelocity;
cout << "the finalvelocity of car is :" << finalvelocity;

}