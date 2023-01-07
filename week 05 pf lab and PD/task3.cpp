#include<iostream>
#include<cmath>
using namespace std;
float calculateheight(float height,float base,float degree);
main(){


float base,result,degree,height;

cout<<"enter base=";
cin >> base; 
cout <<"enter degree";
cin >>  degree;

result = calculateheight(height,degree,base) ;

}
float calculateheight(float height,float base,float degree){
float radian = 57.2958;

float radian1 = degree/radian;

height = tan(radian1)*base;
cout<<"the angle of elevation is =" <<height <<endl;
return height;
}