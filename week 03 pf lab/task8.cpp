#include <iostream>
using namespace std;
main(){

int vegetablesperkg;
cout << "price of vegetables per kg:";
cin >> vegetablesperkg;

int fruitsperkg;
cout << "price of fruits per kg:";
cin >> fruitsperkg;

int totalkgsofveges;
cout << "total kg of vegetables:";
cin >> totalkgsofveges;

int totalkgsoffruits;
cout << "total kg of fruit:";
cin >> totalkgsoffruits;

 
int earning; 
cout << "total earning in coins:";
earning = vegetablesperkg * totalkgsofveges + fruitsperkg * totalkgsoffruits;
cout << earning;

float totalearning;
cout << "total earning in rupess:";
totalearning = earning * 1.94;
cout << totalearning;
}
























 