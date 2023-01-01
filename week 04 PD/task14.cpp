#include<iostream>
using namespace std;
void printmenu();


main(){

  system("cls");
  
  int choice;
  string name1,name2,temp;
  float matric1,inter1,ecat1,aggregate1;
  float matric2,inter2,ecat2,aggregate2;
    printmenu();
 while(true){
      
  cout<<"enter your choice=";
  cin>>choice;

if(choice==1){
   cout<<"enter your name=";
   cin>>name1;
   cout<<"enter your marks in matric=";
   cin>>matric1;
   cout<<"enter your marks in inter=";
   cin>>inter1;
   cout<<"enter your marks in ecat=";
   cin>>ecat1;
   cout<<"enter c to continue";
   cin>>temp;
}

if(choice==2){
   cout<<"enter your name=";
   cin>>name2;
   cout<<"enter your marks in matric=";
   cin>>matric2;
   cout<<"enter your marks in inter=";
   cin>>inter2;
   cout<<"enter your marks in ecat=";
   cin>>ecat2;
   cout<<"enter c to continue";
   cin>>temp;  

}
if(choice==3){
 aggregate1 = (matric1 / 1100) * 30 + (inter1 / 550) * 30 +(ecat1 / 400) * 40;
 cout<<"aggregate of"<<name1<<"is="<<aggregate1 <<endl;
   cout<<"enter c to continue";
   cin>>temp;
}  
if(choice==4){
 aggregate2 = (matric2 / 1100) * 30 + (inter2 / 550) * 30 +(ecat2 / 400) * 40;
 cout<<"aggregate of"<<name2<<"is="<<aggregate2 <<endl;
   cout<<"enter c to continue";
   cin>>temp; 
}
if(choice==5){
  if(ecat1>ecat2){
    cout<<"the first roll no is of=" <<name1 <<endl;
    cout<<"the second roll no is of=" <<name2 <<endl;
  }
  if(ecat2>ecat1){
    cout<<"the first roll no is of=" <<name2 <<endl;
    cout<<"the second roll no is of=" <<name1 <<endl;
  }

}

}
}
void printmenu(){
cout<<"**********************************************" << endl;
cout<<"*                                            *" << endl;
cout<<"*         University Admission               *" << endl;
cout<<"*              Management                    *" << endl;
cout<<"*                System                      *" << endl;
cout<<"*                                            *" << endl;
cout<<"**********************************************" << endl;
cout<<"----------------------------------------------" <<endl;
cout<<"                  MAIN MENU                   " <<endl;
cout<<"press 1 to enter the first student details"<<endl;
cout<<"press 2 to enter the second student details"<<endl;
cout<<"press 3 to calculate aggregate of first student"<<endl;
cout<<"press 4 to calculate aggregate of second student"<<endl;
cout<<"press 5 to display the roll no on screen"<<endl;

}  
 


