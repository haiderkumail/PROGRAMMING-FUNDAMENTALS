#include <iostream>
using namespace std;
void istrue(string enter);
main(){

string enter;
cout << "enter word=";
cin >> enter;
istrue(enter);

}
void istrue(string enter){
if (enter=="true"){
  cout << "false" << endl;
}
if (enter=="false"){
  cout << "true" << endl;
}
}