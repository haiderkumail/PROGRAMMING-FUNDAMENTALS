#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
float division(int number01, int number02);
int add(int number1 , int number2);
main(){
   
   int number1,number2;
   int result;
   cout<<"enter first number=";
   cin>>number1;
   cout<<"enter second number=";
   cin>>number2;
  
   result = add( number1,number2);
    cout<<"the sum is =" << result <<endl;
    
    int number01,number02;
   int result1;
   cout<<"enter first number=";
   cin>>number01;
   cout<<"enter second number=";
   cin>>number02;
   system("cls");
   result1 = division( number01,number02);
    cout<<"the division is =" << result1 <<endl;
  int result2; 
result2= max(number1,number2);
 cout<<result2 << "is greater" << endl;

}



int add(int number1 , int number2){
  int sum=number1+number2;
  return sum;
  
}
float division(int number01, int number02){

 int division= number01 / number02;
 return division;
 return result2
}
