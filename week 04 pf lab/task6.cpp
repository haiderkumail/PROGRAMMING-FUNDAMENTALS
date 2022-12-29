#include<iostream>
using namespace std;
void username(string name);
main(){
while(true){
string name;
cout << "enter name:";
cin >> name;
username(name);
}
}

void username(string name){

  if(name=="kumail"){
   cout << "your name is=" << name << endl;
}
if (name!="kumail"){
  cout << "enter your name:" << endl;
}
}








