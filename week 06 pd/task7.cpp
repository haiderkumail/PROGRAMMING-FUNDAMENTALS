# include<iostream>
using namespace std;


void findTime(int startHour, int startMin, int aarivalHour, int arrivalMin) ;

int main()
{
    int startHour, startMin, arrivalHour, arrivalMin;
    cout <<"enter exam starting time hours: ";
    cin >> startHour;
    cout <<"enter exam starting time min: ";
    cin >> startMin;

    cout <<"enter arrival time hours: ";
    cin >> arrivalHour;
    cout <<"enter arrival time min: ";
    cin >> arrivalMin;


    findTime(startHour,startMin, arrivalHour, arrivalMin);

    
}

void findTime(int startHour,int startMin,int arrivalHour,int arrivalMin)
{
    string ans;
    float diffTime;
    int diffTimeHours,  diffTimeMin; 

    int examTime = (startHour * 60) + (startMin);
    int arrivalTime = (arrivalHour * 60) + (arrivalMin);

    
     diffTime = examTime - arrivalTime;

    diffTimeHours = diffTime / 60;
    diffTimeMin = diffTime - (60 * diffTimeHours);
     if (diffTime < 0)
     {
        ans = "late";
     }
     else if (diffTime <= 30)
     {
        ans = "on time"; 
     }
     else if(diffTime > 30)
     {
        ans ="too early";
     }
     cout << ans<< endl;

    if (diffTimeHours == 0)
    {
        if (diffTimeMin < 0)
            cout << diffTimeMin * -1 ;
        if (diffTimeMin >= 0)
            cout << diffTimeMin * 1 ;
        cout << " minutes ";
    }
    else 
    {
        if (diffTimeHours < 0 || diffTimeMin < 0)
            cout << diffTimeHours * -1<< ":"<< diffTimeMin * -1 ;
        if (diffTimeHours >= 0 or diffTimeMin >= 0)
            cout << diffTimeHours * +1<< ":"<< diffTimeMin * +1 ;
        cout << " hours ";
    }

    if (diffTimeHours < 0 || diffTimeMin < 0)
        cout << " after the start" ;
    else if (diffTimeHours >= 0 || diffTimeMin >= 0)
        cout << " before the start";

}
