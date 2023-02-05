#include<iostream>
using namespace std;
string fruitName[4]={"peach","apple","guava","watermelon"};
int price[4]={60,70,40,30};
main()
{
    
    string fruit;
    int quantity,bill;
    cout<<"enter the fruit name:";
    cin>>fruit;
    cout<<"enter the quantity:";
    cin>>quantity;
    for(int index=0;index<4;index++)
    {
        if(fruit==fruitName[index])
        {
            bill = quantity*price[index];
            cout<<"the total bill:"<<bill<<endl;
        }
        
        
            
            
        
    }

}