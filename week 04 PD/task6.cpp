#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x ,int y);


main(){
   
gotoxy(78,23);

   cout << "A" << endl;

gotoxy(78,24);

   cout << "W" << endl;

gotoxy(78,25);

   cout << "A" << endl;

gotoxy(78,26);

   cout << "I" << endl;

gotoxy(78,27);

   cout << "S" << endl;

}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates . X=x;
coordinates . Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
