#include <iostream>
using namespace std;
main(){

int size;
int cost;
int area;

cout << "the size of fertilizing bad:";
cin >> size;
cout << "the cost of the bag:";
cin >> cost;
cout << "the area in square feet:";
cin >> area;
 
int costperpound;
costperpound = size / cost;
cout << "total fertilizer per pound cost:" << costperpound;
int costperarea;
costperarea = area / cost;
cout << "total cost area:" << costperarea;


}
 