#include<iostream>
#include<cmath>
using namespace std;
void calculatepool(int p1, int p2,int vol, int hours);
main()
{
    int vol,p1,p2;
    float hours;
    cout<<"enter the volume of pool=";
    cin>>vol;
    cout<<"enter the flow of pipe1 per hour=";
    cin>>p1;
    cout<<"enter the flow of pipe2 per hour=";
    cin>>p2;
    cout<<"enter the absent hours=";
    cin>>hours;
    calculatepool(p1,p2,vol,hours);

}
void calculatepool(int p1, int p2,int vol, int hours)
{
float totalpipe1 = p1 * hours;
float totalpipe2 = p2 * hours;
float totalpipe = totalpipe1 + totalpipe2;
cout << totalpipe << endl;
float poolpercent = (totalpipe * 100) / vol;
cout<< "pool is" << poolpercent <<"% full" <<endl;
float percent1 = (totalpipe1 * 100) / vol;
float percent2 = (totalpipe2 * 100) / vol;
cout<<"% of pipe1="<<percent1<<"%" <<endl<< "%of pipe2 = "<<percent2 <<"%" << endl;
int overflow;
if(totalpipe>vol)
{
    overflow = totalpipe - vol;
cout<< "the overflow is =" <<overflow;
}



}