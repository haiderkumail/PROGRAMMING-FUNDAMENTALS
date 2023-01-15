#include <iostream>
#include <cmath>
using namespace std;
void neededHours(float days,float hours,int workers );
main()
{
    int hours,days,workers;
    cout<<"enter the needed hours =";
    cin>>hours;
    cout<<"enter the days firm has =";
    cin>>days;
    cout<<"enter the number of workers =";
    cin>>workers;
    neededHours(days,hours,workers);

}
void neededHours(float days,float hours,int workers )
{
    float days2;
    cout<<"enter the training days =";
    cin>>days2;
    float day;
    day = days * days2;
    float days3 = days - day;
    cout<<"remaining working days ="<<days3<<endl;
    int hours2 ;
    cout<<"per day working hours =";
    cin>>hours2;
    int hours3 = workers * hours2;
    cout<<"all workers working hours ="<<hours3<<endl;
    int hours4 = days3 * hours3;
    cout<<"all workers working hours = "<<hours4<<endl;
    float hoursleft=hours4 - hours;

    if(hoursleft>=90)
    {
        cout<<"yes!"<<hoursleft<<"hours left";
    } 
    if(hoursleft<90)
    {
        cout<<"not enough time!"<<hoursleft<<"hours needed";

    }


}