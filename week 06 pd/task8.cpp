#include<iostream>
using namespace std;
string findBorder(int height,int xcord,int ycord);
main()
{
    int height,xcord,ycord;
    cout<<"enter the height:";
    cin>>height;
    cout<<"enter the x coordinate:";
    cin>>xcord;
    cout<<"enter the y coordinate:";
    cin>>ycord;
    string result = findBorder(height,xcord,ycord);
    cout<< result;
}
string findBorder(int height,int xcord,int ycord)
{
    string position;
    int base = height * 3;
    int roof = height * 4;

   
    
    if ((xcord == 0 || xcord == base) && (ycord >= 0 && ycord <= height) )
    {
        position = "border";    
    }
    if ((ycord == 0 ) && (xcord >= 0 && xcord <= base ) )
    {
         position = "border";    
    }
    if ((ycord == height ) && ((xcord >= 0 && xcord <= height ) || (xcord >= height * 2 && xcord <= base)) )
    {
          position = "border"; 
    }
    if ((xcord == height || xcord == height *2) && (ycord >= height ||  ycord <= height*2))
    {
          position = "border";   
    }
    if ((ycord == roof) && (xcord >= height &&  xcord <= height*2))
    {
         position = "border";  
    }



    if ((xcord > 0 && xcord < base) && (ycord > 0 && ycord <height ) )
    {
          position = "inside"; 
    }
    if ((xcord > height && xcord < height *2) && (ycord > 0 &&  ycord < roof))
    {
      position = "inside";    
    }
    
    else
    {
        position = "outside";
    }
    return position;

 
}