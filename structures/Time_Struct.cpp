//create a structure having HH:MM:SS as its data types
#include<iostream>
using namespace std;
struct Time_Struct
{
    int hours,min,sec;
    long Total_time;
};
int main(){
    Time_Struct ob1,ob2,Final_time;
    char d;
    cout<<"Enter Time 1(HH:MM:SS):";
    cin>>ob1.hours>>d>>ob1.min>>d>>ob1.sec;
    cout<<"Enter Time 2(HH:MM:SS):";
    cin>>ob2.hours>>d>>ob2.min>>d>>ob2.sec;
    Final_time.Total_time=ob1.hours*3600 + ob1.min*60 + ob1.sec + ob2.hours*3600 + ob2.min*60 + ob2.sec;
    Final_time.hours=Final_time.Total_time/3600;
    Final_time.min=(Final_time.Total_time%3600)/60;
    Final_time.sec=(Final_time.Total_time%3600)%60;
    cout<<"Total Time is "<<Final_time.hours<<":"<<Final_time.min<<":"<<Final_time.sec;
}
