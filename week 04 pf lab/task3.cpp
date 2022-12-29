#include <iostream>
using namespace std;
void minimum(int num1, int num2);
void maximum(int num1, int num2);
void equal(int num1, int num2);
main(){
while(true){
   int num1,num2;
   cout << "enter 1st number=";
   cin >> num1;
   cout << "enter 2nd number=";
   cin >> num2;
   int choice;
   cout << "enter choice(1,2,3)";
   cin >> choice; 
   if (choice==1){
   maximum(num1,num2);
}
   if (choice==2){
   minimum(num1,num2);
}
  if (choice==3){
  equal(num1,num2);
}
   
}
}

void minimum(int num1, int num2)
  {
   if(num1<num2){
   cout<< "this is smaller number "<< num1 << endl;
}
   if(num2<num1){
   cout<< "this is smaller number "<< num2 << endl;
}
   if(num1=num2){
   cout << "they are equal:" << (num1=num2) << endl;
}

}
void maximum(int num1, int num2){

      if(num1<num2){
   cout<< "this is greater number "<< num1 << endl;
}
   if(num2<num1){
   cout<< "this is greater number "<< num2 << endl;
}
   if(num1=num2){
   cout << "they are equal:" << (num1=num2) << endl;
}
}

void equal(int num1, int num2){
   if(num1<num2){
   cout<< "this is greater number "<< num1 << endl;
}
   if(num2<num1){
   cout<< "this is greater number "<< num2 << endl;
}
   if(num1=num2){
   cout << "they are equal:"  << endl;
}
}
