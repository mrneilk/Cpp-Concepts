//conversion of old to new format and vice versa
// 20 shillings=1 pound
//12 pence=1 shillings old system
//new is 100 pence =1 pound
//static conversion of datatype
#include<iostream>
using namespace std;
int main(){
    float pound,shilling,pence;
    cout<<"Old To New"<<endl;
    cout<<"Enter pounds:";
    cin>>pound;
    cout<<"Enter shillings:";
    cin>>shilling;
    cout<<"Enter pence:";
    cin>>pence;
    float currnew=0;
    shilling+=pence/12;
    currnew=pound+(shilling/20);
    char psym=156;
    cout<<"Decimal Pounds="<<psym<<currnew<<endl;
    cout<<"New to Old"<<endl;
    cout<<"Enter Decimal pounds:";
    cin>>currnew;
    float fractionpart;
    pound=static_cast<int>(currnew);
        fractionpart=currnew-pound;
        float shillingnew=fractionpart*20;
        shilling =static_cast<int>(shillingnew);
        float f2=shillingnew-shilling;
        pence=f2*12;
        pence=static_cast<int>(pence);

    cout<<"Equivalent in old Notation="<<psym<<pound<<"."<<shilling<<"."<<pence;    

}