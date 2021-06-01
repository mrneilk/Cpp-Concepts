//HH:MM:SS to secs using functions and vice versa using structure also
//after that swaping two structures
#include<iostream>
using namespace std;
struct timedef
{
    int hh,mm,ss;
    long time_sec;
};
timedef swap(timedef &, timedef &);        //swaping of struct variables
timedef change_time2(long &);   //returns a structure function type and return type should be same
long change_time(timedef &);  //function declaration use the referece symbol here also
int main(){
    timedef ob1,ob2;
    char d;
    cout<<"Enter Time(HH:MM:SS)(entering in ob1):";
    cin>>ob1.hh>>d>>ob1.mm>>d>>ob1.ss;
    cout<<"Time in Seconds:";
    change_time(ob1);
    cout<<ob1.time_sec;
    cout<<"\nEnter Time in Seconds(entering in ob2):";
    cin>>ob2.time_sec;
    ob2=change_time2(ob2.time_sec);
    cout<<"Time in (HH:MM:SS):";
    cout<<ob2.hh<<d<<ob2.mm<<d<<ob2.ss;
    swap(ob1,ob2);
    cout<<"\nValues of ob1:";
    cout<<"\n"<<ob1.hh<<d<<ob1.mm<<d<<ob1.ss<<" "<<ob1.time_sec;
    cout<<"\nValues of ob2:";
    cout<<"\n"<<ob2.hh<<d<<ob2.mm<<d<<ob2.ss<<" "<<ob2.time_sec;
}
long change_time(timedef &ob){   //function defination called by reference
    ob.time_sec= ob.hh*3600+ob.mm*60+ob.ss;
    return ob.time_sec;
}
timedef change_time2(long &timesec){
    timedef ob;
    ob.time_sec=timesec;
    ob.hh=timesec/3600;
    ob.mm=(timesec%3600)/60;
    ob.ss=(timesec%3600)%60;
    return ob;      //returns type of timedef structure
}
timedef swap(timedef &ob1, timedef &ob2){
    timedef temp;
    temp=ob1;
    ob1=ob2;
    ob2=temp;
    return ob1,ob2;

}