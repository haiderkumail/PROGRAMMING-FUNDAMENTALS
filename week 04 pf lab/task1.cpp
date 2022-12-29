#include <iostream>
using namespace std;
void iselegible( int number);
main(){

int number;
while (true){
cout << "enter number:";
cin >> number;
iselegible(number);
}
}
void iselegible( int number){ 
  if (number>=18){
  cout << "elegible" << endl;
}

  if (number<18){
  cout << "not elegible" << endl;

}


}