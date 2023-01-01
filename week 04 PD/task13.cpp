#include<iostream>
using namespace std;
void sleep(int difference);
main(){
  int holidays;
  cout<<"enter the number of holidays=";
  cin>>holidays;
 
  int workingdays;
  workingdays=365-holidays;
  cout<<"the working days=" <<workingdays <<endl;

  int time;
  time=(workingdays*63)+(holidays*127);
  cout<<"the time for games=" <<time <<endl;
 
  int difference;
  difference=30000-time;
  cout<<"the difference of norm is =" <<difference <<endl;
  
  sleep(difference);

}
void sleep(int difference){
  if(difference>=0){
  cout <<"tom sleeps well" <<endl;
}
  if(difference<0){
  cout<<"tom run away" <<endl;
}

}