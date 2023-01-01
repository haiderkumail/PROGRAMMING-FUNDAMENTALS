#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x ,int y);


main(){
   
gotoxy(78,23);

   cout << "KUMAIL" << endl;

}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates . X=x;
coordinates . Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


