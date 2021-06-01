//class program to add two time values
#include<iostream>
using namespace std;
class TimeClass
{
private:
    int hh;
    int mm;
    int ss;
public:
    TimeClass();
    ~TimeClass();
    void gettime();
    void showtime();
    TimeClass addtime(TimeClass &,TimeClass &);
};

TimeClass::TimeClass(/* args */)
{
    hh=0;
    mm=0;
    ss=0;
}

TimeClass::~TimeClass()
{
}
void TimeClass::gettime(){
    char d;
    cin>>hh>>d>>mm>>d>>ss;

}
void TimeClass::showtime(){
    
    cout<<hh<<":"<<mm<<":"<<ss;
}
TimeClass TimeClass::addtime(TimeClass &ob1,TimeClass &ob2){
    TimeClass obfinal;
    if((ob1.ss+ob2.ss)>=60){
        obfinal.ss=0;
        obfinal.mm+=1;
    }
    else{
        obfinal.ss=ob1.ss+ob2.ss;
    }
    if((obfinal.mm+ob1.mm+ob2.mm)>=60){
        obfinal.mm=0;
        obfinal.hh+=1;
    }
    else{
        obfinal.mm=ob1.mm+ob2.mm;
    }
    obfinal.hh=obfinal.hh+ob1.hh+ob2.hh;
    return obfinal;

}
int main(){
    TimeClass time1,time2,timefinal;
    cout<<"Enter Time 1(HH:MM:SS):";
    time1.gettime();
    cout<<"Time you Entered:";
    time1.showtime();
    cout<<"\nEnter Time 2(HH:MM:SS):";
    time2.gettime();
    cout<<"Time you Entered:";
    time2.showtime();
    timefinal=timefinal.addtime(time1,time2);
    cout<<"\nTime added:";
    timefinal.showtime();

}