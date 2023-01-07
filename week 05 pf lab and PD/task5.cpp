#include<iostream>
#include<cmath>
using namespace std;
bool isSymmetrical(int number1);


main(){
while(true){
int number1;
cout<<"enter a number=";
cin>>number1;
isSymmetrical(number1);
}
}
bool isSymmetrical(int number1){

int mod1;
mod1 = number1%10;
int num2,mod2;
num2=number1/10;
mod2=num2%10;
int num3,mod3;
num3=num2/10;
mod3=num3%10;

if(mod1==mod3){
 cout<<"isSymmetrical" << endl;;
}

if(mod1!=mod3){
cout<<"notSymmetrical";

}


return isSymmetrical;


}








