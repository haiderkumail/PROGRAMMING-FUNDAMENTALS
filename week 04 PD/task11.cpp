#include<iostream>
using namespace std;
void ischallenged(int speed);
main(){
int speed;
cout<<"enter the speed of car=";
cin>>speed;
ischallenged(speed);
}
void ischallenged(int speed){
  if(speed>100){
  cout<<"halt...you will be challenged" <<endl;
}
  if(speed<=100){
   cout<<"you are going good" << endl;
}
}