#include<iostream>
#include<cmath>
using namespace std;



main(){
int num1,num2;
cin>>num1>>num2;
int result;
result= pow(num1,num2);
cout<<result << "is power"<<endl;
int result2;
result2=min(num1,num2);
cout<<result2 << "is min"<<endl;
float result3;
result3=cbrt(num1);
cout<<result3 << "is cube root"<<endl;
float num3;
cin>>num3;
float result4;
result4=ceil(num3);
cout<<result4 <<"is ceil of number"<< endl;
int result5;
result5=floor(num3);
cout<<result5<<"is floor of number";

}
