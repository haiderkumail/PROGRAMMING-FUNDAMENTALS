#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printMaze();
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates . X = x;
coordinates . Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main (){
system("cls");
printMaze();
}
void printMaze(){
  cout << "#####################################" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
  cout << "#                                   #" << endl;
 cout << "#####################################" << endl;
}

