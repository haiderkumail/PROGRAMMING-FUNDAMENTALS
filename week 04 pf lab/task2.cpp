#include <iostream>
using namespace std;
void iseven (int num);
main(){
while(true){
   int num;
   cout << "enter number: ";
   cin >> num;
   iseven(num);
}   
}
void iseven (int num){    
   if (num%2==0){
   cout << "even" << endl;
}
   if (num%2!=0){
   cout << "odd" << endl;
}

}