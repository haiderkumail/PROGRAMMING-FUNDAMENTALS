#include <iostream>
using namespace std;
main(){

string name;
cout << "enter movie name:";
cin >> name;

int adultticket;
cout << "enter price pf adult ticket:";
cin >> adultticket;

int childticket;
cout << "enter price of child ticket:";
cin >> childticket;

int adultsold;
cout << "enter no of adult tickets sold:";
cin >> adultsold;

int childsold;
cout << "enter no of child tickets sold:";
cin >> childsold;

int soldtickets;
soldtickets = adultsold * adultticket + childsold * childticket;
cout << "total amount of sold tickets=" << soldtickets;

int donation;
donation = soldtickets - 100; 
cout << "remaining amount=" << donation;


}










